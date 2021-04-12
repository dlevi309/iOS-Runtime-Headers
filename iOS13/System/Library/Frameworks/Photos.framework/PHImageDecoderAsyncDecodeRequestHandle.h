/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {

	atomic_flag _cancelFlag;
	BOOL _cancelRequested;
	PHImageDecoder* _initialDecoder;
	unsigned long long _figRequestID;
	FigPhotoDecompressionContainerRef _figDecompressionContainer;

}

@property (nonatomic,readonly) BOOL cancelRequested; 
@property (nonatomic,readonly) PHImageDecoder * initialDecoder;                                        //@synthesize initialDecoder=_initialDecoder - In the implementation block
@property (assign,nonatomic) unsigned long long figRequestID;                                          //@synthesize figRequestID=_figRequestID - In the implementation block
@property (nonatomic,retain) FigPhotoDecompressionContainerRef figDecompressionContainer;              //@synthesize figDecompressionContainer=_figDecompressionContainer - In the implementation block
-(void)dealloc;
-(void)cancel;
-(id)initWithFigRequestID:(unsigned long long)arg1 container:(FigPhotoDecompressionContainerRef)arg2 figDecoder:(id)arg3 ;
-(id)initWithImageIODecoder:(id)arg1 ;
-(BOOL)cancelRequested;
-(PHImageDecoder *)initialDecoder;
-(unsigned long long)figRequestID;
-(void)setFigRequestID:(unsigned long long)arg1 ;
-(FigPhotoDecompressionContainerRef)figDecompressionContainer;
-(void)setFigDecompressionContainer:(FigPhotoDecompressionContainerRef)arg1 ;
@end

