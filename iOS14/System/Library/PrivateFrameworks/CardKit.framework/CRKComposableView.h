/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
*/

@class NSArray;


@protocol CRKComposableView <NSObject>
@property (nonatomic,readonly) UIEdgeInsets cardSectionContentMargins; 
@property (nonatomic,readonly) NSArray * cardSectionSubviews; 
@required
-(void)cardSectionSubviewWantsToBeRemovedFromHierarchy:(id)arg1;
-(NSArray *)cardSectionSubviews;
-(void)addCardSectionSubview:(id)arg1 withKeyline:(long long)arg2;
-(UIEdgeInsets)cardSectionContentMargins;

@end

