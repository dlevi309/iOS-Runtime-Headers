/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
@end

