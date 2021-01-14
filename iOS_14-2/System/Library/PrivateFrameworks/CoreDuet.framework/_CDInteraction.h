/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding> {

	BOOL _isResponse;
	BOOL _forcePersistInteraction;
	BOOL _mailShareSheetDeletionCandidate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _uuid;
	NSString* _locationUUID;
	long long _mechanism;
	long long _direction;
	NSString* _bundleId;
	NSString* _targetBundleId;
	NSString* _groupName;
	NSURL* _contentURL;
	NSString* _derivedIntentIdentifier;
	NSString* _domainIdentifier;
	NSString* _account;
	_CDContact* _sender;
	NSArray* _recipients;
	NSArray* _keywords;
	NSArray* _attachments;

}

@property (nonatomic,readonly) BOOL userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL userIsThreadInitiator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL forcePersistInteraction;                      //@synthesize forcePersistInteraction=_forcePersistInteraction - In the implementation block
@property (assign,nonatomic) BOOL mailShareSheetDeletionCandidate;              //@synthesize mailShareSheetDeletionCandidate=_mailShareSheetDeletionCandidate - In the implementation block
@property (retain) NSDate * startDate;                                          //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                            //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSString * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * locationUUID;                                     //@synthesize locationUUID=_locationUUID - In the implementation block
@property (assign) long long mechanism;                                         //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) long long direction;                                         //@synthesize direction=_direction - In the implementation block
@property (assign) BOOL isResponse;                                             //@synthesize isResponse=_isResponse - In the implementation block
@property (retain) NSString * bundleId;                                         //@synthesize bundleId=_bundleId - In the implementation block
@property (retain) NSString * targetBundleId;                                   //@synthesize targetBundleId=_targetBundleId - In the implementation block
@property (retain) NSString * groupName;                                        //@synthesize groupName=_groupName - In the implementation block
@property (retain) NSURL * contentURL;                                          //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * derivedIntentIdentifier;                          //@synthesize derivedIntentIdentifier=_derivedIntentIdentifier - In the implementation block
@property (retain) NSString * domainIdentifier;                                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (retain) NSString * account;                                          //@synthesize account=_account - In the implementation block
@property (retain) _CDContact * sender;                                         //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                        //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSArray * keywords;                                          //@synthesize keywords=_keywords - In the implementation block
@property (retain) NSArray * attachments;                                       //@synthesize attachments=_attachments - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recipientIdentifiersFromMobileMailConversationId:(id)arg1 ;
+(id)conversationIdForMobileMailInteractionRecipients:(id)arg1 ;
+(id)shareSheetInteractionFromINInteraction:(id)arg1 bundleID:(id)arg2 knowledgeStore:(id)arg3 ;
-(NSArray *)recipients;
-(long long)direction;
-(NSString *)account;
-(NSDate *)endDate;
-(NSURL *)contentURL;
-(_CDContact *)sender;
-(id)initWithINInteraction:(id)arg1 bundleID:(id)arg2 ;
-(NSString *)derivedIntentIdentifier;
-(void)setAttachments:(NSArray *)arg1 ;
-(NSString *)uuid;
-(void)setAccount:(NSString *)arg1 ;
-(void)setLocationUUID:(NSString *)arg1 ;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSString *)domainIdentifier;
-(void)setSender:(_CDContact *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSArray *)attachments;
-(NSString *)locationUUID;
-(id)init;
-(void)setDirection:(long long)arg1 ;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(void)setGroupName:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSDate *)startDate;
-(NSDate *)timestamp;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDerivedIntentIdentifier:(NSString *)arg1 ;
-(NSString *)description;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(long long)mechanism;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMechanism:(long long)arg1 ;
-(NSString *)targetBundleId;
-(void)setMailShareSheetDeletionCandidate:(BOOL)arg1 ;
-(NSArray *)peopleIdentifiers;
-(BOOL)isResponse;
-(void)setTargetBundleId:(NSString *)arg1 ;
-(id)descriptionOfArray:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)mailShareSheetDeletionCandidate;
-(BOOL)userIsSender;
-(BOOL)forcePersistInteraction;
-(void)setIsResponse:(BOOL)arg1 ;
-(void)setForcePersistInteraction:(BOOL)arg1 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)userIsThreadInitiator;
@end

