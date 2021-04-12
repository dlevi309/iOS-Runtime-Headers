/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void*)addressBook;
-(id)_clientsArray;
-(void)_handleAddressBookChangeNotification;
-(void)_handleAddressBookPrefsChangeNotification;
@end

