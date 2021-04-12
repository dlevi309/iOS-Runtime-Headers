/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/DefaultPostProcessor.h>

@interface RawBayerPostProcessor : DefaultPostProcessor {

	BOOL _rawBayerMSBReplication;

}

@property (assign,nonatomic) BOOL rawBayerMSBReplication;              //@synthesize rawBayerMSBReplication=_rawBayerMSBReplication - In the implementation block
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(unsigned)processedPixelFormat;
-(BOOL)rawBayerMSBReplication;
-(id)initWithOriginalPixelFormat:(unsigned)arg1 rawBayerMSBReplication:(BOOL)arg2 ;
-(void)setRawBayerMSBReplication:(BOOL)arg1 ;
@end

