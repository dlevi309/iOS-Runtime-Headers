/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusRegion.h>

@interface _UIFocusSpeedBumpRegion : _UIFocusRegion {

	unsigned long long _speedBumpEdges;

}

@property (assign,nonatomic) unsigned long long speedBumpEdges;              //@synthesize speedBumpEdges=_speedBumpEdges - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_canOccludeRegionsBelow;
-(BOOL)_canBeOccludedByRegionsAbove;
-(unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1 ;
-(unsigned long long)speedBumpEdges;
-(id)initWithFrame:(CGRect)arg1 speedBumpEdges:(unsigned long long)arg2 ;
-(void)setSpeedBumpEdges:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

