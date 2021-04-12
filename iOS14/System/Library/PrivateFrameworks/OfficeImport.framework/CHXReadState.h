/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)chart;
-(void)setResources:(id)arg1 ;
-(id)exState;
-(id)currentSeries;
-(void)setCurrentSeries:(id)arg1 ;
-(void)setChart:(id)arg1 ;
-(id)autoStyling;
-(id)initWithDrawingState:(id)arg1 ;
-(id)drawingState;
-(id)chartPart;
-(id)defaultTextProperties;
-(void)setDefaultTextPropertiesHaveExplicitFontSize:(BOOL)arg1 ;
-(void)setDefaultTextProperties:(id)arg1 ;
-(void)setCurrentChartType:(id)arg1 ;
-(BOOL)ignoreFormulas;
-(id)currentChartType;
-(void)pushTitleTextProperties:(BOOL)arg1 ;
-(void)popTitleTextProperties;
-(void)setChartPart:(id)arg1 ;
-(void)setIgnoreFormulas:(BOOL)arg1 ;
-(void)pushDefaultTextProperties:(id)arg1 ;
-(void)popDefaultTextProperties;
@end

