/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_updateLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDirection:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)templatedContentMargins;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(void)setCardSectionSubviews:(id)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(void)setDirection:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)triggerLayoutAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

