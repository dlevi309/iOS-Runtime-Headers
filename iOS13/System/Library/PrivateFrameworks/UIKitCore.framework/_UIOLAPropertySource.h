/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSMapTable;


@protocol _UIOLAPropertySource <_UILAPropertySource>
@property (assign,nonatomic) double spacing; 
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement; 
@property (assign,nonatomic) long long distribution; 
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged; 
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged; 
@property (nonatomic,readonly) NSMapTable * customSpacings; 
@required
-(double)spacing;
-(void)setSpacing:(double)arg1;
-(void)setDistribution:(long long)arg1;
-(long long)distribution;
-(void)setBaselineRelativeArrangement:(BOOL)arg1;
-(void)_setItemOrderingChanged:(BOOL)arg1;
-(void)_setItemFittingSizeChanged:(BOOL)arg1;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
-(double)customSpacingAfterItem:(id)arg1;
-(BOOL)isBaselineRelativeArrangement;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(NSMapTable *)customSpacings;

@end

