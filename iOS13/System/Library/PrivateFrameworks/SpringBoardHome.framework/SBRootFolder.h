/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SBFolder.h>

@protocol SBRootFolderDelegate;
@class SBHIconModel, SBIconListModel;

@interface SBRootFolder : SBFolder {

	id<SBRootFolderDelegate> _delegate;
	SBHIconModel* _model;

}

@property (setter=_setDock:,nonatomic,retain) SBIconListModel * dock; 
@property (assign,nonatomic,__weak) id<SBRootFolderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SBHIconModel * model;                           //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) BOOL supportsDock; 
+(BOOL)isRootFolderClass;
-(id<SBRootFolderDelegate>)delegate;
-(void)setDelegate:(id<SBRootFolderDelegate>)arg1 ;
-(id)icons;
-(SBHIconModel *)model;
-(void)setModel:(SBHIconModel *)arg1 ;
-(SBIconListModel *)dock;
-(id)nodeIdentifier;
-(BOOL)isRootFolder;
-(BOOL)supportsDock;
-(BOOL)isIconAtIndexPathInDock:(id)arg1 includingDockFolders:(BOOL)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(id)indexPathForFirstFreeSlotStartingAtList:(id)arg1 avoidingFirstList:(BOOL)arg2 ;
-(BOOL)canAddIconCount:(unsigned long long)arg1 startingAtList:(id)arg2 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(BOOL)canRemoveIcons;
-(BOOL)canEditDisplayName;
-(id)_listsForCompaction;
-(void)_setDock:(id)arg1 ;
-(BOOL)isIconAtIndexPathInDock:(id)arg1 ;
-(BOOL)canBounceIcon:(id)arg1 ;
@end

