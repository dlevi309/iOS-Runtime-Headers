/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, NSArray;

@interface UIMovieScrubberEditingView : UIView {

	UIImageView* _leftImageView;
	UIImageView* _middleImageView;
	UIImageView* _rightImageView;
	NSArray* _activeImages;
	NSArray* _activeNoEditImages;
	NSArray* _inactiveImages;
	BOOL _enabled;
	BOOL _editing;
	double _edgeInset;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;              //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) double edgeInset;                           //@synthesize edgeInset=_edgeInset - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)setEdgeInset:(double)arg1 ;
-(void)bounce;
-(int)handleForPoint:(CGPoint)arg1 hitOffset:(double*)arg2 ;
-(double)edgeInset;
-(void)_updateHandleImages;
-(id)_handleImages;
-(CGRect)_leftHandleRect;
-(CGRect)_rightHandleRect;
-(double)_bounceValueForFraction:(double)arg1 ;
-(BOOL)pointInsideLeftHandle:(CGPoint)arg1 ;
-(BOOL)pointInsideRightHandle:(CGPoint)arg1 ;
@end

