/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UITapGestureRecognizer, NSArray, _MKUILabel, UIImageView, NSString, UIImage;

@interface _MKRightImageButton : UIControl {

	UITapGestureRecognizer* _gestureRecognizer;
	BOOL _titleConstraintsAdded;
	NSArray* _titleOnlyConstraints;
	NSArray* _titleAndImageConstraints;
	BOOL _highlighted;
	_MKUILabel* _titleLabel;
	UIImageView* _imageView;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) _MKUILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(_MKUILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)updateConstraints;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)isHighlighted;
-(NSString *)title;
-(void)setHighlighted:(BOOL)arg1 ;
@end

