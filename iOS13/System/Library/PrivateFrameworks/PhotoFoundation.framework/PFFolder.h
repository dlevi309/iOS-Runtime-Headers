/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
*/

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile {

	BOOL _isLeaf;
	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (assign,nonatomic) BOOL isLeaf;                           //@synthesize isLeaf=_isLeaf - In the implementation block
-(id)init;
-(void)addFile:(id)arg1 ;
-(BOOL)isLeaf;
-(void)setIsLeaf:(BOOL)arg1 ;
-(void)addFiles:(id)arg1 ;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFolders:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)folders;
@end

