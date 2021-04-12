/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)name;
-(void)invalidate;
-(id)_initWithName:(id)arg1 ;
-(void)dealloc;
@end

