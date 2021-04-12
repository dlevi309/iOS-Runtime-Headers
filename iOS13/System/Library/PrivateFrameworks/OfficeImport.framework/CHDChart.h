/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADGraphic.h>
#import <libobjc.A.dylib/OADDrawableContainer.h>

@class EDSheet, CHDPlotArea, CHDView3D, CHDTitle, CHDLegend, EDWorkbook, OADGraphicProperties, CHDDefaultTextProperties, NSMutableArray, OADThemeOverrides, NSString;

@interface CHDChart : OADGraphic <OADDrawableContainer> {

	EDSheet* mSheet;
	int mStyleId;
	BOOL mAutoTitleDeleted;
	BOOL mPlotVisibleCellsOnly;
	BOOL mMSGraph;
	BOOL mHasSharedXValues;
	BOOL mDirectionChanged;
	BOOL mHasVisibleSeriesNames;
	int mDisplayBlankCellsAs;
	CHDPlotArea* mPlotArea;
	CHDView3D* mView3D;
	CHDTitle* mTitle;
	CHDLegend* mLegend;
	EDWorkbook* mExternalData;
	OADGraphicProperties* mChartAreaGraphicProperties;
	OADGraphicProperties* mBackWallGraphicProperties;
	OADGraphicProperties* mSideWallGraphicProperties;
	OADGraphicProperties* mFloorGraphicProperties;
	CHDDefaultTextProperties* mDefaultTextProperties;
	int mChartDirection;
	CGRect mLogicalBounds;
	NSMutableArray* mDrawables;
	OADThemeOverrides* mThemeOverrides;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)binaryEffects:(BOOL)arg1 ;
-(id)init;
-(NSString *)description;
-(void)addChild:(id)arg1 ;
-(id)title;
-(void)setTitle:(id)arg1 ;
-(int)direction;
-(void)setDirection:(int)arg1 ;
-(id)children;
-(void)removeChild:(id)arg1 ;
-(void)addChildren:(id)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(id)sheet;
-(id)defaultTextFont;
-(int)styleId;
-(void)setStyleId:(int)arg1 ;
-(BOOL)isBinary;
-(id)externalData;
-(void)setExternalData:(id)arg1 ;
-(unsigned long long)childCount;
-(id)processors;
-(void)replaceChild:(id)arg1 with:(id)arg2 ;
-(unsigned long long)categoryCount;
-(id)styleMatrix;
-(CGRect)logicalBounds;
-(id)workbook;
-(id)mainType;
-(id)plotArea;
-(id)chartAreaGraphicProperties;
-(id)legend;
-(void)setLogicalBounds:(CGRect)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)setSideWallGraphicProperties:(id)arg1 ;
-(void)setBackWallGraphicProperties:(id)arg1 ;
-(void)setFloorGraphicProperties:(id)arg1 ;
-(void)setLegend:(id)arg1 ;
-(void)setView3D:(id)arg1 ;
-(void)setSheet:(id)arg1 ;
-(unsigned long long)defaultFontIndex;
-(int)defaultLabelPosition;
-(id)defaultThemeFont;
-(BOOL)isAutoTitleDeleted;
-(BOOL)isPlotVisibleCellsOnly;
-(int)displayBlankAs;
-(id)backWallGraphicProperties;
-(id)sideWallGraphicProperties;
-(id)floorGraphicProperties;
-(id)themeOverrides;
-(id)defaultDataLabelFont;
-(id)defaultSeriesTitleFont;
-(id)defaultFontWithResources:(id)arg1 ;
-(BOOL)isPie;
-(BOOL)isArea;
-(BOOL)supportsMarkers;
-(BOOL)isScatterOrBubble;
-(void)setMSGraph:(BOOL)arg1 ;
-(BOOL)hasSharedXValues;
-(void)setHasSharedXValues:(BOOL)arg1 ;
-(BOOL)isDirectionChanged;
-(unsigned long long)seriesCount;
-(id)defaultContentFormat;
-(BOOL)isMSGraph;
-(BOOL)is3D;
-(void)setVisibleSeriesNames:(BOOL)arg1 ;
-(void)setDirectionChanged:(BOOL)arg1 ;
-(BOOL)hasVisibleSeriesNames;
-(void)setThemeOverrides:(id)arg1 ;
-(void)setChartAreaGraphicProperties:(id)arg1 ;
-(void)setPlotArea:(id)arg1 ;
-(void)setAutoTitleDeleted:(BOOL)arg1 ;
-(void)setPlotVisibleCellsOnly:(BOOL)arg1 ;
-(void)setDisplayBlankAs:(int)arg1 ;
-(id)defaultTextProperties;
-(void)setDefaultTextProperties:(id)arg1 ;
-(id)view3D;
@end

