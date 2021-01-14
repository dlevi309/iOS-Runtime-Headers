/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutFramesQueryResult.h>
@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;


@protocol _UICollectionLayoutFramesQueryResult <NSCopying>
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) long long index; 
@property (nonatomic,readonly) long long zIndex; 
@property (nonatomic,readonly) long long effectiveZIndex; 
@property (nonatomic,readonly) long long resultKind; 
@property (nonatomic,readonly) NSCollectionLayoutItem * item; 
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryItem> auxillaryItem; 
@property (nonatomic,readonly) long long auxillaryKind; 
@property (nonatomic,readonly) NSUUID * supplementaryEnrollmentIdentifier; 
@property (nonatomic,readonly) BOOL isSupplementary; 
@property (nonatomic,readonly) BOOL isDecoration; 
@property (nonatomic,readonly) BOOL isAuxillary; 
@property (nonatomic,readonly) BOOL isItem; 
@property (nonatomic,readonly) BOOL isAuxillaryKindGlobal; 
@property (nonatomic,readonly) BOOL isAuxillaryKindSection; 
@property (nonatomic,readonly) BOOL isAuxillaryKindGroup; 
@property (nonatomic,readonly) BOOL isAuxillaryKindItem; 
@required
-(long long)index;
-(BOOL)isAuxillaryKindItem;
-(BOOL)isDecoration;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(id)copyWithOffset:(CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3;
-(NSCollectionLayoutItem *)item;
-(BOOL)isAuxillaryKindGroup;
-(long long)zIndex;
-(BOOL)isSupplementary;
-(CGRect)frame;
-(BOOL)isAuxillary;
-(long long)auxillaryKind;
-(NSUUID *)supplementaryEnrollmentIdentifier;
-(id<_UICollectionLayoutAuxillaryItem>)auxillaryItem;
-(id)copyWithIndex:(long long)arg1;
-(BOOL)isAuxillaryKindSection;
-(long long)effectiveZIndex;
-(BOOL)isItem;
-(long long)resultKind;
-(id)copyWithFrame:(CGRect)arg1 index:(long long)arg2;
-(BOOL)isAuxillaryKindGlobal;
-(id)copyWithOffset:(CGPoint)arg1;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSCollectionLayoutItem, NSCollectionLayoutSupplementaryItem, NSUUID;

@interface _UICollectionLayoutFramesQueryResult : NSObject <_UICollectionLayoutFramesQueryResult, NSCopying> {

	long long _index;
	long long _zIndex;
	long long _resultKind;
	NSCollectionLayoutItem* _item;
	NSUUID* _supplementaryEnrollmentIdentifier;
	long long _auxillaryKind;
	CGRect _frame;

}

@property (nonatomic,readonly) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) long long index;                                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long zIndex;                                                     //@synthesize zIndex=_zIndex - In the implementation block
@property (nonatomic,readonly) long long effectiveZIndex; 
@property (nonatomic,readonly) long long resultKind;                                                 //@synthesize resultKind=_resultKind - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutItem * item;                                        //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSupplementaryItem * supplementaryItem; 
@property (nonatomic,readonly) id<_UICollectionLayoutAuxillaryItem> auxillaryItem; 
@property (nonatomic,readonly) long long auxillaryKind;                                              //@synthesize auxillaryKind=_auxillaryKind - In the implementation block
@property (nonatomic,readonly) NSUUID * supplementaryEnrollmentIdentifier;                           //@synthesize supplementaryEnrollmentIdentifier=_supplementaryEnrollmentIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isSupplementary; 
@property (nonatomic,readonly) BOOL isDecoration; 
@property (nonatomic,readonly) BOOL isAuxillary; 
@property (nonatomic,readonly) BOOL isItem; 
@property (nonatomic,readonly) BOOL isAuxillaryKindGlobal; 
@property (nonatomic,readonly) BOOL isAuxillaryKindSection; 
@property (nonatomic,readonly) BOOL isAuxillaryKindGroup; 
@property (nonatomic,readonly) BOOL isAuxillaryKindItem; 
+(id)kindIndexKeyForKind:(id)arg1 index:(long long)arg2 ;
-(long long)index;
-(BOOL)isAuxillaryKindItem;
-(BOOL)isDecoration;
-(NSCollectionLayoutSupplementaryItem *)supplementaryItem;
-(id)copyWithOffset:(CGPoint)arg1 index:(long long)arg2 supplementaryEnrollmentIdentifier:(id)arg3 ;
-(NSCollectionLayoutItem *)item;
-(BOOL)isAuxillaryKindGroup;
-(long long)zIndex;
-(id)kindIndexKey;
-(BOOL)isSupplementary;
-(CGRect)frame;
-(BOOL)isAuxillary;
-(long long)auxillaryKind;
-(NSUUID *)supplementaryEnrollmentIdentifier;
-(id<_UICollectionLayoutAuxillaryItem>)auxillaryItem;
-(id)copyWithIndex:(long long)arg1 ;
-(id)description;
-(BOOL)isAuxillaryKindSection;
-(long long)effectiveZIndex;
-(BOOL)isItem;
-(id)initWithFrame:(CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 ;
-(long long)resultKind;
-(id)initWithFrame:(CGRect)arg1 index:(long long)arg2 zIndex:(long long)arg3 resultKind:(long long)arg4 item:(id)arg5 auxillaryKind:(long long)arg6 supplementaryEnrollmentIdentifier:(id)arg7 ;
-(id)copyWithFrame:(CGRect)arg1 index:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAuxillaryKindGlobal;
-(id)copyWithOffset:(CGPoint)arg1 ;
@end

