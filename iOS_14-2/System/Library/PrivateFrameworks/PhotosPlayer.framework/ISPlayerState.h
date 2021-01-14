/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)photoBlurRadius;
-(id)initWithPhotoBlurRadius:(double)arg1 videoAlpha:(double)arg2 videoBlurRadius:(double)arg3 label:(id)arg4 ;
-(id)description;
-(double)videoAlpha;
-(NSString *)diagnosticLabel;
-(double)videoBlurRadius;
@end

