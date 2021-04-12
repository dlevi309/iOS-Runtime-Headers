/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UICollectionLayoutSupplementaryItem.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class NSString;

@interface _UICollectionLayoutBoundarySupplementaryItem : _UICollectionLayoutSupplementaryItem <NSCopying, _UICollectionLayoutAPIRespresenting> {

	NSString* _elementKind;
	long long _alignment;
	CGPoint _offset;
	BOOL _extendsBoundary;
	BOOL _pinToVisibleBounds;

}

@property (assign,nonatomic) BOOL extendsBoundary;                 //@synthesize extendsBoundary=_extendsBoundary - In the implementation block
@property (assign,nonatomic) BOOL pinToVisibleBounds;              //@synthesize pinToVisibleBounds=_pinToVisibleBounds - In the implementation block
@property (nonatomic,readonly) long long alignment;                //@synthesize alignment=_alignment - In the implementation block
@property (nonatomic,readonly) CGPoint offset;                     //@synthesize offset=_offset - In the implementation block
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 ;
+(id)boundarySupplementaryItemWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 ;
-(id)initWithSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 offset:(CGPoint)arg4 zIndex:(long long)arg5 contentInsets:(NSDirectionalEdgeInsets)arg6 extendsBoundary:(BOOL)arg7 pinToVisibleBounds:(BOOL)arg8 ;
-(long long)alignment;
-(void)setPinToVisibleBounds:(BOOL)arg1 ;
-(BOOL)pinToVisibleBounds;
-(CGPoint)offset;
-(id)_apiRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExtendsBoundary:(BOOL)arg1 ;
-(BOOL)extendsBoundary;
@end

