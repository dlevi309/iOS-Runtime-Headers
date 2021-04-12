/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL fade; 
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(UIEdgeInsets)insetsForSection:(long long)arg1 ;
-(BOOL)_indexPathIsHeaderIndexPath:(id)arg1 ;
-(id)_customAttributesForStickyHeader:(id)arg1 ;
-(void)setUseStickyHeader:(BOOL)arg1 ;
-(BOOL)useStickyHeader;
-(BOOL)useCompactInsetForTitle;
-(void)setUseCompactInsetForTitle:(BOOL)arg1 ;
@end

