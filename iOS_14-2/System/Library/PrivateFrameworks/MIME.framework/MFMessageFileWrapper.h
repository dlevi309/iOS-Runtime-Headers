/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)mimeType;
-(BOOL)isPlaceholder;
-(void)setMessageID:(id)arg1 ;
-(BOOL)isRegularFile;
-(BOOL)isSymbolicLink;
-(id)initWithPath:(id)arg1 ;
-(id)filename;
-(void)setURL:(id)arg1 ;
-(unsigned long long)fileSize;
-(id)fileProtection;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)setType:(unsigned)arg1 ;
-(void)setMimeType:(id)arg1 ;
-(unsigned)creator;
-(id)fileWrappers;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)initRegularFileWithContents:(id)arg1 ;
-(id)description;
-(void)setFilename:(id)arg1 ;
-(BOOL)isImageFile;
-(id)symbolicLinkDestination;
-(id)preferredFilename;
-(id)icsRepresentation;
-(BOOL)isPDFFile;
-(void)setMeetingStorePersistentID:(id)arg1 ;
-(id)inferredMimeType;
-(void)setPreferredFilename:(id)arg1 ;
-(unsigned)type;
-(id)URL;
-(id)regularFileContents;
-(void)setCreator:(unsigned)arg1 ;
-(void)setFileAttributes:(id)arg1 ;
-(void)setFileProtection:(id)arg1 ;
-(BOOL)isDirectory;
-(id)meetingStorePersistentID;
-(id)messageID;
-(void)dealloc;
-(id)fileAttributes;
-(id)eventUniqueID;
-(void)_isImage:(BOOL*)arg1 orPDFFile:(BOOL*)arg2 ;
-(void)setFinderFlags:(unsigned short)arg1 ;
-(unsigned short)finderFlags;
-(void)setEventUniqueID:(id)arg1 ;
-(void)setICSRepresentation:(id)arg1 ;
-(BOOL)isUnzippableFile;
-(id)initSymbolicLinkWithDestination:(id)arg1 ;
@end

