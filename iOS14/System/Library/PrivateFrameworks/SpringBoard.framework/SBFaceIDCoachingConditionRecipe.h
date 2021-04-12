/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(BOOL)_overrideCoachingConditionEnabled;
-(void)_setOverrideCoachingConditionEnabled:(BOOL)arg1 ;
-(void)_setOverrideCoachingEvent:(unsigned long long)arg1 ;
@end

