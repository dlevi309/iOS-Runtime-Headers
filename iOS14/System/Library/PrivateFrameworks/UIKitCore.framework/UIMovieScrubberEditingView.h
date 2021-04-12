/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)bounce;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEditing;
-(double)edgeInset;
-(void)layoutSubviews;
-(int)handleForPoint:(CGPoint)arg1 hitOffset:(double*)arg2 ;
-(CGRect)_leftHandleRect;
-(void)_updateHandleImages;
-(CGRect)_rightHandleRect;
-(double)_bounceValueForFraction:(double)arg1 ;
-(BOOL)pointInsideLeftHandle:(CGPoint)arg1 ;
-(BOOL)pointInsideRightHandle:(CGPoint)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setEdgeInset:(double)arg1 ;
-(id)_handleImages;
@end

