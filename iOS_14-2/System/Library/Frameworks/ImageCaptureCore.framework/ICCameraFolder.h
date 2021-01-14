/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
*/

#import <ImageCaptureCore/ImageCaptureCore-Structs.h>
#import <ImageCaptureCore/ICCameraItem.h>

@class NSMutableArray, NSArray;

@interface ICCameraFolder : ICCameraItem {

	NSMutableArray* _files;
	NSMutableArray* _folders;
	os_unfair_lock_s _filesLock;
	os_unfair_lock_s _foldersLock;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (nonatomic,readonly) NSArray * contents; 
-(NSArray *)contents;
-(void)addFile:(id)arg1 ;
-(CGImageRef)thumbnail;
-(NSMutableArray *)files;
-(void)deleteFile:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)hasThumbnail;
-(void)deleteFolder:(id)arg1 ;
-(NSMutableArray *)folders;
-(id)description;
-(BOOL)containsItem:(id)arg1 ;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(id)metadata;
-(void)addFolder:(id)arg1 ;
-(void)dealloc;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(void)deleteItem:(id)arg1 ;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)requestThumbnail;
-(void)requestMetadata;
-(void)lockFiles;
-(void)unlockFiles;
-(void)lockFolders;
-(void)unlockFolders;
@end

