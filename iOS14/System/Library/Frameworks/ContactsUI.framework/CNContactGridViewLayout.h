/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath;

@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying> {

	BOOL _needsUpdateLayout;
	long long _numberOfColumns;
	NSIndexPath* _selectedIndexPath;
	double _offsetBefore;
	double _offsetAfter;
	double _selectedItemWidthOffset;

}

@property (assign,nonatomic) BOOL needsUpdateLayout;                       //@synthesize needsUpdateLayout=_needsUpdateLayout - In the implementation block
@property (assign,nonatomic) double offsetBefore;                          //@synthesize offsetBefore=_offsetBefore - In the implementation block
@property (assign,nonatomic) double offsetAfter;                           //@synthesize offsetAfter=_offsetAfter - In the implementation block
@property (assign,nonatomic) double selectedItemWidthOffset;               //@synthesize selectedItemWidthOffset=_selectedItemWidthOffset - In the implementation block
@property (assign,nonatomic) long long numberOfColumns;                    //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;              //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
-(void)setNumberOfColumns:(long long)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(/*^block*/id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3 ;
-(long long)numberOfColumns;
-(double)offsetAfter;
-(double)offsetBefore;
-(void)_updateLayoutMetrics;
-(BOOL)needsUpdateLayout;
-(void)setOffsetBefore:(double)arg1 ;
-(void)setNeedsUpdateLayout:(BOOL)arg1 ;
-(void)setOffsetAfter:(double)arg1 ;
-(double)selectedItemWidthOffset;
-(void)setSelectedItemWidthOffset:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
@end

