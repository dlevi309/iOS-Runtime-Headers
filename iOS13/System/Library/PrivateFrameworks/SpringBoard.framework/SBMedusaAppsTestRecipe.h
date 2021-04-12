/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSString, FBApplicationUpdateScenesTransaction;

@interface SBMedusaAppsTestRecipe : NSObject <SBTestRecipe> {

	BOOL _activated;
	NSString* _leftTestBundleID;
	NSString* _rightTestBundleID;
	FBApplicationUpdateScenesTransaction* _currentTransaction;

}

@property (nonatomic,retain) FBApplicationUpdateScenesTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)init;
-(id)title;
-(FBApplicationUpdateScenesTransaction *)currentTransaction;
-(void)setCurrentTransaction:(FBApplicationUpdateScenesTransaction *)arg1 ;
-(void)_toggle;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_updateAppsToBringUpFromPreferences;
@end

