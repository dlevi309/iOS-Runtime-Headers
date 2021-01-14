/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUGLObject.h>

@class NSMutableIndexSet;

@interface NUGLBuffer : NUGLObject {

	NSMutableIndexSet* _validRegion;
	unsigned _target;
	unsigned _usage;
	long long _size;

}

@property (nonatomic,readonly) long long size;              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned target;               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned usage;                //@synthesize usage=_usage - In the implementation block
-(void)setTarget:(unsigned)arg1 ;
-(void)delete;
-(unsigned)usage;
-(id)init;
-(id)initWithSize:(long long)arg1 ;
-(long long)size;
-(id)description;
-(void)generate:(id)arg1 ;
-(void)invalidateData;
-(unsigned)target;
-(void)setUsage:(unsigned)arg1 ;
-(void)readDataWithContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)readDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)writeDataWithContext:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)writeDataInRange:(NSRange)arg1 context:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)_writeDataInRange:(NSRange)arg1 options:(unsigned)arg2 context:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)copyTexture:(id)arg1 inRect:(SCD_Struct_NU8)arg2 context:(id)arg3 ;
-(void)updateTexture:(id)arg1 inRect:(SCD_Struct_NU8)arg2 context:(id)arg3 ;
-(BOOL)hasValidData;
-(BOOL)hasValidDataInRange:(NSRange)arg1 ;
-(BOOL)hasNoValidData;
-(BOOL)hasNoValidDataOutsideOfRange:(NSRange)arg1 ;
-(void)invalidateDataInRange:(NSRange)arg1 ;
-(void)validateDataInRange:(NSRange)arg1 ;
@end

