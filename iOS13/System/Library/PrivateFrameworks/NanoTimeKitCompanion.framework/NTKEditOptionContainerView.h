/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKEditOptionContainerView <NSObject>
@property (nonatomic,readonly) unsigned long long numberOfSides; 
@property (nonatomic,readonly) unsigned long long numberOfVisibleSides; 
@required
-(void)enumerateSideViewsWithBlock:(/*^block*/id)arg1;
-(void)setView:(id)arg1 forSideAtIndex:(unsigned long long)arg2;
-(void)transitionToSideAtIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfSides;
-(id)viewForSideAtIndex:(unsigned long long)arg1;
-(void)transitionToFraction:(double)arg1 fromSideAtIndex:(unsigned long long)arg2 toSideAtIndex:(unsigned long long)arg3;
-(unsigned long long)numberOfVisibleSides;

@end

