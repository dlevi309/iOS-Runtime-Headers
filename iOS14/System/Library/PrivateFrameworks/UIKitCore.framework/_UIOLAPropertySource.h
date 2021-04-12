/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDistribution:(long long)arg1;
-(long long)distribution;
-(double)spacing;
-(void)setSpacing:(double)arg1;
-(BOOL)isBaselineRelativeArrangement;
-(NSMapTable *)customSpacings;
-(void)setBaselineRelativeArrangement:(BOOL)arg1;
-(void)_setItemFittingSizeChanged:(BOOL)arg1;
-(double)customSpacingAfterItem:(id)arg1;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
-(void)_setItemOrderingChanged:(BOOL)arg1;

@end

