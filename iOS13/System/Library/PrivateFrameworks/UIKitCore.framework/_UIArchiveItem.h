/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSString;

@interface _UIArchiveItem : NSObject {

	BOOL _fileSizeIsSet;
	BOOL _isAppleDoubleFile;
	NSString* _pathInArchive;
	NSString* _fileType;
	unsigned long long _fileSize;
	NSString* _pathToAppleDoubleRealFileCounterpart;

}

@property (nonatomic,retain) NSString * pathInArchive;                                     //@synthesize pathInArchive=_pathInArchive - In the implementation block
@property (nonatomic,retain) NSString * fileType;                                          //@synthesize fileType=_fileType - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                                  //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) BOOL fileSizeIsSet;                                           //@synthesize fileSizeIsSet=_fileSizeIsSet - In the implementation block
@property (assign,nonatomic) BOOL isAppleDoubleFile;                                       //@synthesize isAppleDoubleFile=_isAppleDoubleFile - In the implementation block
@property (nonatomic,retain) NSString * pathToAppleDoubleRealFileCounterpart;              //@synthesize pathToAppleDoubleRealFileCounterpart=_pathToAppleDoubleRealFileCounterpart - In the implementation block
-(id)description;
-(unsigned long long)fileSize;
-(NSString *)fileType;
-(void)setFileType:(NSString *)arg1 ;
-(NSString *)pathInArchive;
-(NSString *)pathToAppleDoubleRealFileCounterpart;
-(void)setFileSizeIsSet:(BOOL)arg1 ;
-(BOOL)fileSizeIsSet;
-(void)setPathInArchive:(NSString *)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(BOOL)isAppleDoubleFile;
-(void)setPathToAppleDoubleRealFileCounterpart:(NSString *)arg1 ;
-(void)setIsAppleDoubleFile:(BOOL)arg1 ;
@end

