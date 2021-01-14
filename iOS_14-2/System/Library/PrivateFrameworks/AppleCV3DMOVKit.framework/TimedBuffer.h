/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@interface TimedBuffer : NSObject {

	CVBufferRef _buffer;
	SCD_Struct_Ti7 _timestamp;

}

@property (assign,nonatomic) CVBufferRef buffer;                    //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ti7 timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(void)setBuffer:(CVBufferRef)arg1 ;
-(SCD_Struct_Ti7)timestamp;
-(CVBufferRef)buffer;
-(void)setTimestamp:(SCD_Struct_Ti7)arg1 ;
-(id)initWithBuffer:(CVBufferRef)arg1 atTimestamp:(SCD_Struct_Ti7)arg2 ;
@end

