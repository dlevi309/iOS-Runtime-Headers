/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/SKUIShelfCollectionViewLayout.h>
@class SKUIShelfLayoutData;


@protocol SKUIShelfCollectionViewLayout <NSObject>
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData; 
@required
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(id)arg1;

@end


@class SKUIShelfLayoutData, NSString;

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout> {

	SKUIShelfLayoutData* _layoutData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;              //@synthesize layoutData=_layoutData - In the implementation block
+(Class)layoutAttributesClass;
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
@end

