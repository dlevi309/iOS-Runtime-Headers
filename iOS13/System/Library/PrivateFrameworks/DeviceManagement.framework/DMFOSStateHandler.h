/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/


@protocol OS_os_transaction;
#import <DeviceManagement/DeviceManagement-Structs.h>
@class NSString, NSObject;

@interface DMFOSStateHandler : NSObject {

	/*^block*/id _block;
	NSString* _name;
	unsigned long long _handle;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,copy) id block;                                                //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long handle;                             //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)handle;
-(id)block;
-(NSObject*<OS_os_transaction>)transaction;
-(void)setTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setHandle:(unsigned long long)arg1 ;
-(os_state_data_s*)_serializeState;
-(id)initWithQueue:(id)arg1 name:(id)arg2 stateHandlerBlock:(/*^block*/id)arg3 ;
@end

