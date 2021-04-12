/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)operationQueue;
-(void)setOperationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end

