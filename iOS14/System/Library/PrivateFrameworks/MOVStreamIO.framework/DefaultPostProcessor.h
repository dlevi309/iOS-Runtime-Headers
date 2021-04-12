/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
*/

#import <MOVStreamIO/MOVStreamIO-Structs.h>
#import <MOVStreamIO/MOVStreamPostProcessor.h>

@class MOVStreamFrameConverter, NSString;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor> {

	MOVStreamFrameConverter* _converter;
	BOOL removePadding;
	unsigned originalPixelFormat;
	unsigned long long exactBytesPerRow;

}

@property (assign) BOOL removePadding; 
@property (readonly) unsigned processedPixelFormat; 
@property (assign) unsigned long long exactBytesPerRow; 
@property (assign,nonatomic) unsigned originalPixelFormat; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned)originalPixelFormat;
-(void)setOriginalPixelFormat:(unsigned)arg1 ;
-(BOOL)shouldRemovePaddingOfPixelBuffer:(CVBufferRef)arg1 metadata:(id)arg2 ;
-(CVBufferRef)pixelBufferWithoutPaddingFromPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)shouldChangeBytesPerRowOfPixelBuffer:(CVBufferRef)arg1 ;
-(unsigned long long)exactBytesPerRow;
-(CVBufferRef)pixelBufferWithExactByterPerRow:(unsigned long long)arg1 fromPixelBuffer:(CVBufferRef)arg2 error:(id*)arg3 ;
-(unsigned long long)minimumBytesPerRowForPixelBuffer:(CVBufferRef)arg1 ;
-(BOOL)removePadding;
-(id)initWithOriginalPixelFormat:(unsigned)arg1 ;
-(CVBufferRef)processedPixelBufferFrom:(CVBufferRef)arg1 metadata:(id)arg2 error:(id*)arg3 ;
-(void)setRemovePadding:(BOOL)arg1 ;
-(unsigned)processedPixelFormat;
-(void)setExactBytesPerRow:(unsigned long long)arg1 ;
@end

