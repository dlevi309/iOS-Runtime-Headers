/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <ConversationKit/ConversationKit-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface ConversationKit.ParticipantListLayout : UICollectionViewFlowLayout {

	 indexPathLayoutAttributes;
	 lastInvalidatedSize;
	 calculatedContentSize;

}

@property (readonly,nonatomic) CGSize collectionViewContentSize; 
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
@end

