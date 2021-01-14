/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject {

	ABSAddressBook* _addressBook;
	NSMutableArray* _externalCallbacks;
	NSMutableArray* _externalCallBackThreads;
	NSMutableArray* _externalCallbackContexts;
	long long _initialAccessStatus;

}
-(void)contactStoreChanged:(id)arg1 ;
-(id)initWithAddressBook:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)addExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)removeExternalCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end

