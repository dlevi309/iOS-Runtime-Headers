/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIBackdropView, UIImageView;

@interface AKCalloutBar : UIView {

	double _arrowX;
	BOOL _up;
	NSArray* _controls;
	_UIBackdropView* _backgroundView;
	_UIBackdropView* _separatorBackgroundView;
	UIImageView* _blurMaskView;
	UIImageView* _tintMaskView;
	UIImageView* _separatorMaskView;
	CGRect _highlightRect;

}

@property (assign,nonatomic) double arrowX;                   //@synthesize arrowX=_arrowX - In the implementation block
@property (assign,nonatomic) BOOL up;                         //@synthesize up=_up - In the implementation block
@property (nonatomic,retain) NSArray * controls;              //@synthesize controls=_controls - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)controls;
-(double)arrowX;
-(void)layoutSubviews;
-(BOOL)up;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUp:(BOOL)arg1 ;
-(void)dealloc;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setControls:(NSArray *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forControl:(id)arg2 ;
-(CGSize)sizeThatFitsControls:(id)arg1 ;
-(void)setArrowX:(double)arg1 ;
-(id)newMaskView:(long long)arg1 ;
-(CGRect)dividerLineRectForControl:(long long)arg1 ;
@end

