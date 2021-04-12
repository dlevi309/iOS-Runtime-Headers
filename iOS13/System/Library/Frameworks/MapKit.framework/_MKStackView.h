/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _MKStackViewDelegate, _MKAnimationStackViewDelegate;
@class NSArray, NSHashTable;

@interface _MKStackView : UIView {

	NSArray* _stackConstraints;
	NSHashTable* _viewsNeedingWidthConstraints;
	BOOL _bottomConstraintShouldBeGreaterThanOrEqual;
	id<_MKStackViewDelegate> _stackDelegate;
	NSArray* _stackedSubviews;
	id<_MKAnimationStackViewDelegate> _stackAnimationDelegate;

}

@property (assign,nonatomic,__weak) id<_MKStackViewDelegate> stackDelegate;                                //@synthesize stackDelegate=_stackDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<_MKAnimationStackViewDelegate> stackAnimationDelegate;              //@synthesize stackAnimationDelegate=_stackAnimationDelegate - In the implementation block
@property (nonatomic,copy) NSArray * stackedSubviews;                                                      //@synthesize stackedSubviews=_stackedSubviews - In the implementation block
@property (assign,nonatomic) BOOL bottomConstraintShouldBeGreaterThanOrEqual;                              //@synthesize bottomConstraintShouldBeGreaterThanOrEqual=_bottomConstraintShouldBeGreaterThanOrEqual - In the implementation block
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_createConstraints;
-(void)setStackAnimationDelegate:(id<_MKAnimationStackViewDelegate>)arg1 ;
-(void)setStackedSubviews:(id)arg1 animated:(BOOL)arg2 ;
-(id<_MKAnimationStackViewDelegate>)stackAnimationDelegate;
-(void)setStackedSubviews:(NSArray *)arg1 ;
-(id<_MKStackViewDelegate>)stackDelegate;
-(void)setStackDelegate:(id<_MKStackViewDelegate>)arg1 ;
-(NSArray *)stackedSubviews;
-(BOOL)bottomConstraintShouldBeGreaterThanOrEqual;
-(void)setBottomConstraintShouldBeGreaterThanOrEqual:(BOOL)arg1 ;
@end

