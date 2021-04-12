/*
* Generated on Monday, March 1, 2021 at 2:34:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

