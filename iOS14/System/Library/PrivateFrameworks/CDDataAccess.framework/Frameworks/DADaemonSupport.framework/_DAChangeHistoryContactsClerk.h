/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DAChangeHistoryClerk.h>

@class CNContactStore;

@interface _DAChangeHistoryContactsClerk : DAChangeHistoryClerk {

	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)os_log;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(id)identifiersOfAllRegisterdClients;
@end

