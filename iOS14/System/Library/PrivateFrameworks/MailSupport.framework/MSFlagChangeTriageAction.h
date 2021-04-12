/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlags;

@interface MSFlagChangeTriageAction : MSTriageAction {

	long long _reason;

}

@property (nonatomic,readonly) ECMessageFlags * messageFlags; 
@property (nonatomic,readonly) BOOL flagState; 
@property (nonatomic,readonly) long long reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,__weak,readonly) id<MSFlagChangeTriageActionDelegate> delegate; 
-(id)_changeAction;
-(long long)reason;
-(ECMessageFlags *)messageFlags;
-(id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 reason:(long long)arg3 ;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(BOOL)flagState;
@end

