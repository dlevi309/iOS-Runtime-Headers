/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@interface ABSCallbackInvoker : NSObject {

	void* addressBook;
	/*function pointer*/void* callback;
	void* context;

}
+(void)invokeOnThread:(id)arg1 callback:(/*function pointer*/void*)arg2 withAddressBook:(void*)arg3 context:(void*)arg4 ;
-(void)invoke;
@end

