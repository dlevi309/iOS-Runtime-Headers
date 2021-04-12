/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)alignment;
-(CGPoint)offset;
-(BOOL)pinToVisibleBounds;
-(id)initWithSize:(id)arg1 contentInsets:(NSDirectionalEdgeInsets)arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(CGPoint)arg8 extendsBoundary:(BOOL)arg9 pinToVisibleBounds:(BOOL)arg10 ;
-(BOOL)extendsBoundary;
-(id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2 ;
-(void)setExtendsBoundary:(BOOL)arg1 ;
-(void)setPinToVisibleBounds:(BOOL)arg1 ;
@end

