/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSURL, NSArray;

@interface PLFilesystemDeletionInfo : NSObject {

	NSString* _directory;
	NSString* _filename;
	NSURL* _objectIDURI;
	NSArray* _fileURLs;
	unsigned long long _thumbnailIndex;
	NSString* _thumbnailIdentifier;
	NSString* _uuid;
	unsigned long long _timestamp;

}

@property (retain) NSArray * fileURLs;                               //@synthesize fileURLs=_fileURLs - In the implementation block
@property (retain) NSString * thumbnailIdentifier;                   //@synthesize thumbnailIdentifier=_thumbnailIdentifier - In the implementation block
@property (readonly) NSURL * objectIDURI;                            //@synthesize objectIDURI=_objectIDURI - In the implementation block
@property (readonly) unsigned long long thumbnailIndex;              //@synthesize thumbnailIndex=_thumbnailIndex - In the implementation block
@property (readonly) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) NSString * directory;                           //@synthesize directory=_directory - In the implementation block
@property (readonly) NSString * filename;                            //@synthesize filename=_filename - In the implementation block
+(id)deletionInfoWithAsset:(id)arg1 ;
-(id)description;
-(NSString *)directory;
-(NSString *)uuid;
-(unsigned long long)timestamp;
-(NSString *)filename;
-(NSString *)thumbnailIdentifier;
-(unsigned long long)thumbnailIndex;
-(id)initWithObjectIDURI:(id)arg1 directory:(id)arg2 filename:(id)arg3 fileURLs:(id)arg4 thumbnailIndex:(unsigned long long)arg5 thumbnailIdentifier:(id)arg6 uuid:(id)arg7 timestamp:(unsigned long long)arg8 ;
-(NSURL *)objectIDURI;
-(NSArray *)fileURLs;
-(void)setFileURLs:(NSArray *)arg1 ;
-(void)setThumbnailIdentifier:(NSString *)arg1 ;
@end

