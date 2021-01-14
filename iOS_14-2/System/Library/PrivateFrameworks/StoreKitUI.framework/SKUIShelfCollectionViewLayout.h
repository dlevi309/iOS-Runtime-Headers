/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;              //@synthesize layoutData=_layoutData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layoutAttributesClass;
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
@end

