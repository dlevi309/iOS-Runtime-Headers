/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface SCRActivityScheduler : NSObject <BSDescriptionProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitySchedulerWithTargetQueue:(id)arg1 ;
+(id)isolatedActivitySchedulerWithTargetQueue:(id)arg1 ;
-(id)succinctDescription;
-(void)submitActivity:(id)arg1 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithTargetQueue:(id)arg1 ;
-(void)completeActivityWithIdentifier:(id)arg1 ;
-(NSString *)description;
-(void)cancelActivityWithIdentifier:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

