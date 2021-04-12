/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/DefaultPostProcessor.h>

@interface L016Raw14PostProcessor : DefaultPostProcessor {

	BOOL _l010OutputFormatRAW14L016;

}

@property (assign,nonatomic) BOOL l010OutputFormatRAW14L016;              //@synthesize l010OutputFormatRAW14L016=_l010OutputFormatRAW14L016 - In the implementation block
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(unsigned)processedPixelFormat;
-(id)initWithOriginalPixelFormat:(unsigned)arg1 l010OutputFormatRAW14L016:(BOOL)arg2 ;
-(BOOL)l010OutputFormatRAW14L016;
-(void)setL010OutputFormatRAW14L016:(BOOL)arg1 ;
@end

