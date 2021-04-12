/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSFileManager;

@interface HMDDeviceFileManager : NSObject {

	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
-(id)init;
-(BOOL)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeItemAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)fileExistsAtPath:(id)arg1 isDirectory:(BOOL*)arg2 ;
-(BOOL)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3 ;
-(BOOL)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(NSFileManager *)fileManager;
@end

