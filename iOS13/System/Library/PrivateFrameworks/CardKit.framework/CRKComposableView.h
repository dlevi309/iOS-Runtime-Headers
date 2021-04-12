/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

@class NSArray;


@protocol CRKComposableView <NSObject>
@property (nonatomic,readonly) UIEdgeInsets cardSectionContentMargins; 
@property (nonatomic,readonly) NSArray * cardSectionSubviews; 
@required
-(NSArray *)cardSectionSubviews;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
-(UIEdgeInsets)cardSectionContentMargins;

@end

