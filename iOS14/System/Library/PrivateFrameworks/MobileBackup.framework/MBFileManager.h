/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@interface MBFileManager : NSObject
+(id)defaultManager;
-(BOOL)fileExistsAtPath:(id)arg1 ;
-(BOOL)copyPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)movePath:(id)arg1 toPath:(id)arg2 ;
-(id)fileAttributesAtPath:(id)arg1 traverseLink:(BOOL)arg2 ;
-(BOOL)createDirectoryAtPath:(id)arg1 attributes:(id)arg2 ;
-(id)directoryContentsAtPath:(id)arg1 ;
-(BOOL)removeFileAtPath:(id)arg1 ;
@end

