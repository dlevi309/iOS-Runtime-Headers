/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSArray *)controls;
-(void)setControls:(NSArray *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forControl:(id)arg2 ;
-(CGSize)sizeThatFitsControls:(id)arg1 ;
-(void)setUp:(BOOL)arg1 ;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setArrowX:(double)arg1 ;
-(id)newMaskView:(long long)arg1 ;
-(CGRect)dividerLineRectForControl:(long long)arg1 ;
-(BOOL)up;
-(double)arrowX;
@end

