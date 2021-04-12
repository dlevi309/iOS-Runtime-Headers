/*
* Generated on Monday, March 1, 2021 at 2:34:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
*/


#import <AppleCV3DMOVKit/AppleCV3DMOVKit-Structs.h>
@interface TimedBuffer : NSObject {

	CVBufferRef _buffer;
	SCD_Struct_Ti7 _timestamp;

}

@property (assign,nonatomic) CVBufferRef buffer;                    //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ti7 timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
-(SCD_Struct_Ti7)timestamp;
-(void)setTimestamp:(SCD_Struct_Ti7)arg1 ;
-(void)setBuffer:(CVBufferRef)arg1 ;
-(CVBufferRef)buffer;
-(id)initWithBuffer:(CVBufferRef)arg1 atTimestamp:(SCD_Struct_Ti7)arg2 ;
@end

