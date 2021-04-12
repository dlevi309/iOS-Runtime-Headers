/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSCollectionLayoutAnchor;

@interface NSCollectionLayoutSupplementaryItem : NSCollectionLayoutItem <NSCopying> {

	long long _zIndex;
	NSString* _elementKind;
	NSCollectionLayoutAnchor* _containerAnchor;
	NSCollectionLayoutAnchor* _itemAnchor;

}

@property (nonatomic,retain) NSString * elementKind;                                  //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * containerAnchor;              //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * itemAnchor;                   //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (assign,nonatomic) long long zIndex;                                        //@synthesize zIndex=_zIndex - In the implementation block
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
+(id)supplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 itemAnchor:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)item;
-(long long)zIndex;
-(NSString *)elementKind;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 ;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(id)supplementaryItem;
-(id)boundarySupplementaryItem;
-(id)decorationItem;
-(void)setZIndex:(long long)arg1 ;
-(void)setElementKind:(NSString *)arg1 ;
-(void)setContainerAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(void)setItemAnchor:(NSCollectionLayoutAnchor *)arg1 ;
@end

