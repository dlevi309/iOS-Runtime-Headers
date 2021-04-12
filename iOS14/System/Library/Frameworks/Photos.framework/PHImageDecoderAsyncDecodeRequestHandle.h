/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


#import <Photos/Photos-Structs.h>
@class PHImageDecoder;

@interface PHImageDecoderAsyncDecodeRequestHandle : NSObject {

	atomic_flag _cancelFlag;
	BOOL _cancelRequested;
	PHImageDecoder* _initialDecoder;
	unsigned long long _figRequestID;
	unsigned long long _figGainMapRequestID;
	FigPhotoDecompressionContainerRef _figDecompressionContainer;

}

@property (nonatomic,readonly) BOOL cancelRequested; 
@property (nonatomic,readonly) PHImageDecoder * initialDecoder;                                        //@synthesize initialDecoder=_initialDecoder - In the implementation block
@property (assign,nonatomic) unsigned long long figRequestID;                                          //@synthesize figRequestID=_figRequestID - In the implementation block
@property (assign,nonatomic) unsigned long long figGainMapRequestID;                                   //@synthesize figGainMapRequestID=_figGainMapRequestID - In the implementation block
@property (nonatomic,retain) FigPhotoDecompressionContainerRef figDecompressionContainer;              //@synthesize figDecompressionContainer=_figDecompressionContainer - In the implementation block
-(id)initWithImageIODecoder:(id)arg1 ;
-(PHImageDecoder *)initialDecoder;
-(void)setFigRequestID:(unsigned long long)arg1 ;
-(BOOL)cancelRequested;
-(unsigned long long)figGainMapRequestID;
-(FigPhotoDecompressionContainerRef)figDecompressionContainer;
-(void)setFigGainMapRequestID:(unsigned long long)arg1 ;
-(void)setFigDecompressionContainer:(FigPhotoDecompressionContainerRef)arg1 ;
-(void)cancel;
-(id)initWithFigRequestID:(unsigned long long)arg1 container:(FigPhotoDecompressionContainerRef)arg2 figDecoder:(id)arg3 ;
-(unsigned long long)figRequestID;
-(void)dealloc;
@end

