/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

