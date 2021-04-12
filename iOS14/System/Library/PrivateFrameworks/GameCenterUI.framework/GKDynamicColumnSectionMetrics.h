/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics {

	unsigned long long _columnsInPortrait;
	unsigned long long _columnsInLandscape;

}

@property (assign,nonatomic) unsigned long long columnsInPortrait;               //@synthesize columnsInPortrait=_columnsInPortrait - In the implementation block
@property (assign,nonatomic) unsigned long long columnsInLandscape;              //@synthesize columnsInLandscape=_columnsInLandscape - In the implementation block
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(long long)arg3 ;
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 ;
-(CGSize)itemSizeForCollectionView:(id)arg1 ;
-(id)initWithIdiom:(long long)arg1 ;
-(void)setColumnsInPortrait:(unsigned long long)arg1 ;
-(void)setColumnsInLandscape:(unsigned long long)arg1 ;
-(void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 ;
-(unsigned long long)columnsInPortrait;
-(unsigned long long)columnsInLandscape;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

