/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface FKAddressBook : NSObject {

	void* _addressBook;
	NSObject*<OS_dispatch_queue> _operationQueue;

}

@property (assign,nonatomic) void* addressBook;                                        //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
+(id)sharedInstance;
+(void)performBlock:(/*^block*/id)arg1 ;
-(void)setOperationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(id)init;
-(void*)addressBook;
-(void)dealloc;
-(void)setAddressBook:(void*)arg1 ;
@end

