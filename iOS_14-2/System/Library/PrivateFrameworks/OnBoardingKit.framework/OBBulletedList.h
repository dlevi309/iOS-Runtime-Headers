/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface OBBulletedList : UIView {

	NSMutableArray* _items;
	NSMutableArray* _verticalConstraints;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;

}

@property (nonatomic,retain) NSMutableArray * items;                               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSMutableArray * verticalConstraints;                 //@synthesize verticalConstraints=_verticalConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leadingConstraint;               //@synthesize leadingConstraint=_leadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingConstraint;              //@synthesize trailingConstraint=_trailingConstraint - In the implementation block
-(NSLayoutConstraint *)leadingConstraint;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateConstraints;
-(void)addItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3 ;
-(void)addItemWithDescription:(id)arg1 image:(id)arg2 ;
-(void)addBulletedListItem:(id)arg1 ;
-(double)bulletedListItemSpacing;
-(void)_updatePaddingForOrientation;
-(void)setTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableArray *)items;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingConstraint;
-(void)setVerticalConstraints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)verticalConstraints;
-(BOOL)_shouldHandleLandscapeiPhoneLayout;
@end

