/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
*/


@interface DAChangeHistoryClerk : NSObject
+(id)clerkWithContactStore:(id)arg1 ;
+(id)clerkWithAddressBook:(void*)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(id)identifiersOfAllRegisterdClients;
@end

