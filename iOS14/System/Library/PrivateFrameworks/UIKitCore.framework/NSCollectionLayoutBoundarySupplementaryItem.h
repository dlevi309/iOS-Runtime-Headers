/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCollectionLayoutSupplementaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying> {

	long long _alignment;
	BOOL _extendsBoundary;
	BOOL _pinToVisibleBounds;
	CGPoint _offset;

}

@property (assign,nonatomic) BOOL extendsBoundary;                 //@synthesize extendsBoundary=_extendsBoundary - In the implementation block
@property (assign,nonatomic) BOOL pinToVisibleBounds;              //@synthesize pinToVisibleBounds=_pinToVisibleBounds - In the implementation block
@property (nonatomic,readonly) long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
+(id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(CGPoint)arg4 ;
+(id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 ;
-(long long)alignment;
-(void)setPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)pinToVisibleBounds;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(CGPoint)arg8 extendsBoundary:(BOOL)arg9 pinToVisibleBounds:(BOOL)arg10 ;
-(CGPoint)offset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExtendsBoundary:(BOOL)arg1 ;
-(id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2 ;
-(BOOL)extendsBoundary;
@end

