/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <CardKit/CRKComposedView.h>

@class NSMutableArray;

@interface CRKComposedStackView : CRKComposedView {

	NSMutableArray* _keylines;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
-(unsigned long long)direction;
-(void)setDirection:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)_updateLayout;
-(void)setCardSectionSubviews:(id)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(void)setDirection:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)triggerLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(UIEdgeInsets)templatedContentMargins;
@end

