/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class UIImage;

@interface MPArtworkColorAnalyzer : NSObject {

	long long _algorithm;
	UIImage* _image;

}

@property (nonatomic,readonly) long long algorithm;              //@synthesize algorithm=_algorithm - In the implementation block
@property (nonatomic,readonly) UIImage * image;                  //@synthesize image=_image - In the implementation block
-(UIImage *)image;
-(long long)algorithm;
-(id)initWithImage:(id)arg1 algorithm:(long long)arg2 ;
-(void)analyzeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fallbackColorAnalysis;
@end

