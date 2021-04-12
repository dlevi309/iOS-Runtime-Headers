/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)imagePromiseWithLoadBlock:(/*^block*/id)arg1 ;
+(id)imagePromiseWithImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imagePromiseWithImagePath:(id)arg1 ;
-(void)loadImage;
-(UIImage *)image;
-(BOOL)isImageLoaded;
@end

