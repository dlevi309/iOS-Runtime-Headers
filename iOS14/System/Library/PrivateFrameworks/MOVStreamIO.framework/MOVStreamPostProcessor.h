/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamPostProcessor <NSObject>
@property (assign) BOOL removePadding; 
@property (readonly) unsigned processedPixelFormat; 
@property (assign) unsigned long long exactBytesPerRow; 
@property (assign,nonatomic) unsigned originalPixelFormat; 
@required
-(unsigned)originalPixelFormat;
-(void)setOriginalPixelFormat:(unsigned)arg1;
-(unsigned long long)exactBytesPerRow;
-(BOOL)removePadding;
-(id)initWithOriginalPixelFormat:(unsigned)arg1;
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 error:(id*)arg3;
-(void)setRemovePadding:(BOOL)arg1;
-(unsigned)processedPixelFormat;
-(void)setExactBytesPerRow:(unsigned long long)arg1;

@end

