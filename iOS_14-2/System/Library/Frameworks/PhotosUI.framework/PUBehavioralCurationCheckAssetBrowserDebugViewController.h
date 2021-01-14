/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUPhotosAlbumViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSPredicate, NSString, UIPickerView;

@interface PUBehavioralCurationCheckAssetBrowserDebugViewController : PUPhotosAlbumViewController <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSPredicate* _predicate;
	NSString* _selectionName;
	BOOL _sortAscending;
	UIPickerView* _scorePickerView;
	UIPickerView* _sortPickerView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldShowToolbar;
-(id)newToolbarItems;
-(void)_editSettings:(id)arg1 ;
-(void)_doneEditingSettings:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)selectionNames;
-(id)_goldAssetUUIDs;
-(id)predicateForSelectionName:(id)arg1 ;
-(id)sortDescriptorForSelectionName:(id)arg1 ;
-(id)phScoreKeyPathsForSelectionName:(id)arg1 ;
-(double)semanticScoreFromBehavioralScore:(double)arg1 ;
-(void)_update;
@end

