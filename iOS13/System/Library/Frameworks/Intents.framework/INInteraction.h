/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INEnumerable.h>
#import <libobjc.A.dylib/INInteractionExport.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INIntent, INIntentResponse, NSDateInterval, INImage, SAUISnippet, NSUUID, NSString, NSDate, CSSearchableItem;

@interface INInteraction : NSObject <INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying> {

	INIntent* _intent;
	INIntentResponse* _intentResponse;
	BOOL _donatedBySiri;
	SAUISnippet* _snippet;
	NSUUID* _contextExtensionUUID;
	long long _intentHandlingStatus;
	long long _direction;
	NSDateInterval* _dateInterval;
	NSString* _identifier;
	NSString* _groupIdentifier;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSString * domainIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long intentHandlingStatus;                                             //@synthesize intentHandlingStatus=_intentHandlingStatus - In the implementation block
@property (setter=_setSnippet:,nonatomic,retain) SAUISnippet * _snippet;                                 //@synthesize snippet=_snippet - In the implementation block
@property (assign,setter=_setDonatedBySiri:,nonatomic) BOOL _donatedBySiri;                              //@synthesize donatedBySiri=_donatedBySiri - In the implementation block
@property (setter=_setIntent:,nonatomic,copy) INIntent * intent;                                         //@synthesize intent=_intent - In the implementation block
@property (setter=_setIntentResponse:,nonatomic,copy) INIntentResponse * intentResponse;                 //@synthesize intentResponse=_intentResponse - In the implementation block
@property (copy,readonly) CSSearchableItem * _searchableItem; 
@property (readonly) long long _indexingHash; 
@property (setter=_setContextExtensionUUID:,nonatomic,copy) NSUUID * _contextExtensionUUID;              //@synthesize contextExtensionUUID=_contextExtensionUUID - In the implementation block
@property (assign,nonatomic) long long direction;                                                        //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                                                //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * groupIdentifier;                                                   //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (readonly) INImage * _keyImage; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(unsigned long long)_searchableItemVersion;
+(void)deleteAllInteractionsWithCompletion:(/*^block*/id)arg1 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)contextMetadataWithBundleIdentifier:(id)arg1 eventUUID:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSString *)domainIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(id)_init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(double)duration;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(long long)intentHandlingStatus;
-(void)setDate:(NSDate *)arg1 ;
-(long long)_indexingHash;
-(CSSearchableItem *)_searchableItem;
-(INIntent *)intent;
-(BOOL)_donatedBySiri;
-(INImage *)_keyImage;
-(NSDateInterval *)dateInterval;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(NSUUID *)_contextExtensionUUID;
-(id)_dictionaryRepresentation;
-(void)setDuration:(double)arg1 ;
-(void)_commonInit;
-(void)_setIntent:(id)arg1 ;
-(INIntentResponse *)intentResponse;
-(SAUISnippet *)_snippet;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)initWithIntent:(id)arg1 response:(id)arg2 ;
-(void)_setDonatedBySiri:(BOOL)arg1 ;
-(void)donateInteractionWithCompletion:(/*^block*/id)arg1 ;
-(void)_donateInteractionWithBundleId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_searchableItemIncludingData:(BOOL)arg1 ;
-(id)parameterValueForParameter:(id)arg1 ;
-(void)_setSnippet:(id)arg1 ;
-(void)_setContextExtensionUUID:(id)arg1 ;
-(void)_setIntentResponse:(id)arg1 ;
-(void)setIntentHandlingStatus:(long long)arg1 ;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
@end

