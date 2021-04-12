/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)fileSize;
-(void)setFileType:(NSString *)arg1 ;
-(id)description;
-(void)setFileSize:(unsigned long long)arg1 ;
-(BOOL)isAppleDoubleFile;
-(void)setFileSizeIsSet:(BOOL)arg1 ;
-(void)setPathInArchive:(NSString *)arg1 ;
-(NSString *)pathToAppleDoubleRealFileCounterpart;
-(void)setIsAppleDoubleFile:(BOOL)arg1 ;
-(NSString *)pathInArchive;
-(BOOL)fileSizeIsSet;
-(void)setPathToAppleDoubleRealFileCounterpart:(NSString *)arg1 ;
-(NSString *)fileType;
@end

