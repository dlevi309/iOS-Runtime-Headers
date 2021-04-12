/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/

#import <libobjc.A.dylib/WSBaseCoordinator.h>

@class UINavigationController;

@interface WallpaperSettings.WSWallpaperSettingsCoordinator : NSObject <WSBaseCoordinator> {

	 childCoordinators;
	 navigationController;

}

@property (readonly,nonatomic) UINavigationController * navigationController; 
-(BOOL)runTestWithTestName:(id)arg1 options:(id)arg2 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)start;
-(id)initWithNavigationController:(id)arg1 ;
-(void)dealloc;
-(UINavigationController *)navigationController;
@end

