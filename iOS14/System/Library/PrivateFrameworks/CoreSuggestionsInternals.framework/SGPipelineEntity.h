/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <CoreSuggestionsInternals/SGEntity.h>

@class NSMutableArray, SGLazyResult, NSArray, NSMutableDictionary, NSString, NSSet, SGMessage, SGSimpleMailMessage, SGTextMessage, INInteraction;

@interface SGPipelineEntity : SGEntity {

	NSMutableArray* _enrichments;
	NSMutableArray* _externalEnrichments;
	NSMutableArray* _taggedCharacterRanges;
	BOOL _fullDownloadRequested;
	SCD_Struct_SG12 _inhumanFeatures;
	opaque_pthread_mutex_t _dissectorLock;
	BOOL _useMailMessageHtmlParser;
	BOOL _messageInhumannessChecked;
	NSRange _dataDetectorsSignatureForTesting;
	BOOL _overrideDataDetectorSignatureForTesting;
	SGLazyResult* _lazySnippetsContent;
	BOOL _contactInformationExtracted;
	BOOL _needsSourceVerification;
	BOOL _pendingVerification;
	NSArray* _instantMessageAddresses;
	NSMutableDictionary* _emailToCanonicalEmailCache;
	NSString* _accountType;
	NSArray* _invalidatedMessageIdentifiers;
	NSArray* _authorMatchingContacts;
	NSSet* _authorMatchingContactsKeys;
	SGMessage* _message;
	SGSimpleMailMessage* _mailMessage;
	SGTextMessage* _textMessage;
	INInteraction* _interaction;
	NSRange _plainTextSigRange;

}

