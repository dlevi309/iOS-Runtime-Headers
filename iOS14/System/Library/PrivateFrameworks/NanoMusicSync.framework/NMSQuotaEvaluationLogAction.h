/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMLogAction.h>

@class NMSQuotaEvaluationState;

@interface NMSQuotaEvaluationLogAction : NMLogAction {

	unsigned long long _type;
	NMSQuotaEvaluationState* _state;

}
+(id)logActionWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
-(id)logMessage;
-(id)_stringForType:(unsigned long long)arg1 ;
-(id)initWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
@end

