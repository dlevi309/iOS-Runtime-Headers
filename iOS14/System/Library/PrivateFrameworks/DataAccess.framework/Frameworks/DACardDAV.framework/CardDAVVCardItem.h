/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV
*/

#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>
#import <DACardDAV/DADataElement.h>

@protocol DACardDAVRecord;
@class NSURL, NSData, NSString, NSArray, NSNumber, NSMutableDictionary;

@interface CardDAVVCardItem : NSObject <CoreDAVLeafDataPayload, DADataElement> {

	id<DACardDAVRecord> _cardDAVRecordItem;

}

@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,retain) NSNumber * clientID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) id<DACardDAVRecord> cardDAVRecordItem;              //@synthesize cardDAVRecordItem=_cardDAVRecordItem - In the implementation block
@property (nonatomic,readonly) NSString * syncKey; 
@property (nonatomic,retain) NSMutableDictionary * UUIDToPersonCache; 
@property (nonatomic,readonly) NSArray * childrenOrder; 
@property (nonatomic,retain) NSURL * sourceURL; 
@property (nonatomic,retain) NSURL * destinationURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)currentImplementationClass;
+(id)itemWithABRecord:(void*)arg1 addressBook:(void*)arg2 outNeedsDBSave:(BOOL*)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6 ;
+(id)itemWithDACardDAVRecord:(id)arg1 contactStore:(id)arg2 outNeedsDBSave:(BOOL*)arg3 maxImageSize:(long long)arg4 maxResourceSize:(long long)arg5 inContainerWithURL:(id)arg6 ;
-(NSNumber *)clientID;
-(void)setClientID:(NSNumber *)arg1 ;
-(id)convertToDAContactSearchResultElement;
-(NSString *)syncKey;
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
-(NSData *)dataPayload;
-(void)setLocalItem:(void*)arg1 ;
-(BOOL)deleteFromContainer:(void*)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(BOOL)saveWithLocalObject:(void*)arg1 toContainer:(void*)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)saveServerIDToExistingItem;
-(void*)abRecord;
-(BOOL)loadLocalItemWithAccount:(id)arg1 ;
-(id<DACardDAVRecord>)cardDAVRecordItem;
-(id)createOrphanedABRecordFromParsedVCardOutRecordType:(unsigned*)arg1 ;
-(void)loadClientIDs;
-(unsigned long long)saveWithLocalObject:(id)arg1 toContainer:(id)arg2 containerURL:(id)arg3 shouldMergeProperties:(BOOL)arg4 outMergeDidChooseLocalProperties:(BOOL*)arg5 account:(id)arg6 shouldSaveGroups:(BOOL)arg7 ;
-(BOOL)saveIfGroupWithLocalObject:(id)arg1 toContainer:(id)arg2 shouldMergeProperties:(BOOL)arg3 outMergeDidChooseLocalProperties:(BOOL*)arg4 account:(id)arg5 ;
-(BOOL)deleteFromContainer:(void*)arg1 account:(id)arg2 ;
-(NSMutableDictionary *)UUIDToPersonCache;
-(void)setUUIDToPersonCache:(NSMutableDictionary *)arg1 ;
-(unsigned)abRecordType;
@end

