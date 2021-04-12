/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSMutableDictionary, MFFileArchiveEntry, NSURL, NSData, NSError;

@interface MFFileArchiveDirectory : NSObject {

	NSMutableDictionary* _entries;
	NSMutableDictionary* _scrubbedEntries;
	MFFileArchiveEntry* _mainEntry;
	NSURL* _url;
	NSData* _contents;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * contents;                     //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)archiveDirectory;
+(NSRange)rangeOfCentralDirectoryInData:(id)arg1 ;
+(NSRange)_rangeOfCentralDirectory:(long long)arg1 ;
+(CentralDirectory*)_centralDirectory:(id)arg1 ;
+(id)_entriesFromCentralDictionary:(CentralDirectory*)arg1 inData:(id)arg2 archiveData:(id)arg3 ;
+(CentralHeader*)_centralHeader:(id)arg1 ;
+(BOOL)_hasZipSignature:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(NSData *)contents;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setContents:(NSData *)arg1 ;
-(BOOL)inputWithURL:(id)arg1 ;
-(BOOL)setArchiveEntry:(id)arg1 ;
-(id)archiveEntries;
-(BOOL)inputWithData:(id)arg1 ;
-(void)_scrubContentDirectory;
-(id)mainEntry;
-(void)setMainEntry:(id)arg1 ;
-(id)scrubbedArchiveEntries;
@end

