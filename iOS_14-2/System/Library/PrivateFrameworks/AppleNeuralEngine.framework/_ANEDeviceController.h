/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
*/


@protocol OS_dispatch_queue;
#import <AppleNeuralEngine/AppleNeuralEngine-Structs.h>
@class NSObject;

@interface _ANEDeviceController : NSObject {

	BOOL _isPrivileged;
	NSObject*<OS_dispatch_queue> _q;
	long long _usecount;
	unsigned long long _programHandle;
	SCD_Struct_AN3* _device;

}

@property (q,nonatomic,readonly) NSObject*<OS_dispatch_queue> q;              //@synthesize q=_q - In the implementation block
@property (assign,nonatomic) long long usecount;                              //@synthesize usecount=_usecount - In the implementation block
@property (nonatomic,readonly) BOOL isPrivileged;                             //@synthesize isPrivileged=_isPrivileged - In the implementation block
@property (assign,nonatomic) unsigned long long programHandle;                //@synthesize programHandle=_programHandle - In the implementation block
@property (assign,nonatomic) SCD_Struct_AN3* device;                          //@synthesize device=_device - In the implementation block
+(id)controllerWithProgramHandle:(unsigned long long)arg1 ;
+(id)sharedPrivilegedConnection;
-(NSObject*<OS_dispatch_queue>)q;
-(void)start;
-(void)stop;
-(SCD_Struct_AN3*)device;
-(void)setDevice:(SCD_Struct_AN3*)arg1 ;
-(BOOL)isPrivileged;
-(unsigned long long)programHandle;
-(void)setProgramHandle:(unsigned long long)arg1 ;
-(id)initWithProgramHandle:(unsigned long long)arg1 priviledged:(BOOL)arg2 ;
-(long long)usecount;
-(void)setUsecount:(long long)arg1 ;
@end

