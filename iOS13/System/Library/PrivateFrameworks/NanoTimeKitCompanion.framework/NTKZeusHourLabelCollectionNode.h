/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKHourLabelCollectionNode.h>

@class NSArray;

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode {

	unsigned long long _bleed;
	CGPoint _childrenDefaultPositions[12];
	CGPoint _childrenStatusPositions[12];
	unsigned long long _density;
	NSArray* _visibleNodesForCurrentDensity;

}

@property (nonatomic,retain) NSArray * visibleNodesForCurrentDensity;              //@synthesize visibleNodesForCurrentDensity=_visibleNodesForCurrentDensity - In the implementation block
@property (assign,nonatomic) unsigned long long density;                           //@synthesize density=_density - In the implementation block
+(id)hours12ZeusWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3 ;
-(void)setDensity:(unsigned long long)arg1 ;
-(unsigned long long)density;
-(void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3 ;
-(void)createSubNodes;
-(CGPoint)childStatusPositionForIndex:(long long)arg1 ;
-(CGPoint)childDefaultPositionForIndex:(long long)arg1 ;
-(id)initWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3 ;
-(NSArray *)visibleNodesForCurrentDensity;
-(void)_setupPositions;
-(BOOL)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2 ;
-(void)setVisibleNodesForCurrentDensity:(NSArray *)arg1 ;
@end

