/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class NSMutableArray;

@interface SBIconStateFolderPath : NSObject {

	NSMutableArray* _folderNames;
	NSMutableArray* _folderDefaultNames;
	NSMutableArray* _folderPaths;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(void)enumerateFoldersUsingBlock:(/*^block*/id)arg1 ;
-(void)addFolderWithName:(id)arg1 defaultName:(id)arg2 indexPath:(id)arg3 ;
-(id)folderDefaultNameAtIndex:(unsigned long long)arg1 ;
-(id)folderIndexPathAtIndex:(unsigned long long)arg1 ;
-(id)folderNameAtIndex:(unsigned long long)arg1 ;
@end

