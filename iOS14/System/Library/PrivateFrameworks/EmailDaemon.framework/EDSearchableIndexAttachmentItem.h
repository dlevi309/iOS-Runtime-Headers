/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EDIndexableItem.h>

@class NSString, NSDate, NSData, CSSearchableItem, EDSearchableIndexAttachmentItemMetadatum, EFPromise;

@interface EDSearchableIndexAttachmentItem : NSObject <EFLoggable, EDIndexableItem> {

	CSSearchableItem* _searchableItem;
	BOOL _requiresPreprocessing;
	NSString* _identifier;
	NSData* _underlyingData;
	long long _indexingType;
	unsigned long long _itemInstantiationTime;
	NSString* _attachmentPersistentID;
	NSString* _messagePersistentID;
	EDSearchableIndexAttachmentItemMetadatum* _metadatum;
	EFPromise* _attributeSetForFilePromise;
	double _searchableItemProcessingDelay;

}

@property (nonatomic,retain) EFPromise * attributeSetForFilePromise;                            //@synthesize attributeSetForFilePromise=_attributeSetForFilePromise - In the implementation block
@property (nonatomic,copy) NSString * attachmentPersistentID;                                   //@synthesize attachmentPersistentID=_attachmentPersistentID - In the implementation block
@property (nonatomic,copy) NSString * messagePersistentID;                                      //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,retain) EDSearchableIndexAttachmentItemMetadatum * metadatum;              //@synthesize metadatum=_metadatum - In the implementation block
@property (assign,nonatomic) BOOL requiresPreprocessing;                                        //@synthesize requiresPreprocessing=_requiresPreprocessing - In the implementation block
@property (assign,nonatomic) double searchableItemProcessingDelay;                              //@synthesize searchableItemProcessingDelay=_searchableItemProcessingDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * domainIdentifier; 
@property (assign,nonatomic) long long indexingType;                                            //@synthesize indexingType=_indexingType - In the implementation block
@property (nonatomic,readonly) NSDate * dateReceived; 
@property (nonatomic,readonly) unsigned long long itemInstantiationTime;                        //@synthesize itemInstantiationTime=_itemInstantiationTime - In the implementation block
@property (nonatomic,readonly) unsigned long long estimatedSizeInBytes; 
@property (nonatomic,retain) NSData * underlyingData;                                           //@synthesize underlyingData=_underlyingData - In the implementation block
@property (nonatomic,readonly) BOOL hasCompleteData; 
@property (nonatomic,readonly) BOOL alwaysMarkAsIndexed; 
@property (nonatomic,readonly) BOOL shouldExcludeFromIndex; 
+(id)log;
+(id)attachmentPersistentIDFromItemIdentifier:(id)arg1 ;
+(id)identifierForAttachmentPersistentID:(id)arg1 ;
-(long long)compare:(id)arg1 ;
-(NSString *)domainIdentifier;
-(void)setIndexingType:(long long)arg1 ;
-(BOOL)shouldExcludeFromIndex;
-(long long)indexingType;
-(void)setNeedsAllAttributesIndexingType;
-(id)fetchIndexableAttachments;
-(NSData *)underlyingData;
-(id)searchableItem;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(void)preprocess;
-(NSString *)identifier;
-(NSDate *)dateReceived;
-(NSString *)messagePersistentID;
-(unsigned long long)estimatedSizeInBytes;
-(BOOL)alwaysMarkAsIndexed;
-(BOOL)requiresPreprocessing;
-(void)setRequiresPreprocessing:(BOOL)arg1 ;
-(EFPromise *)attributeSetForFilePromise;
-(EDSearchableIndexAttachmentItemMetadatum *)metadatum;
-(unsigned long long)itemInstantiationTime;
-(void)setUnderlyingData:(NSData *)arg1 ;
-(BOOL)hasCompleteData;
-(id)initWithAttachmentPersistentID:(id)arg1 messagePersistentID:(id)arg2 metadatum:(id)arg3 ;
-(NSString *)attachmentPersistentID;
-(void)setAttachmentPersistentID:(NSString *)arg1 ;
-(void)setMetadatum:(EDSearchableIndexAttachmentItemMetadatum *)arg1 ;
-(void)setAttributeSetForFilePromise:(EFPromise *)arg1 ;
-(double)searchableItemProcessingDelay;
-(void)setSearchableItemProcessingDelay:(double)arg1 ;
@end

