/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SGEntityKey;
@class NSObject, NSData;

@interface SGDuplicateKey : NSObject <NSCopying> {

	long long _entityType;
	NSObject*<SGEntityKey> _entityKey;
	SGDuplicateKey* _parentKey;

}

@property (nonatomic,readonly) long long entityType;                          //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) NSObject*<SGEntityKey> entityKey;              //@synthesize entityKey=_entityKey - In the implementation block
@property (nonatomic,readonly) SGDuplicateKey * parentKey;                    //@synthesize parentKey=_parentKey - In the implementation block
@property (nonatomic,readonly) NSData * compositeHash; 
+(id)duplicateKeyForMessage:(id)arg1 fromSource:(id)arg2 ;
+(id)duplicateKeyForEmailWithSource:(id)arg1 messageId:(id)arg2 ;
+(id)duplicateKeyForTextMessageWithSource:(id)arg1 uniqueIdentifier:(id)arg2 ;
+(id)duplicateKeyForInteractionWithBundleId:(id)arg1 personHandle:(id)arg2 ;
+(id)duplicateKeyForInteraction:(id)arg1 fromBundleIdentifier:(id)arg2 ;
+(id)duplicateKeyForInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2 ;
+(id)duplicateKeyForPseudoContactWithIdentity:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForCuratedEventWithExternalID:(id)arg1 ;
+(id)duplicateKeyForPseudoEventWithGroupId:(id)arg1 parentKey:(id)arg2 ;
+(id)duplicateKeyForPseudoReminderWithGroupId:(id)arg1 withCreationTime:(SGUnixTimestamp_)arg2 parentKey:(id)arg3 ;
+(id)duplicateKeyForDeliveryWithProviderString:(id)arg1 trackingNumber:(id)arg2 parentKey:(id)arg3 ;
+(id)duplicateKeyForNaturalLanguageEventWithStartDate:(id)arg1 endDate:(id)arg2 title:(id)arg3 participants:(id)arg4 parentKey:(id)arg5 ;
+(id)duplicateKeyForSearchableItem:(id)arg1 ;
+(id)duplicateKeyForSchemaOrg;
+(id)duplicateKeyForWebPageFromSource:(id)arg1 ;
-(long long)entityType;
-(id)identityKey;
-(id)serialize;
-(id)initWithSerialized:(id)arg1 ;
-(id)deliveryKey;
-(id)bundleId;
-(id)initWithSerializedEntityKey:(id)arg1 entityType:(long long)arg2 serializedParentKey:(id)arg3 ;
-(id)textMessageKey;
-(SGDuplicateKey *)parentKey;
-(NSObject*<SGEntityKey>)entityKey;
-(id)pseudoEventKey;
-(id)description;
-(id)initWithSearchableItem:(id)arg1 ;
-(id)pseudoContactKey;
-(id)webPageKey;
-(id)curatedEventKey;
-(id)messageKey;
-(unsigned long long)hash;
-(id)pseudoReminderKey;
-(id)initWithEntityKey:(id)arg1 entityType:(long long)arg2 parentKey:(id)arg3 ;
-(id)contactDetailKey;
-(id)interactionKey;
-(NSData *)compositeHash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)emailKey;
-(BOOL)isEqualToDuplicateKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

