/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <DADaemonSupport/DAChangeHistoryClerk.h>

@interface _DAChangeHistoryABLegacyClerk : DAChangeHistoryClerk {

	void* _addressBook;

}

@property (nonatomic,readonly) void* addressBook;              //@synthesize addressBook=_addressBook - In the implementation block
-(void*)addressBook;
-(id)initWithAddressBook:(void*)arg1 ;
-(void)dealloc;
-(void)unregisterClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(void)registerClientWithIdentifier:(id)arg1 forContainer:(id)arg2 ;
-(id)identifiersOfAllRegisterdClients;
@end

