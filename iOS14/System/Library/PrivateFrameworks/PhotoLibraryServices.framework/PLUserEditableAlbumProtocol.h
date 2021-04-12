/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSMutableOrderedSet;


@protocol PLUserEditableAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@required
-(NSMutableOrderedSet *)userEditableAssets;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 customExportsInfo:(id)arg3 trimmedVideoPathInfo:(id)arg4 commentText:(id)arg5;

@end

