/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPNowPlayingButton.h>

@class CPImageSet, UIImage;

@interface CPNowPlayingImageButton : CPNowPlayingButton {

	CPImageSet* _imageSet;

}

@property (nonatomic,retain) CPImageSet * imageSet;              //@synthesize imageSet=_imageSet - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(UIImage *)image;
-(id)initWithCoder:(id)arg1 ;
-(CPImageSet *)imageSet;
-(void)setImageSet:(CPImageSet *)arg1 ;
-(id)initWithImage:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

