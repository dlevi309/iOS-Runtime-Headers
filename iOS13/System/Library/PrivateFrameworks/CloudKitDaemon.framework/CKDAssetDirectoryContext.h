/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSString;

@interface CKDAssetDirectoryContext : NSObject {

	NSString* _mmcsWorkingDirectory;
	NSString* _assetDbPath;
	NSString* _fileStagingPath;
	NSString* _fileDownloadPath;

}

@property (nonatomic,retain) NSString * mmcsWorkingDirectory;              //@synthesize mmcsWorkingDirectory=_mmcsWorkingDirectory - In the implementation block
@property (nonatomic,retain) NSString * assetDbPath;                       //@synthesize assetDbPath=_assetDbPath - In the implementation block
@property (nonatomic,retain) NSString * fileStagingPath;                   //@synthesize fileStagingPath=_fileStagingPath - In the implementation block
@property (nonatomic,retain) NSString * fileDownloadPath;                  //@synthesize fileDownloadPath=_fileDownloadPath - In the implementation block
-(NSString *)fileDownloadPath;
-(void)setMmcsWorkingDirectory:(NSString *)arg1 ;
-(void)setAssetDbPath:(NSString *)arg1 ;
-(void)setFileStagingPath:(NSString *)arg1 ;
-(void)setFileDownloadPath:(NSString *)arg1 ;
-(NSString *)mmcsWorkingDirectory;
-(NSString *)assetDbPath;
-(NSString *)fileStagingPath;
@end

