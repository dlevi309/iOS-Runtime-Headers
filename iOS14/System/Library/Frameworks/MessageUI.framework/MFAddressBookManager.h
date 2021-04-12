/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSHashTable;

@interface MFAddressBookManager : NSObject {

	void* _addressBook;
	os_unfair_lock_s _lock;
	NSHashTable* _clients;

}
+(id)sharedManager;
+(BOOL)isAuthorizedToUseAddressBook;
-(void)addClient:(id)arg1 ;
-(id)init;
-(void*)addressBook;
-(void)removeClient:(id)arg1 ;
-(id)_clientsArray;
-(void)_handleAddressBookChangeNotification;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)dealloc;
@end

