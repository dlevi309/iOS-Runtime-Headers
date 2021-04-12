/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject {

	long long _algorithm;
	UIImage* _image;

}

@property (nonatomic,readonly) long long algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) UIImage * image;                  //@synthesize image=_image - In the implementation block
-(long long)algorithm;
-(id)initWithImage:(id)arg1 algorithm:(long long)arg2 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fallbackColorAnalysis;
-(UIImage *)image;
@end

