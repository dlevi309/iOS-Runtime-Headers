/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@interface _UICollectionLayoutAnchor : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	unsigned long long _edges;
	CGPoint _offset;
	CGPoint _anchorPoint;
	BOOL _offsetIsUnitOffset;

}

@property (nonatomic,readonly) unsigned long long edges; 
@property (nonatomic,readonly) CGPoint offset; 
@property (nonatomic,readonly) CGPoint anchorPoint; 
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithAnchorPoint:(CGPoint)arg1 unitOffset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 ;
+(id)layoutAnchorWithEdges:(unsigned long long)arg1 unitOffset:(CGPoint)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)offset;
-(CGPoint)anchorPoint;
-(id)initWithEdges:(unsigned long long)arg1 offset:(CGPoint)arg2 anchorPoint:(CGPoint)arg3 offsetIsUnitOffset:(BOOL)arg4 ;
-(unsigned long long)edges;
-(id)_apiRepresentation;
@end

