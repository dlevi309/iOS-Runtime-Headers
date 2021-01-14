/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_enumerateSupplementaryItemsWithHandler:(/*^block*/id)arg1 ;
-(void)setContentInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setDecorationItems:(NSArray *)arg1 ;
-(BOOL)hasComputedContainsEstimatedItem;
-(BOOL)ignoresRTL;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7 ;
-(CGSize)_insetSizeForContainer:(id)arg1 ;
-(void)setEdgeSpacing:(NSCollectionLayoutEdgeSpacing *)arg1 ;
-(void)setHasComputedContainsEstimatedItem:(BOOL)arg1 ;
-(NSDirectionalEdgeInsets)_effectiveContentInsets;
-(BOOL)isGroup;
-(BOOL)hasCustomGroupItemProvider;
-(NSCollectionLayoutEdgeSpacing *)edgeSpacing;
-(NSCollectionLayoutSize *)layoutSize;
-(BOOL)isDecoration;
-(void)_enumerateItemsWithHandler:(/*^block*/id)arg1 ;
-(NSArray *)supplementaryItems;
-(NSArray *)decorationItems;
-(NSDirectionalEdgeInsets)contentInsets;
-(id)_visualDescription;
-(BOOL)isCustomGroup;
-(NSCollectionLayoutSize *)size;
-(BOOL)containsEstimatedSizeItem;
-(id)auxillaryItems;
-(BOOL)isSupplementary;
-(void)setSupplementaryItems:(NSArray *)arg1 ;
-(BOOL)isAuxillary;
-(void)setSize:(NSCollectionLayoutSize *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

