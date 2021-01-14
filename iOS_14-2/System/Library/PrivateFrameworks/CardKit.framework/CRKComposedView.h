/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

#import <CardKit/CardKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CRKComposableView.h>

@class NSArray, NSMutableArray, NSString;

@interface CRKComposedView : UIView <CRKComposableView> {

	NSMutableArray* _mutableCardSectionSubviews;
	NSArray* _cardSectionSubviews;

}

@property (nonatomic,retain) NSArray * cardSectionSubviews;                         //@synthesize cardSectionSubviews=_cardSectionSubviews - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets cardSectionContentMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1 ;
-(NSArray *)cardSectionSubviews;
-(void)setCardSectionSubviews:(NSArray *)arg1 ;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2 ;
-(UIEdgeInsets)cardSectionContentMargins;
@end

