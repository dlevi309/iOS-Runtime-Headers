/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/


@protocol MOVStreamPostProcessor <NSObject>
@property (assign) BOOL removePadding; 
@property (assign) unsigned long long exactBytesPerRow; 
@required
-(unsigned long long)exactBytesPerRow;
-(BOOL)removePadding;
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 reader:(id)arg3 error:(id*)arg4;
-(void)setRemovePadding:(BOOL)arg1;
-(void)setExactBytesPerRow:(unsigned long long)arg1;

@end

