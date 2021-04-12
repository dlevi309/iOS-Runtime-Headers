/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSCollectionLayoutSize * size; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets contentInsets; 
@property (nonatomic,readonly) NSDirectionalEdgeInsets _effectiveContentInsets; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutBoundarySupplementaryItem * boundarySupplementaryItem; 
@property (nonatomic,readonly) NSCollectionLayoutDecorationItem * decorationItem; 
+(id)backgroundDecorationItemWithElementKind:(id)arg1 ;
+(id)decorationItemWithSize:(id)arg1 elementKind:(id)arg2 containerAnchor:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSCollectionLayoutItem *)item;
-(long long)zIndex;
-(Class)_registrationViewClass;
-(BOOL)isBackgroundDecoration;
-(NSString *)elementKind;
-(NSCollectionLayoutAnchor *)containerAnchor;
-(NSCollectionLayoutAnchor *)itemAnchor;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(NSCollectionLayoutBoundarySupplementaryItem *)boundarySupplementaryItem;
-(NSCollectionLayoutDecorationItem *)decorationItem;
-(void)setZIndex:(long long)arg1 ;
-(void)setElementKind:(NSString *)arg1 ;
-(void)setContainerAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(void)setItemAnchor:(NSCollectionLayoutAnchor *)arg1 ;
-(id)initWithElementKind:(id)arg1 size:(id)arg2 contentInsets:(NSDirectionalEdgeInsets)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 registrationViewClass:(Class)arg7 isBackgroundDecoration:(BOOL)arg8 ;
-(void)_setRegistrationViewClass:(Class)arg1 ;
@end

