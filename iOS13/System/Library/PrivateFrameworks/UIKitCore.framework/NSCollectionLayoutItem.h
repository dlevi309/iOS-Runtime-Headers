/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutEdgeSpacing, NSArray, NSCollectionLayoutSize, NSUUID, NSString;

@interface NSCollectionLayoutItem : NSObject <NSCopying> {

	BOOL _containsEstimatedSizeItem;
	BOOL _hasComputedContainsEstimatedItem;
	NSCollectionLayoutEdgeSpacing* _edgeSpacing;
	NSArray* _supplementaryItems;
	NSCollectionLayoutSize* _size;
	NSUUID* _identifier;
	NSString* _name;
	NSArray* _decorationItems;
	NSDirectionalEdgeInsets _contentInsets;

}

@property (nonatomic,copy) NSCollectionLayoutSize * size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryItems;                             //@synthesize supplementaryItems=_supplementaryItems - In the implementation block
@property (nonatomic,copy) NSArray * decorationItems;                                //@synthesize decorationItems=_decorationItems - In the implementation block
@property (assign,nonatomic) BOOL hasComputedContainsEstimatedItem;                  //@synthesize hasComputedContainsEstimatedItem=_hasComputedContainsEstimatedItem - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets contentInsets;                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSCollectionLayoutEdgeSpacing * edgeSpacing;              //@synthesize edgeSpacing=_edgeSpacing - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize; 
+(id)itemWithLayoutSize:(id)arg1 ;
+(id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2 ;
+(id)itemWithSize:(id)arg1 decorationItems:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(NSCollectionLayoutSize *)size;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setSize:(NSCollectionLayoutSize *)arg1 ;
-(NSCollectionLayoutSize *)layoutSize;
-(NSDirectionalEdgeInsets)contentInsets;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7 ;
-(NSCollectionLayoutEdgeSpacing *)edgeSpacing;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(BOOL)hasComputedContainsEstimatedItem;
-(void)_enumerateItemsWithHandler:(/*^block*/id)arg1 ;
-(void)_enumerateSupplementaryItemsWithHandler:(/*^block*/id)arg1 ;
-(void)setHasComputedContainsEstimatedItem:(BOOL)arg1 ;
-(BOOL)isGroup;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(BOOL)hasCustomGroupItemProvider;
-(BOOL)isDecoration;
-(BOOL)isSupplementary;
-(BOOL)containsEstimatedSizeItem;
-(CGSize)_insetSizeForContainer:(id)arg1 ;
-(BOOL)isCustomGroup;
-(BOOL)isAuxillary;
-(id)auxillaryItems;
-(BOOL)ignoresRTL;
-(void)setEdgeSpacing:(NSCollectionLayoutEdgeSpacing *)arg1 ;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(id)_visualDescription;
@end

