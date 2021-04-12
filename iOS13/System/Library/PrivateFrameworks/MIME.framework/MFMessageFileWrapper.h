/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSString, NSData, NSMutableDictionary;

@interface MFMessageFileWrapper : NSObject {

	NSString* _path;
	NSString* _filename;
	NSString* _preferredFilename;
	NSData* _data;
	NSMutableDictionary* _attributes;
	NSString* _linkDestination;
	NSString* _url;
	int _type;

}

@property (nonatomic,copy) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)supportedArchivedClassNames;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(unsigned long long)fileSize;
-(BOOL)isDirectory;
-(id)fileAttributes;
-(void)setURL:(id)arg1 ;
-(id)URL;
-(void)setPath:(NSString *)arg1 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(id)preferredFilename;
-(void)setPreferredFilename:(id)arg1 ;
-(id)fileWrappers;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(void)setFileAttributes:(id)arg1 ;
-(id)filename;
-(id)regularFileContents;
-(void)setFilename:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)mimeType;
-(void)setMimeType:(id)arg1 ;
-(unsigned)creator;
-(void)setCreator:(unsigned)arg1 ;
-(id)messageID;
-(void)setMessageID:(id)arg1 ;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)meetingStorePersistentID;
-(BOOL)isImageFile;
-(id)symbolicLinkDestination;
-(id)icsRepresentation;
-(BOOL)isPDFFile;
-(void)setMeetingStorePersistentID:(id)arg1 ;
-(id)inferredMimeType;
-(void)setFileProtection:(id)arg1 ;
-(id)fileProtection;
-(id)eventUniqueID;
-(void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(unsigned short)finderFlags;
-(void)setEventUniqueID:(id)arg1 ;
-(void)setICSRepresentation:(id)arg1 ;
-(BOOL)isUnzippableFile;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
@end

