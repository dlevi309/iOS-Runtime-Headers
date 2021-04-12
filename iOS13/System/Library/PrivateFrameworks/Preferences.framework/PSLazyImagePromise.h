/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString, NSBundle, UIImage;

@interface PSLazyImagePromise : NSObject {

	NSString* _imagePath;
	NSString* _imageName;
	NSBundle* _imageBundle;
	/*^block*/id _loadBlock;
	UIImage* _image;
	BOOL _imageLoaded;

}

@property (nonatomic,readonly) UIImage * image; 
@property (getter=isImageLoaded,nonatomic,readonly) BOOL imageLoaded;              //@synthesize imageLoaded=_imageLoaded - In the implementation block
+(id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imagePromiseWithImagePath:(id)arg1 ;
+(id)imagePromiseWithLoadBlock:(/*^block*/id)arg1 ;
-(UIImage *)image;
-(void)loadImage;
-(BOOL)isImageLoaded;
@end

