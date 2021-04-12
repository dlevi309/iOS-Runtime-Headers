/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@class NSString;

@interface ISPlayerState : NSObject {

	NSString* _diagnosticLabel;
	double _photoBlurRadius;
	double _videoAlpha;
	double _videoBlurRadius;

}

@property (nonatomic,readonly) NSString * diagnosticLabel;              //@synthesize diagnosticLabel=_diagnosticLabel - In the implementation block
@property (nonatomic,readonly) double photoBlurRadius;                  //@synthesize photoBlurRadius=_photoBlurRadius - In the implementation block
@property (nonatomic,readonly) double videoAlpha;                       //@synthesize videoAlpha=_videoAlpha - In the implementation block
@property (nonatomic,readonly) double videoBlurRadius;                  //@synthesize videoBlurRadius=_videoBlurRadius - In the implementation block
+(id)outputInfoWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(id)description;
-(id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(double)videoAlpha;
-(NSString *)diagnosticLabel;
-(double)photoBlurRadius;
-(double)videoBlurRadius;
@end

