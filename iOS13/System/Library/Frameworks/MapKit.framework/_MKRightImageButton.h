/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(_MKUILabel *)titleLabel;
-(UIImageView *)imageView;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(id)viewForLastBaselineLayout;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
@end

