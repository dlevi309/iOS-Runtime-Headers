/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
*/


@protocol LAContextXPC <LAContextExternalizationProt,LAContextPropertiesProt,LAContextClientEvaluationProt,LAContextEventFeedbackProt>
@required
-(void)tokenForTransferToUnknownProcess:(/*^block*/id)arg1;
-(void)allowTransferToProcess:(int)arg1 receiverAuditTokenData:(id)arg2 reply:(/*^block*/id)arg3;

@end

