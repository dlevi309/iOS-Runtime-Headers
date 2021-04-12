/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKLollipopDelegate.h>
#import <libobjc.A.dylib/HKDisplayTypeSectionedContextViewDelegate.h>
#import <libobjc.A.dylib/HKScalarGraphCollectionViewDelegate.h>
#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>

@class NSMutableArray, HKUnitPreferenceController, HKScalarGraphCollectionViewController, HKSampleTypeUpdateController, UIStackView, NSLayoutConstraint, _HKAudiogramHeader, UIButton, HKDisplayTypeSectionedContextView, NSArray, _HKAudiogramAnnotationViewDataSource, HKLollipopController, HKAxis, NSString;

@interface HKAudiogramChartViewController : HKViewController <HKLollipopDelegate, HKDisplayTypeSectionedContextViewDelegate, HKScalarGraphCollectionViewDelegate, HKSampleTypeUpdateControllerObserver> {

	NSMutableArray* _audiograms;
	BOOL _audiogramsFetched;
	long long _currentAudiogramIndex;
	HKUnitPreferenceController* _unitController;
	double _minimumAudiogramHeight;
	HKScalarGraphCollectionViewController* _scalarGraphCollectionController;
	HKSampleTypeUpdateController* _updateController;
	UIStackView* _stackView;
	NSLayoutConstraint* _stackViewHeightConstraint;
	_HKAudiogramHeader* _audiogramHeader;
	UIButton* _showAllFiltersButton;
	HKDisplayTypeSectionedContextView* _contextView;
	NSArray* _sections;
	_HKAudiogramAnnotationViewDataSource* _annotationViewDataSource;
	long long _selectedOverlayEar;
	HKLollipopController* _lollipopController;
	HKAxis* _yAxis;

}

