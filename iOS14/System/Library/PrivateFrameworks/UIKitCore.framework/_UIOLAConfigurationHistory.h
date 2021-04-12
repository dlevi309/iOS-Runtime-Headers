/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UILAConfigurationHistory.h>
#import <UIKitCore/_UIOLAPropertySource.h>

@class NSMapTable, NSSet, NSString;

@interface _UIOLAConfigurationHistory : _UILAConfigurationHistory <_UIOLAPropertySource> {

	BOOL _baselineRelativeArrangement;
	BOOL _itemOrderingChanged;
	BOOL _itemFittingSizeChanged;
	BOOL _hasEstablishedOrderingValues;
	BOOL _inOrderedArrangementUpdateSection;
	double _spacing;
	long long _distribution;
	NSMapTable* _customSpacings;
	double _proportionalFillDenominator;

}

@property (assign,nonatomic) BOOL hasEstablishedOrderingValues;                                                              //@synthesize hasEstablishedOrderingValues=_hasEstablishedOrderingValues - In the implementation block
@property (assign,getter=isInOrderedArrangementUpdateSection,nonatomic) BOOL inOrderedArrangementUpdateSection;              //@synthesize inOrderedArrangementUpdateSection=_inOrderedArrangementUpdateSection - In the implementation block
@property (assign,nonatomic) double proportionalFillDenominator;                                                             //@synthesize proportionalFillDenominator=_proportionalFillDenominator - In the implementation block
@property (assign,nonatomic) double spacing;                                                                                 //@synthesize spacing=_spacing - In the implementation block
@property (assign,getter=isBaselineRelativeArrangement,nonatomic) BOOL baselineRelativeArrangement;                          //@synthesize baselineRelativeArrangement=_baselineRelativeArrangement - In the implementation block
@property (assign,nonatomic) long long distribution;                                                                         //@synthesize distribution=_distribution - In the implementation block
@property (assign,setter=_setItemOrderingChanged:,nonatomic) BOOL _itemOrderingChanged;                                      //@synthesize itemOrderingChanged=_itemOrderingChanged - In the implementation block
@property (assign,setter=_setItemFittingSizeChanged:,nonatomic) BOOL _itemFittingSizeChanged;                                //@synthesize itemFittingSizeChanged=_itemFittingSizeChanged - In the implementation block
@property (nonatomic,readonly) NSMapTable * customSpacings;                                                                  //@synthesize customSpacings=_customSpacings - In the implementation block
@property (assign,nonatomic) long long axis; 
@property (assign,nonatomic) BOOL layoutFillsCanvas; 
@property (assign,nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling; 
@property (nonatomic,readonly) NSSet * _newlyHiddenItems; 
@property (nonatomic,readonly) NSSet * _newlyUnhiddenItems; 
@property (nonatomic,readonly) NSSet * invalidBaselineConstraints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDistribution:(long long)arg1 ;
-(long long)distribution;
-(double)spacing;
-(void)setSpacing:(double)arg1 ;
-(BOOL)isBaselineRelativeArrangement;
-(void)setProportionalFillDenominator:(double)arg1 ;
-(NSMapTable *)customSpacings;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(void)_setItemFittingSizeChanged:(BOOL)arg1 ;
-(BOOL)hasEstablishedOrderingValues;
-(BOOL)isInOrderedArrangementUpdateSection;
-(double)customSpacingAfterItem:(id)arg1 ;
-(BOOL)_itemOrderingChanged;
-(BOOL)_itemFittingSizeChanged;
-(void)setCustomSpacing:(double)arg1 afterItem:(id)arg2 ;
-(double)proportionalFillDenominator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInOrderedArrangementUpdateSection:(BOOL)arg1 ;
-(void)_setItemOrderingChanged:(BOOL)arg1 ;
-(void)setHasEstablishedOrderingValues:(BOOL)arg1 ;
@end

