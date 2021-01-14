/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXExploreParsingState : NSObject {

	BOOL _canIgnoreNextHeroSide;
	BOOL _didMoveBestItemOutOfNextShortRow;
	BOOL _didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
	long long _parseLocation;
	double _buildingBlockAspectRatio;
	long long _nextRowType;
	long long _nextHeroSide;
	long long _numberOfConsecutiveMediumHeroRows;
	long long _effectiveLargeHeroDensity;
	long long _numberOfColumnsOverride;
	long long _lastHeroRowTag;

}

@property (assign,nonatomic) long long parseLocation;                                           //@synthesize parseLocation=_parseLocation - In the implementation block
@property (assign,nonatomic) double buildingBlockAspectRatio;                                   //@synthesize buildingBlockAspectRatio=_buildingBlockAspectRatio - In the implementation block
@property (assign,nonatomic) long long nextRowType;                                             //@synthesize nextRowType=_nextRowType - In the implementation block
@property (assign,nonatomic) long long nextHeroSide;                                            //@synthesize nextHeroSide=_nextHeroSide - In the implementation block
@property (nonatomic,readonly) BOOL canIgnoreNextHeroSide;                                      //@synthesize canIgnoreNextHeroSide=_canIgnoreNextHeroSide - In the implementation block
@property (assign,nonatomic) long long numberOfConsecutiveMediumHeroRows;                       //@synthesize numberOfConsecutiveMediumHeroRows=_numberOfConsecutiveMediumHeroRows - In the implementation block
@property (assign,nonatomic) long long effectiveLargeHeroDensity;                               //@synthesize effectiveLargeHeroDensity=_effectiveLargeHeroDensity - In the implementation block
@property (assign,nonatomic) long long numberOfColumnsOverride;                                 //@synthesize numberOfColumnsOverride=_numberOfColumnsOverride - In the implementation block
@property (assign,nonatomic) long long lastHeroRowTag;                                          //@synthesize lastHeroRowTag=_lastHeroRowTag - In the implementation block
@property (assign,nonatomic) BOOL didMoveBestItemOutOfNextShortRow;                             //@synthesize didMoveBestItemOutOfNextShortRow=_didMoveBestItemOutOfNextShortRow - In the implementation block
@property (assign,nonatomic) BOOL didMoveBestItemOutOfPreviousShortRowIntoHeroRow;              //@synthesize didMoveBestItemOutOfPreviousShortRowIntoHeroRow=_didMoveBestItemOutOfPreviousShortRowIntoHeroRow - In the implementation block
-(long long)numberOfConsecutiveMediumHeroRows;
-(long long)nextHeroSide;
-(double)buildingBlockAspectRatio;
-(void)setDidMoveBestItemOutOfPreviousShortRowIntoHeroRow:(BOOL)arg1 ;
-(long long)lastHeroRowTag;
-(void)setNumberOfColumnsOverride:(long long)arg1 ;
-(BOOL)canIgnoreNextHeroSide;
-(void)setDidMoveBestItemOutOfNextShortRow:(BOOL)arg1 ;
-(long long)nextRowType;
-(void)prepareWithMetrics:(id)arg1 ;
-(void)setBuildingBlockAspectRatio:(double)arg1 ;
-(long long)effectiveLargeHeroDensity;
-(void)setEffectiveLargeHeroDensity:(long long)arg1 ;
-(void)setNextRowType:(long long)arg1 ;
-(BOOL)didMoveBestItemOutOfNextShortRow;
-(void)setNumberOfConsecutiveMediumHeroRows:(long long)arg1 ;
-(BOOL)didMoveBestItemOutOfPreviousShortRowIntoHeroRow;
-(long long)numberOfColumnsOverride;
-(void)setNextHeroSide:(long long)arg1 ;
-(void)setLastHeroRowTag:(long long)arg1 ;
-(long long)parseLocation;
-(void)setParseLocation:(long long)arg1 ;
@end

