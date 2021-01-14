/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PUPhotosGridViewSupplementalToolbarProvider.h>

@protocol PUPhotosGridViewSupplementalToolbarDataSource, PUPhotoPickerFileSizeToolbarProviderDelegate;
@class NSArray, UIBarButtonItem, UILabel, UITableViewController, NSSet, PUPhotoPickerResizeTaskDescriptor, NSMutableDictionary, NSString;

@interface PUPhotoPickerFileSizeToolbarProvider : NSObject <UITableViewDataSource, UITableViewDelegate, PUPhotosGridViewSupplementalToolbarProvider> {

	id<PUPhotosGridViewSupplementalToolbarDataSource> _dataSource;
	UIBarButtonItem* _sizePickerItem;
	UILabel* _sizePickerDescriptionLabel;
	UITableViewController* _sizePickerViewController;
	BOOL _preparingToPresentSizePickerViewController;
	NSArray* _toolbarItems;
	NSArray* _resizeTaskDescriptors;
	NSSet* _cachedAssetSet;
	PUPhotoPickerResizeTaskDescriptor* _selectedTaskDescriptor;
	NSMutableDictionary* _taskDescriptorsToCachedLabels;
	id<PUPhotoPickerFileSizeToolbarProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PUPhotoPickerFileSizeToolbarProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowToolbar; 
@property (nonatomic,copy,readonly) NSArray * toolbarItems; 
-(BOOL)shouldShowToolbar;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSArray *)toolbarItems;
-(id<PUPhotoPickerFileSizeToolbarProviderDelegate>)delegate;
-(id)initWithDataSource:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)_sizePickerItem;
-(id)_orderedResizeTaskDescriptors;
-(id)_orderedResizeTaskDescriptorsForCurrentlySelectedAssets;
-(void)_presentSizePicker:(id)arg1 ;
-(id)_localizedLabelForResizeTaskDescriptor:(id)arg1 ;
-(void)_updateSizePickerItemIfNeeded;
-(void)_updateTableViewSelection;
-(id)_computeSelectedIndexPath;
-(void)setDelegate:(id<PUPhotoPickerFileSizeToolbarProviderDelegate>)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

