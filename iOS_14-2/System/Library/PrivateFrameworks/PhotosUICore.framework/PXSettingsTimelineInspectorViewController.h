/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/PXDiagnosticsEnvironment.h>

@class NSDate, NSArray, PXTimelineEntry, UIImageView, UITextView, UILabel, UISlider, UISwitch, NSMutableDictionary, NSString;

@interface PXSettingsTimelineInspectorViewController : UIViewController <UINavigationControllerDelegate, PXDiagnosticsEnvironment> {

	BOOL _showFilteredContent;
	NSDate* _currentTime;
	NSArray* _timeline;
	NSArray* _filteredContent;
	PXTimelineEntry* _entryInDisplay;
	UIImageView* _imageView;
	UITextView* _entryInfoTextView;
	UILabel* _sliderValueLabel;
	UISlider* _timeSlider;
	UILabel* _showFilteredContentLabel;
	UISwitch* _showFilteredContentSwitch;
	NSMutableDictionary* _assetByAssetLocalIdentifier;
	CGSize _widgetSize;

}

@property (nonatomic,retain) NSDate * currentTime;                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSArray * timeline;                                             //@synthesize timeline=_timeline - In the implementation block
@property (nonatomic,retain) NSArray * filteredContent;                                      //@synthesize filteredContent=_filteredContent - In the implementation block
@property (nonatomic,retain) PXTimelineEntry * entryInDisplay;                               //@synthesize entryInDisplay=_entryInDisplay - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UITextView * entryInfoTextView;                                 //@synthesize entryInfoTextView=_entryInfoTextView - In the implementation block
@property (nonatomic,retain) UILabel * sliderValueLabel;                                     //@synthesize sliderValueLabel=_sliderValueLabel - In the implementation block
@property (nonatomic,retain) UISlider * timeSlider;                                          //@synthesize timeSlider=_timeSlider - In the implementation block
@property (nonatomic,retain) UILabel * showFilteredContentLabel;                             //@synthesize showFilteredContentLabel=_showFilteredContentLabel - In the implementation block
@property (nonatomic,retain) UISwitch * showFilteredContentSwitch;                           //@synthesize showFilteredContentSwitch=_showFilteredContentSwitch - In the implementation block
@property (assign,nonatomic) BOOL showFilteredContent;                                       //@synthesize showFilteredContent=_showFilteredContent - In the implementation block
@property (assign,nonatomic) CGSize widgetSize;                                              //@synthesize widgetSize=_widgetSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetByAssetLocalIdentifier;              //@synthesize assetByAssetLocalIdentifier=_assetByAssetLocalIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImageView:(UIImageView *)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)px_diagnosticsItemProvidersForPoint:(CGPoint)arg1 inCoordinateSpace:(id)arg2 ;
-(UIImageView *)imageView;
-(UISlider *)timeSlider;
-(PXTimelineEntry *)entryInDisplay;
-(id)initWithWidgetSize:(CGSize)arg1 ;
-(id)filteredContentInPhotoLibrary:(id)arg1 ;
-(void)displayTimelineEntry:(id)arg1 ;
-(CGRect)strokeRectFromCropRect:(CGRect)arg1 originalImageRect:(CGRect)arg2 targetImageRect:(CGRect)arg3 ;
-(void)displaySliderTime:(id)arg1 ;
-(void)displayFilteredContentIndex:(unsigned long long)arg1 ;
-(void)switchValueChanged:(id)arg1 ;
-(UILabel *)sliderValueLabel;
-(void)setEntryInDisplay:(PXTimelineEntry *)arg1 ;
-(UITextView *)entryInfoTextView;
-(void)setEntryInfoTextView:(UITextView *)arg1 ;
-(void)setSliderValueLabel:(UILabel *)arg1 ;
-(void)setTimeSlider:(UISlider *)arg1 ;
-(UILabel *)showFilteredContentLabel;
-(void)setShowFilteredContentLabel:(UILabel *)arg1 ;
-(UISwitch *)showFilteredContentSwitch;
-(void)setShowFilteredContentSwitch:(UISwitch *)arg1 ;
-(BOOL)showFilteredContent;
-(void)setShowFilteredContent:(BOOL)arg1 ;
-(NSMutableDictionary *)assetByAssetLocalIdentifier;
-(void)setAssetByAssetLocalIdentifier:(NSMutableDictionary *)arg1 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)setCurrentTime:(NSDate *)arg1 ;
-(CGSize)widgetSize;
-(void)setTimeline:(NSArray *)arg1 ;
-(NSDate *)currentTime;
-(void)viewDidLoad;
-(void)sliderValueChanged:(id)arg1 ;
-(NSArray *)timeline;
-(void)handleTap:(id)arg1 ;
-(void)setWidgetSize:(CGSize)arg1 ;
-(NSArray *)filteredContent;
-(void)setFilteredContent:(NSArray *)arg1 ;
@end