@property (nonatomic,retain) HKUnitPreferenceController * unitController;                                          //@synthesize unitController=_unitController - In the implementation block
@property (assign,nonatomic) double minimumAudiogramHeight;                                                        //@synthesize minimumAudiogramHeight=_minimumAudiogramHeight - In the implementation block
@property (nonatomic,retain) HKScalarGraphCollectionViewController * scalarGraphCollectionController;              //@synthesize scalarGraphCollectionController=_scalarGraphCollectionController - In the implementation block
@property (nonatomic,retain) HKSampleTypeUpdateController * updateController;                                      //@synthesize updateController=_updateController - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                              //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * stackViewHeightConstraint;                                       //@synthesize stackViewHeightConstraint=_stackViewHeightConstraint - In the implementation block
@property (nonatomic,retain) _HKAudiogramHeader * audiogramHeader;                                                 //@synthesize audiogramHeader=_audiogramHeader - In the implementation block
@property (nonatomic,retain) UIButton * showAllFiltersButton;                                                      //@synthesize showAllFiltersButton=_showAllFiltersButton - In the implementation block
@property (nonatomic,retain) HKDisplayTypeSectionedContextView * contextView;                                      //@synthesize contextView=_contextView - In the implementation block
@property (nonatomic,retain) NSArray * sections;                                                                   //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) _HKAudiogramAnnotationViewDataSource * annotationViewDataSource;                      //@synthesize annotationViewDataSource=_annotationViewDataSource - In the implementation block
@property (assign,nonatomic) long long selectedOverlayEar;                                                         //@synthesize selectedOverlayEar=_selectedOverlayEar - In the implementation block
@property (nonatomic,retain) HKLollipopController * lollipopController;                                            //@synthesize lollipopController=_lollipopController - In the implementation block
@property (nonatomic,retain) HKAxis * yAxis;                                                                       //@synthesize yAxis=_yAxis - In the implementation block
@property (assign,nonatomic) BOOL audiogramsFetched;                                                               //@synthesize audiogramsFetched=_audiogramsFetched - In the implementation block
@property (nonatomic,retain) NSArray * audiograms;                                                                 //@synthesize audiograms=_audiograms - In the implementation block
@property (assign,nonatomic) long long currentAudiogramIndex;                                                      //@synthesize currentAudiogramIndex=_currentAudiogramIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_chartPointsFromSensitivityData:(id)arg1 leftEarSeries:(BOOL)arg2 ;
+(BOOL)testChartPointCreation:(id)arg1 leftEarSeries:(BOOL)arg2 expectedChartPoints:(id)arg3 failureMessage:(id*)arg4 ;
-(void)dealloc;
-(UIStackView *)stackView;
-(void)viewDidLoad;
-(NSArray *)sections;
-(void)setSections:(NSArray *)arg1 ;
-(void)setStackView:(UIStackView *)arg1 ;
-(HKAxis *)yAxis;
-(long long)numberOfItemsInCollection;
-(void)setYAxis:(HKAxis *)arg1 ;
-(HKUnitPreferenceController *)unitController;
-(_HKAudiogramAnnotationViewDataSource *)annotationViewDataSource;
-(void)setAnnotationViewDataSource:(_HKAudiogramAnnotationViewDataSource *)arg1 ;
-(HKSampleTypeUpdateController *)updateController;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(void)setUpdateController:(HKSampleTypeUpdateController *)arg1 ;
-(id)initWithUnitController:(id)arg1 sampleTypeUpdateController:(id)arg2 minimumAudiogramHeight:(double)arg3 ;
-(NSArray *)audiograms;
-(void)_updateAudiogramSamples:(id)arg1 error:(id)arg2 ;
-(void)setAudiograms:(NSArray *)arg1 ;
-(void)setUnitController:(HKUnitPreferenceController *)arg1 ;
-(HKDisplayTypeSectionedContextView *)contextView;
-(id)lollipopFieldColor;
-(id)lollipopAnnotationColor;
-(double)lollipopExtensionLength;
-(void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2 ;
-(id)_findNavigationController;
-(void)contextView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)contextView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(id)_buildYAxisForSensitivity;
-(id)_buildAudiogramHeader;
-(void)setAudiogramHeader:(_HKAudiogramHeader *)arg1 ;
-(void)setScalarGraphCollectionController:(HKScalarGraphCollectionViewController *)arg1 ;
-(HKScalarGraphCollectionViewController *)scalarGraphCollectionController;
-(void)_addControllerAsChildController:(id)arg1 ;
-(void)_addContextView;
-(double)minimumAudiogramHeight;
-(_HKAudiogramHeader *)audiogramHeader;
-(void)_pinView:(id)arg1 toParentGuide:(id)arg2 ;
-(id)_buildAnnotationViewDataSourceWithUnitController:(id)arg1 ;
-(void)setLollipopController:(HKLollipopController *)arg1 ;
-(void)_setupInitialUI;
-(void)_updateOverlayPillsAndHeaderWithSample:(id)arg1 ;
-(long long)currentAudiogramIndex;
-(id)_sectionsFromAudiogram:(id)arg1 ;
-(id)_averageSectionFromAudiogram:(id)arg1 ;
-(id)_buildContextItem;
-(void)_updateHeaderState;
-(id)_currentValueTitleStringFromSample:(id)arg1 ;
-(id)_currentValueValueStringFromSample:(id)arg1 ;
-(id)_numberFromSensitivity:(id)arg1 ;
-(id)_audiogramDisplayType;
-(void)_resetCurrentGraph;
-(HKLollipopController *)lollipopController;
-(void)_setupFixedFrequencyAxisForGraphView:(id)arg1 ;
-(long long)_defaultLineStyleForLeftEar:(BOOL)arg1 ;
-(long long)_secondaryLineStyleForLeftEar:(BOOL)arg1 ;
-(id)_setupSeriesForAudiogramSample:(id)arg1 leftStyle:(long long)arg2 rightStyle:(long long)arg3 ;
-(id)_indexPathForCurrentSelections;
-(id)_leftEarSensitivityForAudiogram:(id)arg1 ;
-(id)_rightEarSensitivityForAudiogram:(id)arg1 ;
-(id)_audiogramSeriesWithAudiogram:(id)arg1 forLeftEar:(BOOL)arg2 withLineStyle:(long long)arg3 legendAnnotation:(BOOL)arg4 ;
-(id)_audiogramSeriesForOverlay:(id)arg1 forLeftEar:(BOOL)arg2 ;
-(id)_audiogramPresentationStyleWithStyle:(long long)arg1 isOverlay:(BOOL)arg2 ;
-(id)_defaultLabelStyleForStyle:(long long)arg1 axis:(BOOL)arg2 ;
-(id)_localizedLegendEntryKey:(BOOL)arg1 ;
-(id)_averageLineColor;
-(id)_audiogramLineColorForStyle:(long long)arg1 ;
-(id)_audiogramPointMarkerColorForStyle:(long long)arg1 ;
-(id)_audiogramStrokeStyleWithColor:(id)arg1 dottedLines:(BOOL)arg2 ;
-(id)_audiogramLabelColorForStyle:(long long)arg1 ;
-(id)_primaryLineColor;
-(id)_secondaryLineColor;
-(id)_disabledLineColor;
-(id)_primaryAnnotationColor;
-(id)_secondaryAnnotationColor;
-(id)_primaryPointMarkerColor;
-(id)_secondaryPointMarkerColor;
-(id)_disabledPointMarkerColor;
-(id)_accessibleColorFromColor:(id)arg1 ;
-(id)headerViewForLollipop;
-(id)lollipopControllerForGraphCollectionView;
-(id)graphViewControllerForIndex:(long long)arg1 ;
-(id)graphSeriesForIndex:(long long)arg1 ;
-(void)graphCollectionView:(id)arg1 didChangeVisibleIndex:(long long)arg2 ;
-(void)queryForAudiogramsUsingHealthStore:(id)arg1 ;
-(void)setCurrentAudiogramIndex:(long long)arg1 ;
-(void)setMinimumAudiogramHeight:(double)arg1 ;
-(NSLayoutConstraint *)stackViewHeightConstraint;
-(void)setStackViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIButton *)showAllFiltersButton;
-(void)setShowAllFiltersButton:(UIButton *)arg1 ;
-(void)setContextView:(HKDisplayTypeSectionedContextView *)arg1 ;
-(long long)selectedOverlayEar;
-(void)setSelectedOverlayEar:(long long)arg1 ;
-(BOOL)audiogramsFetched;
-(void)setAudiogramsFetched:(BOOL)arg1 ;
@end

