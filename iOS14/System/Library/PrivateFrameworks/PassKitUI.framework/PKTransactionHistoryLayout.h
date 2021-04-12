/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>
#import <libobjc.A.dylib/PKDashboardLayout.h>

@class NSIndexPath, NSString;

@interface PKTransactionHistoryLayout : UICollectionViewFlowLayout <PKDashboardLayout> {

	NSIndexPath* _headerIndexPath;
	BOOL _needsCustomLocation;
	BOOL _useStickyHeader;
	BOOL _useCompactInsetForTitle;

}

@property (assign,nonatomic) BOOL useStickyHeader;                      //@synthesize useStickyHeader=_useStickyHeader - In the implementation block
@property (assign,nonatomic) BOOL useCompactInsetForTitle;              //@synthesize useCompactInsetForTitle=_useCompactInsetForTitle - In the implementation block
@property (assign,nonatomic) BOOL fade; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(BOOL)_indexPathIsHeaderIndexPath:(id)arg1 ;
-(id)_customAttributesForStickyHeader:(id)arg1 ;
-(void)setUseStickyHeader:(BOOL)arg1 ;
-(BOOL)useStickyHeader;
-(BOOL)useCompactInsetForTitle;
-(void)setUseCompactInsetForTitle:(BOOL)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
@end

