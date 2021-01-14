/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@interface MessageServiceSessionBreadcrumbHandler : NSObject
+(id)storeBreadcrumbAndSetConsumedPayloadsForNewMessageItemIfNecessary:(id)arg1 inChatWithIdentifier:(id)arg2 ;
+(id)_messageItemToConsumeForNewBreadcrumbMessage:(id)arg1 outBreadcrumbItems:(id*)arg2 ;
+(void)_updateStoredBreadcrumbIfNeeded:(id)arg1 onChat:(id)arg2 ;
+(void)handleBreadcrumbForNewMessageItemIfNecessary:(id)arg1 withContext:(id)arg2 ;
@end

