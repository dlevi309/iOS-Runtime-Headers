/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setValue:(double)arg1 ;
-(void)updateConstraints;
-(UIImage *)emptyImage;
-(double)value;
-(BOOL)actionVariant;
-(void)setActionVariant:(BOOL)arg1 ;
-(void)setEmptyImage:(UIImage *)arg1 ;
-(void)setFullImage:(UIImage *)arg1 ;
-(UIImage *)fullImage;
@end

