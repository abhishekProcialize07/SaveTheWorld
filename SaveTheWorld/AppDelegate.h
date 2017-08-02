//
//  AppDelegate.h
//  SaveTheWorld
//
//  Created by Johngalt International on 02/08/17.
//  Copyright © 2017 Johngalt International. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

