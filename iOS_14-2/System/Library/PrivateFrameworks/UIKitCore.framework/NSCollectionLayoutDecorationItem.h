/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutItem.h>
#import <UIKitCore/_UICollectionLayoutAuxillaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutSize, NSString, NSCollectionLayoutAnchor, NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSCollectionLayoutBoundarySupplementaryItem;

@interface NSCollectionLayoutDecorationItem : NSCollectionLayoutItem <_UICollectionLayoutAuxillaryItem, NSCopying> {

	BOOL _isBackgroundDecoration;
	long long _zIndex;
	NSString* _elementKind;
	NSCollectionLayoutAnchor* _containerAnchor;
	NSCollectionLayoutAnchor* _itemAnchor;
	Class __registrationViewClass;

}

@property (nonatomic,retain) NSString * elementKind;                                                                 //@synthesize elementKind=_elementKind - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * containerAnchor;                                             //@synthesize containerAnchor=_containerAnchor - In the implementation block
@property (nonatomic,retain) NSCollectionLayoutAnchor * itemAnchor;                                                  //@synthesize itemAnchor=_itemAnchor - In the implementation block
@property (nonatomic,readonly) BOOL isBackgroundDecoration;                                                          //@synthesize isBackgroundDecoration=_isBackgroundDecoration - In the implementation block
@property (setter=_setRegistrationViewClass:,nonatomic,retain) Class _registrationViewClass;                         //@synthesize _registrationViewClass=__registrationViewClass - In the implementation block
@property (assign,nonatomic) long long zIndex;                                                                       //@synthesize zIndex=_zIndex - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * size; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets _effectiveContentInsets; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutBoundarySupplementaryItem * boundarySupplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutDecorationItem * decorationItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundDecorationItemWithElementKind:(id)arg1 ;
+(id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(void)setItemAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSString *)elementKind;
-(NSCollectionLayoutDecorationItem *)decorationItem;
-(void)setZIndex:(long long)arg1 ;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(void)setElementKind:(NSString *)arg1 ;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutItem *)item;
-(long long)zIndex;
-(id)initWithElementKind:(id)arg1 size:(id)arg2 contentInsets:(NSDirectionalEdgeInsets)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 registrationViewClass:(Class)arg7 isBackgroundDecoration:(BOOL)arg8 ;
-(BOOL)isBackgroundDecoration;
-(Class)_registrationViewClass;
-(void)setContainerAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(void)_setRegistrationViewClass:(Class)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

