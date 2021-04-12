/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol CHAutoStyling;
@class EXOfficeArtState, CHDChart, EDResources, OCPPackagePart, CHDChartType, CHDSeries, OADParagraphProperties;

@interface CHXReadState : NSObject {

	EXOfficeArtState* mDrawingState;
	CHDChart* mChart;
	EDResources* mResources;
	OCPPackagePart* mChartPart;
	CHDChartType* mCurrentChartType;
	CHDSeries* mCurrentSeries;
	OADParagraphProperties* mDefaultTextProperties;
	BOOL mDefaultTextPropertiesHaveExplicitFontSize;
	id<CHAutoStyling> mAutoStyling;
	BOOL mIgnoreFormulas;

}

@property (assign,nonatomic) BOOL ignoreFormulas; 
-(id)resources;
-(void)setResources:(id)arg1 ;
-(id)currentSeries;
-(void)setCurrentSeries:(id)arg1 ;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)autoStyling;
-(id)initWithDrawingState:(id)arg1 ;
-(id)drawingState;
-(id)chartPart;
-(id)defaultTextProperties;
-(void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg1 ;
-(void)setDefaultTextProperties:(id)arg1 ;
-(void)setCurrentChartType:(id)arg1 ;
-(id)exState;
-(BOOL)ignoreFormulas;
-(id)currentChartType;
-(void)pushTitleTextProperties:(BOOL)arg1 ;
-(void)popTitleTextProperties;
-(void)setChartPart:(id)arg1 ;
-(void)setIgnoreFormulas:(BOOL)arg1 ;
-(void)pushDefaultTextProperties:(id)arg1 ;
-(void)popDefaultTextProperties;
@end

