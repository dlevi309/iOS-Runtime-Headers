/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@protocol HRElectrocardiogramReportDataSource;
#import <HeartRhythmUI/HeartRhythmUI-Structs.h>
@class NSArray;

@interface HRElectrocardiogramReportGenerator : NSObject {

	id<HRElectrocardiogramReportDataSource> _dataSource;
	CGContextRef _pdfContext;
	NSArray* _waveformPaths;
	unsigned long long _heartGlyphPositionInFirstSectionText;
	double _descriptionTextSizeAdjustment;

}

@property (assign,nonatomic) CGContextRef pdfContext;                                                  //@synthesize pdfContext=_pdfContext - In the implementation block
@property (nonatomic,retain) NSArray * waveformPaths;                                                  //@synthesize waveformPaths=_waveformPaths - In the implementation block
@property (assign,nonatomic) unsigned long long heartGlyphPositionInFirstSectionText;                  //@synthesize heartGlyphPositionInFirstSectionText=_heartGlyphPositionInFirstSectionText - In the implementation block
@property (assign,nonatomic) double descriptionTextSizeAdjustment;                                     //@synthesize descriptionTextSizeAdjustment=_descriptionTextSizeAdjustment - In the implementation block
@property (nonatomic,__weak,readonly) id<HRElectrocardiogramReportDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id)initWithDataSource:(id)arg1 ;
-(id<HRElectrocardiogramReportDataSource>)dataSource;
-(id)_footerAttributedText;
-(void)setWaveformPaths:(NSArray *)arg1 ;
-(CGContextRef)pdfContext;
-(id)generatePDF;
-(CGRect)_pdfMediaBox;
-(void)setPdfContext:(CGContextRef)arg1 ;
-(id)_nameAttributedText;
-(CGPoint)_nameLeadingOrigin;
-(void)_drawAttributedText:(id)arg1 atOrigin:(CGPoint)arg2 leftAligned:(BOOL)arg3 ;
-(id)_birthdateAttributedText;
-(CGPoint)_birthdateLeadingOrigin;
-(id)_sampleDateAttributedText;
-(CGPoint)_sampleDateTrailingOrigin;
-(double)_horizontalSeparatorY;
-(void)_drawHorizontalSeparatorAt:(double)arg1 ;
-(double)descriptionTextSizeAdjustment;
-(id)_sectionOneAttributedText;
-(CGRect)_sectionOneBox;
-(NSRange)_drawAttributedText:(id)arg1 inRect:(CGRect)arg2 distanceToFirstBaseline:(double)arg3 drawHeartGlyph:(BOOL)arg4 mustFitInRect:(BOOL)arg5 ;
-(void)setDescriptionTextSizeAdjustment:(double)arg1 ;
-(id)_sectionTwoAttributedText;
-(CGRect)_sectionTwoBox;
-(BOOL)_didMultilineBulletFlowIntoSectionThree:(id)arg1 remainingRange:(NSRange)arg2 ;
-(id)_bulletedDescriptionTextAttributes;
-(id)_sectionThreeAttributedTextWithRemainingSectionTwoAttributedText:(id)arg1 ;
-(CGRect)_sectionThreeBox;
-(CGRect)_chartRowOneGridBox;
-(CGRect)_chartRowOneAxisBox;
-(void)_drawElectrocardiogramChartWithWaveformPathIndex:(long long)arg1 gridRect:(CGRect)arg2 axisRect:(CGRect)arg3 axisStartingIndex:(long long)arg4 displayControlSignal:(BOOL)arg5 ;
-(CGRect)_chartRowTwoGridBox;
-(CGRect)_chartRowTwoAxisBox;
-(CGRect)_chartRowThreeGridBox;
-(CGRect)_chartRowThreeAxisBox;
-(CGRect)_footerBox;
-(CGRect)_pdfCropBox;
-(id)_blackColorWithFraction:(double)arg1 ;
-(id)_nameText;
-(id)_birthdateText;
-(id)_sampleDateText;
-(id)_rhythmClassificationTitleText;
-(id)_averageHeartRateTitleText;
-(void)setHeartGlyphPositionInFirstSectionText:(unsigned long long)arg1 ;
-(id)_sectionTitleAttributedTextWithText:(id)arg1 ;
-(id)_averageHeartRateSectionTitleAttributedTextWithText:(id)arg1 ;
-(id)_rhythmClassificationDescriptionText;
-(id)_descriptionAttributedTextWithText:(id)arg1 ;
-(id)_symptomsDescriptionText;
-(id)_symtpomsTitleText;
-(id)_bulletedDescriptionAttributedTextWithBullets:(id)arg1 ;
-(id)_symptomsContinuedTitleText;
-(id)_horizontalChartResolutionText;
-(id)_verticalChartResolutionText;
-(id)_leadNameText;
-(id)_samplingRateText;
-(id)_iOSVersionText;
-(id)_watchOSVersionText;
-(id)_appleWatchModelText;
-(id)_informationalText;
-(unsigned long long)heartGlyphPositionInFirstSectionText;
-(NSArray *)waveformPaths;
-(void)_drawUIKitContentAtDocumentOrigin:(CGPoint)arg1 drawingBlock:(/*^block*/id)arg2 ;
-(void)_drawRect:(CGRect)arg1 ;
@end
