/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBTestRecipe.h>

@class NSString;

@interface SBFaceIDCoachingConditionRecipe : NSObject <SBTestRecipe>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)load;
-(id)title;
-(BOOL)_overrideCoachingConditionEnabled;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_setOverrideCoachingConditionEnabled:(BOOL)arg1 ;
-(void)_setOverrideCoachingEvent:(unsigned long long)arg1 ;
@end

