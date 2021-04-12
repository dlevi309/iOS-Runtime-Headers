/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addFile:(id)arg1 ;
-(id)init;
-(NSMutableArray *)files;
-(BOOL)isLeaf;
-(NSMutableArray *)folders;
-(void)addFiles:(id)arg1 ;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFolders:(id)arg1 ;
-(void)addFolder:(id)arg1 ;
-(void)setIsLeaf:(BOOL)arg1 ;
-(void)setFiles:(NSMutableArray *)arg1 ;
@end

