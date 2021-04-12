/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {

	unsigned long long _speedBumpEdges;

}

@property (assign,nonatomic) unsigned long long speedBumpEdges;              //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 speedBumpEdges:(unsigned long long)arg2 ;
-(unsigned long long)speedBumpEdges;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
@end

