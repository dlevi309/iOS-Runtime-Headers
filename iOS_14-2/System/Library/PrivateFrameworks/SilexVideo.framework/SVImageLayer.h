/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <QuartzCore/CALayer.h>

@class UIImage, NSString;

@interface SVImageLayer : CALayer {

	UIImage* _image;
	NSString* _identifier;

}

@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

