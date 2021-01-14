/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/


@class NSMutableDictionary, MFMessageFileWrapper;

@interface MFMessageTextAttachment : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) MFMessageFileWrapper * fileWrapper; 
+(unsigned long long)precedenceLevel;
-(void)download;
-(id)cachedValueForKey:(id)arg1 ;
-(BOOL)isPlaceholder;
-(id)init;
-(void)setFileWrapper:(MFMessageFileWrapper *)arg1 ;
-(id)mimePart;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasBeenDownloaded;
-(BOOL)shouldDownloadAttachmentOnDisplay;
-(id)textEncodingNameForData:(id)arg1 mimeType:(id)arg2 ;
-(MFMessageFileWrapper *)fileWrapper;
-(void)setCachedValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithWrapper:(id)arg1 ;
-(void)setMimePart:(id)arg1 ;
-(unsigned)approximateSize;
-(BOOL)needsRedownload;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(id)persistentUniqueIdentifier;
-(id)textEncodingGuess;
@end

