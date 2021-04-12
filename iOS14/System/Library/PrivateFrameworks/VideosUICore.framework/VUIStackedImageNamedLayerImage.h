/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKit/UINamedLayerImage.h>

@class NSString, UIImage;

@interface VUIStackedImageNamedLayerImage : NSObject <UINamedLayerImage> {

	BOOL _fixedFrame;
	int _blendMode;
	CGImageRef _image;
	NSString* _name;
	double _opacity;
	UIImage* _imageObj;
	CGRect _frame;

}

@property (assign,nonatomic) CGImageRef image;                                               //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                   //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double opacity;                                                 //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) int blendMode;                                                  //@synthesize blendMode=_blendMode - In the implementation block
@property (assign,nonatomic) BOOL fixedFrame;                                                //@synthesize fixedFrame=_fixedFrame - In the implementation block
@property (nonatomic,retain) UIImage * imageObj;                                             //@synthesize imageObj=_imageObj - In the implementation block
@property (nonatomic,readonly) id<UINamedLayerContentProvider> contentProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)blendMode;
-(void)setImage:(CGImageRef)arg1 ;
-(BOOL)fixedFrame;
-(void)setFixedFrame:(BOOL)arg1 ;
-(void)setImageObj:(UIImage *)arg1 ;
-(double)opacity;
-(CGRect)frame;
-(UIImage *)imageObj;
-(void)setOpacity:(double)arg1 ;
-(CGImageRef)image;
-(NSString *)name;
-(void)setFrame:(CGRect)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setBlendMode:(int)arg1 ;
@end