@property (nonatomic,readonly) SGMessage * message;                                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) SGSimpleMailMessage * mailMessage;                                 //@synthesize mailMessage=_mailMessage - In the implementation block
@property (nonatomic,readonly) SGTextMessage * textMessage;                                       //@synthesize textMessage=_textMessage - In the implementation block
@property (nonatomic,readonly) INInteraction * interaction;                                       //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,retain) NSArray * enrichments;                                               //@synthesize enrichments=_enrichments - In the implementation block
@property (nonatomic,retain) NSArray * externalEnrichments;                                       //@synthesize externalEnrichments=_externalEnrichments - In the implementation block
@property (assign,nonatomic) NSRange plainTextSigRange;                                           //@synthesize plainTextSigRange=_plainTextSigRange - In the implementation block
@property (nonatomic,readonly) SCD_Struct_SG13* inhumanFeatures; 
@property (nonatomic,readonly) NSString * snippetsContent; 
@property (assign,nonatomic) BOOL contactInformationExtracted;                                    //@synthesize contactInformationExtracted=_contactInformationExtracted - In the implementation block
@property (nonatomic,readonly) NSArray * phoneNumbers; 
@property (nonatomic,readonly) NSArray * addresses; 
@property (nonatomic,readonly) NSArray * emailAddresses; 
@property (nonatomic,readonly) NSArray * instantMessageAddresses;                                 //@synthesize instantMessageAddresses=_instantMessageAddresses - In the implementation block
@property (nonatomic,retain) NSArray * taggedCharacterRanges;                                     //@synthesize taggedCharacterRanges=_taggedCharacterRanges - In the implementation block
@property (getter=hasFullDownloadBeenRequested,readonly) BOOL fullDownloadRequested; 
@property (nonatomic,readonly) NSMutableDictionary * emailToCanonicalEmailCache;                  //@synthesize emailToCanonicalEmailCache=_emailToCanonicalEmailCache - In the implementation block
@property (nonatomic,readonly) NSString * accountType;                                            //@synthesize accountType=_accountType - In the implementation block
@property (retain) NSArray * invalidatedMessageIdentifiers;                                       //@synthesize invalidatedMessageIdentifiers=_invalidatedMessageIdentifiers - In the implementation block
@property (nonatomic,retain) NSArray * authorMatchingContacts;                                    //@synthesize authorMatchingContacts=_authorMatchingContacts - In the implementation block
@property (nonatomic,retain) NSSet * authorMatchingContactsKeys;                                  //@synthesize authorMatchingContactsKeys=_authorMatchingContactsKeys - In the implementation block
@property (assign,nonatomic) BOOL needsSourceVerification;                                        //@synthesize needsSourceVerification=_needsSourceVerification - In the implementation block
@property (assign,nonatomic) BOOL pendingVerification;                                            //@synthesize pendingVerification=_pendingVerification - In the implementation block
+(id)fromCloudKitRecord:(id)arg1 ;
-(NSArray *)instantMessageAddresses;
-(NSString *)accountType;
-(void)addTaggedCharacterRanges:(id)arg1 ;
-(BOOL)isInhuman;
-(NSArray *)addresses;
-(SGMessage *)message;
-(BOOL)needsSourceVerification;
-(void)setNeedsSourceVerification:(BOOL)arg1 ;
-(void)enumeratePeople:(/*^block*/id)arg1 ;
-(void)addExternalEnrichment:(id)arg1 ;
-(NSArray *)authorMatchingContacts;
-(NSArray *)externalEnrichments;
-(NSArray *)invalidatedMessageIdentifiers;
-(id)initWithInteraction:(id)arg1 fromBundleIdentifier:(id)arg2 ;
-(void)setCreationTimestamp:(SGUnixTimestamp_)arg1 ;
-(void)setContactInformationExtracted:(BOOL)arg1 ;
-(NSSet *)authorMatchingContactsKeys;
-(void)addBirthdayEnrichment:(id)arg1 ;
-(NSArray *)emailAddresses;
-(void)setPendingVerification:(BOOL)arg1 ;
-(BOOL)pendingVerification;
-(void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(void)addDetectedSocialProfile:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(void)setEnrichments:(NSArray *)arg1 ;
-(void)requestFullDownload;
-(void)addEnrichment:(id)arg1 ;
-(void)addDetectedBirthday:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(void)releaseDissectorLock;
-(SGSimpleMailMessage *)mailMessage;
-(NSMutableDictionary *)emailToCanonicalEmailCache;
-(NSArray *)taggedCharacterRanges;
-(void)setLastModifiedTimestamp:(SGUnixTimestamp_)arg1 ;
-(id)initWithDuplicateKey:(id)arg1 title:(id)arg2 ;
-(id)_initWithInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2 creationTime:(id)arg3 ;
-(NSArray *)phoneNumbers;
-(unsigned long long)eventEnrichmentsCount;
-(void)setPlainTextSigRange:(NSRange)arg1 ;
-(void)addInstantMessageAddressEnrichment:(id)arg1 ;
-(void)addOrReplacePreferredEnrichment:(id)arg1 ;
-(INInteraction *)interaction;
-(id)initWithMessage:(id)arg1 ;
-(void)addDetection:(id)arg1 forIdentity:(id)arg2 extractionInfo:(id)arg3 ;
-(id)initWithInteraction:(id)arg1 identifier:(id)arg2 fromBundleIdentifier:(id)arg3 ;
-(void)setAuthorMatchingContacts:(NSArray *)arg1 ;
-(void)addSocialProfileEnrichment:(id)arg1 ;
-(NSArray *)enrichments;
-(id)initWithEmailMessage:(id)arg1 ;
-(id)initWithTextMessage:(id)arg1 ;
-(void)setTaggedCharacterRanges:(NSArray *)arg1 ;
-(BOOL)contactInformationExtracted;
-(void)stripEventInformation;
-(SGTextMessage *)textMessage;
-(void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(SCD_Struct_SG13*)inhumanFeatures;
-(void)_lazyCheckMessageForHumanness;
-(void)setExternalEnrichments:(NSArray *)arg1 ;
-(void)setInvalidatedMessageIdentifiers:(NSArray *)arg1 ;
-(NSString *)snippetsContent;
-(void)addEnrichments:(id)arg1 ;
-(void)setAuthorMatchingContactsKeys:(NSSet *)arg1 ;
-(BOOL)hasEventEnrichment;
-(void)runWithDissectorLock:(/*^block*/id)arg1 ;
-(id)initWithInteractionIdentifier:(id)arg1 fromBundleIdentifier:(id)arg2 ;
-(NSRange)plainTextSigRange;
-(void)addEmailAddressEnrichment:(id)arg1 ;
-(BOOL)hasFullDownloadBeenRequested;
-(void)addDetectedInstantMessageAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(void)acquireDissectorLock;
-(void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3 contextRangeOfInterest:(NSRange)arg4 extractionInfo:(id)arg5 ;
-(id)initWithIntentPersonAtDate:(id)arg1 bundleId:(id)arg2 handle:(id)arg3 displayName:(id)arg4 ;
-(id)contactDetailsWithType:(unsigned long long)arg1 ;
@end

