/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@protocol SBHIconModelDelegate <NSObject>
@optional
-(void)willUnarchiveIconModel:(id)arg1 withMetadata:(id)arg2;
-(BOOL)canSaveIconState:(id)arg1;
-(void)didSaveIconState:(id)arg1;
-(void)didDeleteIconState:(id)arg1;
-(id)defaultIconStateForIconModel:(id)arg1;
-(id)firstPageLeafIdentifiersForIconModel:(id)arg1;
-(BOOL)iconModel:(id)arg1 shouldAvoidPlacingIconOnFirstPage:(id)arg2;
-(void)iconModel:(id)arg1 willRemoveIcon:(id)arg2;

@required
-(unsigned long long)maxListCountForFoldersForIconModel:(id)arg1;
-(unsigned long long)iconModel:(id)arg1 maxIconCountForListInFolderClass:(Class)arg2;
-(unsigned long long)maxIconCountForDockForIconModel:(id)arg1;
-(unsigned long long)iconModel:(id)arg1 maxRowCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
-(unsigned long long)iconModel:(id)arg1 maxColumnCountForListInRootFolderWithInterfaceOrientation:(long long)arg2;
-(BOOL)supportsDockForIconModel:(id)arg1;
-(id)iconModel:(id)arg1 customInsertionIndexPathForIcon:(id)arg2 inRootFolder:(id)arg3;
-(void)iconModel:(id)arg1 launchIcon:(id)arg2 fromLocation:(id)arg3 context:(id)arg4;
-(id)iconModel:(id)arg1 localizedFolderNameForDefaultDisplayName:(id)arg2;

@end

