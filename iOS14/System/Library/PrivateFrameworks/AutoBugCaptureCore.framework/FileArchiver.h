/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
@interface FileArchiver : NSObject {

	archiveRef _archive;

}
+(id)archiveWithPaths:(id)arg1 destinationDir:(id)arg2 deleteSource:(BOOL)arg3 ;
+(id)matchFilesInDirectory:(id)arg1 filenamePredicate:(id)arg2 newerThan:(id)arg3 allowDirectories:(BOOL)arg4 ;
+(id)archiveWithPath:(id)arg1 ;
+(id)archiveWithPath:(id)arg1 destinationDir:(id)arg2 nameMatches:(id)arg3 maxAge:(double)arg4 allowDirectories:(BOOL)arg5 ;
-(int)closeArchive;
-(id)initWithPath:(id)arg1 shouldCompress:(BOOL)arg2 ;
-(void)moveDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addFileToArchive:(id)arg1 withFileName:(id)arg2 ;
@end

