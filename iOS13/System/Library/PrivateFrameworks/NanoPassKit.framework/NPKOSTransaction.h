/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol OS_os_transaction, OS_dispatch_queue;
@class NSObject, NSString;

@interface NPKOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _name;

}

@property (nonatomic,copy,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)transactionWithName:(id)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)_initWithName:(id)arg1 ;
@end

