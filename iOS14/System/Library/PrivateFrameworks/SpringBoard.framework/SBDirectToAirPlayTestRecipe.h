/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class SBApplication, NSString;

@interface SBDirectToAirPlayTestRecipe : NSObject <SBTestRecipe> {

	SBApplication* _currentlyReadyApp;
	SBApplication* _currentlyPlayingApp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_claimForegroundAppIsPlayingVideo;
-(void)_clearPlayingApp;
-(id)_anyForegroundApplication;
@end

