/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(FBApplicationUpdateScenesTransaction *)currentTransaction;
-(id)init;
-(void)_toggle;
-(void)setCurrentTransaction:(FBApplicationUpdateScenesTransaction *)arg1 ;
-(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_updateAppsToBringUpFromPreferences;
@end

