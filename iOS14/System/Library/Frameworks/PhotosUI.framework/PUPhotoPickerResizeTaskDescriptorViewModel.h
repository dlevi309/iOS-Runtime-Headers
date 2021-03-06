/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXInfoProvider.h>
#import <libobjc.A.dylib/PXInfoUpdaterObserver.h>

@protocol PUPhotoPickerResizeTaskDescriptorViewModelDelegate, OS_dispatch_queue;
@class PUPhotoPickerResizeTaskDescriptor, NSString, UIMenu, PXInfoUpdater, NSObject;

@interface PUPhotoPickerResizeTaskDescriptorViewModel : PXObservable <PXInfoProvider, PXInfoUpdaterObserver> {

	BOOL _downloading;
	PUPhotoPickerResizeTaskDescriptor* _resizeTaskDescriptor;
	NSString* _localizedTitle;
	NSString* _localizedFileSizeDescription;
	UIMenu* _fileSizeMenu;
	id<PUPhotoPickerResizeTaskDescriptorViewModelDelegate> _delegate;
	PXInfoUpdater* _localizedFileSizeDescriptionUpdater;
	NSObject*<OS_dispatch_queue> _localizedFileSizeDescriptionUpdaterQueue;

}

@property (nonatomic,retain) PXInfoUpdater * localizedFileSizeDescriptionUpdater;                                 //@synthesize localizedFileSizeDescriptionUpdater=_localizedFileSizeDescriptionUpdater - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> localizedFileSizeDescriptionUpdaterQueue;               //@synthesize localizedFileSizeDescriptionUpdaterQueue=_localizedFileSizeDescriptionUpdaterQueue - In the implementation block
@property (nonatomic,readonly) PUPhotoPickerResizeTaskDescriptor * resizeTaskDescriptor;                          //@synthesize resizeTaskDescriptor=_resizeTaskDescriptor - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                                                         //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedFileSizeDescription;                                           //@synthesize localizedFileSizeDescription=_localizedFileSizeDescription - In the implementation block
@property (nonatomic,readonly) UIMenu * fileSizeMenu;                                                             //@synthesize fileSizeMenu=_fileSizeMenu - In the implementation block
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading;                                             //@synthesize downloading=_downloading - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoPickerResizeTaskDescriptorViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoUpdaterDidUpdate:(id)arg1 ;
-(NSString *)localizedTitle;
-(id)init;
-(void)setFileSizeMenu:(UIMenu *)arg1 ;
-(id<PUPhotoPickerResizeTaskDescriptorViewModelDelegate>)delegate;
-(PXInfoUpdater *)localizedFileSizeDescriptionUpdater;
-(id)_infoDictionaryForLocalizedTitle:(id)arg1 localizedFileSizeDescription:(id)arg2 ;
-(void)setLocalizedFileSizeDescriptionUpdater:(PXInfoUpdater *)arg1 ;
-(NSObject*<OS_dispatch_queue>)localizedFileSizeDescriptionUpdaterQueue;
-(void)setLocalizedFileSizeDescriptionUpdaterQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<PUPhotoPickerResizeTaskDescriptorViewModelDelegate>)arg1 ;
-(NSString *)description;
-(id)requestInfoOfKind:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(UIMenu *)fileSizeMenu;
-(BOOL)isDownloading;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setDownloading:(BOOL)arg1 ;
-(void)setResizeTaskDescriptor:(PUPhotoPickerResizeTaskDescriptor *)arg1 ;
-(void)invalidateAssetsForResizing;
-(PUPhotoPickerResizeTaskDescriptor *)resizeTaskDescriptor;
-(NSString *)localizedFileSizeDescription;
@end

