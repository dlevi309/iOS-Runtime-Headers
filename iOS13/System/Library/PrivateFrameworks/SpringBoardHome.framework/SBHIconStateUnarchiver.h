/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class SBHIconModel;

@interface SBHIconStateUnarchiver : NSObject {

	BOOL _removesEmptyFolders;
	id _archive;
	SBHIconModel* _iconSource;

}

@property (nonatomic,readonly) id archive;                             //@synthesize archive=_archive - In the implementation block
@property (nonatomic,readonly) SBHIconModel * iconSource;              //@synthesize iconSource=_iconSource - In the implementation block
@property (assign,nonatomic) BOOL removesEmptyFolders;                 //@synthesize removesEmptyFolders=_removesEmptyFolders - In the implementation block
+(void)_getFolderDisplayName:(id*)arg1 defaultDisplayName:(id*)arg2 forRepresentation:(id)arg3 iconSource:(id)arg4 ;
-(id)archive;
-(id)initWithArchive:(id)arg1 iconSource:(id)arg2 ;
-(void)setRemovesEmptyFolders:(BOOL)arg1 ;
-(id)unarchive;
-(SBHIconModel *)iconSource;
-(id)_nodeFromRepresentation:(id)arg1 context:(id)arg2 ;
-(id)_folderFromRepresentation:(id)arg1 withContext:(id)arg2 ;
-(id)_listFromRepresentation:(id)arg1 withMaxIconCount:(unsigned long long)arg2 identifier:(id)arg3 context:(id)arg4 overflow:(id)arg5 ;
-(id)_iconFromRepresentation:(id)arg1 withContext:(id)arg2 ;
-(BOOL)removesEmptyFolders;
-(id)_newFolderIconForFolder:(id)arg1 ;
-(Class)_folderClassForFolderType:(id)arg1 context:(id)arg2 ;
-(void)_getFolderDisplayName:(id*)arg1 defaultDisplayName:(id*)arg2 forRepresentation:(id)arg3 ;
@end

