/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDIndexableItem.h>

@protocol EDIndexableMessage;
@class CSSearchableItem, NSString, NSData, NSDate;

@interface EDSearchableIndexItem : NSObject <EFLoggable, EDIndexableItem> {

	CSSearchableItem* _searchableItem;
	BOOL _isEncrypted;
	BOOL _includeEncryptedBody;
	BOOL _fetchBody;
	BOOL _hasCompleteData;
	NSString* _identifier;
	long long _indexingType;
	unsigned long long _itemInstantiationTime;
	id<EDIndexableMessage> _message;
	NSData* _bodyData;

}

@property (nonatomic,readonly) id<EDIndexableMessage> message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSData * bodyData;                                       //@synthesize bodyData=_bodyData - In the implementation block
@property (assign,nonatomic) BOOL isEncrypted;                                        //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign,nonatomic) BOOL includeEncryptedBody;                               //@synthesize includeEncryptedBody=_includeEncryptedBody - In the implementation block
@property (nonatomic,readonly) BOOL fetchBody;                                        //@synthesize fetchBody=_fetchBody - In the implementation block
@property (nonatomic,readonly) BOOL shouldExcludeFromIndex; 
@property (assign,nonatomic) BOOL hasCompleteData;                                    //@synthesize hasCompleteData=_hasCompleteData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType;                                  //@synthesize indexingType=_indexingType - In the implementation block
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime;              //@synthesize itemInstantiationTime=_itemInstantiationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData; 
@property (nonatomic,readonly) BOOL alwaysMarkAsIndexed; 
@property (nonatomic,readonly) BOOL requiresPreprocessing; 
+(id)log;
+(id)itemWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3 ;
+(long long)indexingPriorityByIndexingType:(long long)arg1 ;
+(id)accountIdentifierForMessage:(id)arg1 ;
+(id)domainIdentifierForAccountID:(id)arg1 mailboxPersistentID:(id)arg2 ;
+(id)csIdentifierForMailbox:(id)arg1 ;
+(id)domainIdentifierForMessage:(id)arg1 ;
+(void)mailboxIdentifiersForMessage:(id)arg1 result:(/*^block*/id)arg2 ;
+(id)itemWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(BOOL)arg4 ;
-(NSString *)domainIdentifier;
-(long long)compare:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(id<EDIndexableMessage>)message;
-(BOOL)isEncrypted;
-(NSData *)bodyData;
-(void)setBodyData:(NSData *)arg1 ;
-(NSData *)underlyingData;
-(id)searchableItem;
-(NSDate *)dateReceived;
-(id)initWithMessage:(id)arg1 bodyData:(id)arg2 fetchBody:(BOOL)arg3 ;
-(void)setIndexingType:(long long)arg1 ;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(long long)indexingType;
-(void)addAttachmentAttributesToAttributeSet:(id)arg1 ;
-(id)fetchIndexableAttachments;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(NSData *)arg1 ;
-(BOOL)hasCompleteData;
-(id)initWithIdentifier:(id)arg1 message:(id)arg2 bodyData:(id)arg3 fetchBody:(BOOL)arg4 ;
-(BOOL)includeEncryptedBody;
-(void)setHasCompleteData:(BOOL)arg1 ;
-(void)addStaticAttributesToAttributeSet:(id)arg1 ;
-(void)_addStaticAttributesToAttributeSet:(id)arg1 ;
-(void)addUpdatableAttributesToAttributeSet:(id)arg1 ;
-(void)addFlagsAttributesToAttributeSet:(id)arg1 ;
-(void)setIncludeEncryptedBody:(BOOL)arg1 ;
-(BOOL)fetchBody;
@end

