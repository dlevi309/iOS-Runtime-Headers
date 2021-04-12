/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, MFMessageStoreObjectCache, NSString;

@interface MFMessageStore : NSObject <NSCopying> {

	NSMutableSet* _uniqueStrings;
	MFMessageStoreObjectCache* _objectCache;

}

@property (nonatomic,retain,readonly) MFMessageStoreObjectCache * objectCache;              //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,copy) NSString * storagePath; 
+(id)log;
+(Class)classForMimePart;
+(Class)headersClass;
+(void)setDefaultMessageHeadersClass:(Class)arg1 ;
-(id)init;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 ;
-(MFMessageStoreObjectCache *)objectCache;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(void)_flushAllMessageData;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setStoragePath:(NSString *)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(NSString *)storagePath;
-(id)decryptedTopLevelPartForPart:(id)arg1 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(id)_downloadHeadersForMessages:(id)arg1 ;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(void)setMessageClass:(Class)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)newObjectCache;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)uniquedString:(id)arg1 ;
-(void)_flushAllCaches;
-(id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
@end

