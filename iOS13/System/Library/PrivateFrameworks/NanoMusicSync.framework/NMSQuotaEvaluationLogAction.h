/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
*/

#import <NanoMusicSync/NMLogAction.h>

@class NMSQuotaEvaluationState;

@interface NMSQuotaEvaluationLogAction : NMLogAction {

	unsigned long long _type;
	NMSQuotaEvaluationState* _state;

}
+(id)logActionWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
-(id)_stringForType:(unsigned long long)arg1 ;
-(id)logMessage;
-(id)initWithActionType:(unsigned long long)arg1 state:(id)arg2 ;
@end

