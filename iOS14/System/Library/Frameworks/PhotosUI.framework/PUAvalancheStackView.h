/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer;

@interface PUAvalancheStackView : UIView {

	CALayer* _imageLayer;
	CALayer* _stackLayer0;
	CALayer* _stackLayer1;
	long long _contentMode;

}

@property (nonatomic,retain) CALayer * imageLayer;               //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) CALayer * stackLayer0;              //@synthesize stackLayer0=_stackLayer0 - In the implementation block
@property (nonatomic,retain) CALayer * stackLayer1;              //@synthesize stackLayer1=_stackLayer1 - In the implementation block
@property (assign,nonatomic) long long contentMode;              //@synthesize contentMode=_contentMode - In the implementation block
-(long long)contentMode;
-(void)setImage:(id)arg1 ;
-(id)init;
-(CALayer *)imageLayer;
-(void)layoutSubviews;
-(CGRect)_imageContentFrame;
-(void)setImageLayer:(CALayer *)arg1 ;
-(CALayer *)stackLayer0;
-(void)setStackLayer0:(CALayer *)arg1 ;
-(CALayer *)stackLayer1;
-(void)setStackLayer1:(CALayer *)arg1 ;
-(void)setContentMode:(long long)arg1 ;
@end

