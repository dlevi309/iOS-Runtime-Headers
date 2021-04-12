/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSMutableOrderedSet;


@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@required
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;
-(NSMutableOrderedSet *)userEditableAssets;

@end

