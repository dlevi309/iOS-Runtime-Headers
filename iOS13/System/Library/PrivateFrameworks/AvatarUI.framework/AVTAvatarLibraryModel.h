/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarEditorViewControllerDelegate.h>

@protocol AVTAvatarLibraryModelDelegate, AVTAvatarStoreInternal;
@class AVTViewSessionProvider, AVTUIEnvironment, AVTAvatarLibraryCreateNewItem, NSMutableArray, NSArray, NSString;

@interface AVTAvatarLibraryModel : NSObject <AVTAvatarEditorViewControllerDelegate> {

	BOOL _isCreatingAvatar;
	id<AVTAvatarLibraryModelDelegate> _delegate;
	id<AVTAvatarStoreInternal> _avatarStore;
	AVTViewSessionProvider* _viewSessionProvider;
	AVTUIEnvironment* _environment;
	AVTAvatarLibraryCreateNewItem* _createNewItem;
	NSMutableArray* _mutableLibraryItems;

}

@property (nonatomic,readonly) id<AVTAvatarStoreInternal> avatarStore;                       //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,readonly) AVTViewSessionProvider * viewSessionProvider;                 //@synthesize viewSessionProvider=_viewSessionProvider - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                               //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) AVTAvatarLibraryCreateNewItem * createNewItem;                //@synthesize createNewItem=_createNewItem - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableLibraryItems;                         //@synthesize mutableLibraryItems=_mutableLibraryItems - In the implementation block
@property (assign,nonatomic) BOOL isCreatingAvatar;                                          //@synthesize isCreatingAvatar=_isCreatingAvatar - In the implementation block
@property (assign,nonatomic,__weak) id<AVTAvatarLibraryModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * libraryItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)load;
-(id<AVTAvatarLibraryModelDelegate>)delegate;
-(void)setDelegate:(id<AVTAvatarLibraryModelDelegate>)arg1 ;
-(AVTUIEnvironment *)environment;
-(NSArray *)libraryItems;
-(id<AVTAvatarStoreInternal>)avatarStore;
-(void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2 ;
-(void)avatarEditorViewControllerDidCancel:(id)arg1 ;
-(unsigned long long)numberOfRecords;
-(void)storeDidChangeNotification:(id)arg1 ;
-(NSMutableArray *)mutableLibraryItems;
-(void)reloadDataForRecords:(id)arg1 ;
-(void)presentActionSheetForRecordItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(AVTViewSessionProvider *)viewSessionProvider;
-(void)presentEditor:(id)arg1 forCreating:(BOOL)arg2 ;
-(void)setIsCreatingAvatar:(BOOL)arg1 ;
-(void)presetShareSheetWithRecords:(id)arg1 fromItem:(id)arg2 ;
-(void)insertItemForRecord:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeItemForRecordAtIndex:(unsigned long long)arg1 ;
-(AVTAvatarLibraryCreateNewItem *)createNewItem;
-(id)libraryItemsFromAvatarRecords:(id)arg1 ;
-(long long)indexForRecord:(id)arg1 ;
-(BOOL)isCreatingAvatar;
-(void)updateForCreatedRecord:(id)arg1 ;
-(void)updateForEditedRecord:(id)arg1 ;
-(id)initWithAvatarStore:(id)arg1 avtViewSessionProvider:(id)arg2 environment:(id)arg3 ;
-(void)performActionOnItemAtIndex:(unsigned long long)arg1 ;
@end

