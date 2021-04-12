/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
*/

#import <JITAppKit/JITAppKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIImage;

@interface MCLRatingsView : UIView {

	double _imageaspect;
	NSLayoutConstraint* _widthConstraint;
	BOOL _actionVariant;
	double _spacing;
	double _value;
	UIImage* _emptyImage;
	UIImage* _fullImage;

}

@property (assign,nonatomic) double spacing;                    //@synthesize spacing=_spacing - In the implementation block
@property (assign,nonatomic) double value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImage * emptyImage;              //@synthesize emptyImage=_emptyImage - In the implementation block
@property (nonatomic,retain) UIImage * fullImage;               //@synthesize fullImage=_fullImage - In the implementation block
@property (assign,nonatomic) BOOL actionVariant;                //@synthesize actionVariant=_actionVariant - In the implementation block
-(double)value;
-(void)setValue:(double)arg1 ;
-(double)spacing;
-(UIImage *)emptyImage;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
-(void)setEmptyImage:(UIImage *)arg1 ;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)fullImage;
@end

