/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSString, NSDictionary, UIPickerView;

@interface PUCurationClassificationSignalAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSString* _signalName;
	double _operatingPoint;
	double _highPrecisionOperatingPoint;
	double _highRecallOperatingPoint;
	NSDictionary* _signalConfidenceByAssetUUID;
	double _minimumValue;
	double _maximumValue;
	BOOL _sortsAscending;
	BOOL _showsVideos;
	UIPickerView* _sortPickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldShowToolbar;
-(id)newToolbarItems;
-(void)getTitle:(out id*)arg1 prompt:(out id*)arg2 shouldHideBackButton:(out BOOL*)arg3 leftBarButtonItems:(out id*)arg4 rightBarButtonItems:(out id*)arg5 ;
-(void)_editSettings:(id)arg1 ;
-(void)_setMinimum:(id)arg1 ;
-(void)_setMaximum:(id)arg1 ;
-(void)_setShowsVideos:(id)arg1 ;
-(void)_doneEditingSettings:(id)arg1 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg1 ;
-(void)setSignalConfidenceByAssetUUID:(id)arg1 withSignalName:(id)arg2 operatingPoint:(double)arg3 highPrecisionOperatingPoint:(double)arg4 highRecallOperatingPoint:(double)arg5 ;
-(BOOL)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2 ;
-(id)_cloneAsset:(id)arg1 toDirectory:(id)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(void)_update;
-(void)_presentTapToRadar;
@end

