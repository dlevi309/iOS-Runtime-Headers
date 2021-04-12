/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned long long)precedenceLevel;
-(id)init;
-(id)description;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)cachedValueForKey:(id)arg1 ;
-(BOOL)isPlaceholder;
-(void)download;
-(MFMessageFileWrapper *)fileWrapper;
-(void)setFileWrapper:(MFMessageFileWrapper *)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(BOOL)hasBeenDownloaded;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)mimePart;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(id)initWithWrapper:(id)arg1 ;
-(void)setMimePart:(id)arg1 ;
-(unsigned)approximateSize;
-(BOOL)needsRedownload;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(id)persistentUniqueIdentifier;
-(id)textEncodingGuess;
@end

