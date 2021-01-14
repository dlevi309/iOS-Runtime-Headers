/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSMutableOrderedSet, NSString, NSUUID, NSDate, NSObject, ATXAction, NSNumber, NSOrderedSet;

@interface ATXFeedbackSession : NSObject <NSSecureCoding> {

	NSMutableOrderedSet* _engagedUUIDs;
	NSMutableOrderedSet* _rejectedUUIDs;
	NSMutableOrderedSet* _shownUUIDs;
	unsigned char _consumerSubType;
	NSString* _sessionIdentifier;
	NSUUID* _blendingUICacheUpdateUUID;
	NSDate* _sessionStartDate;
	NSDate* _sessionEndDate;
	NSObject*<NSSecureCoding> _sessionMetadata;
	NSUUID* _partiallyExecutedUUID;
	ATXAction* _partiallyExecutedAction;
	ATXAction* _matchingIntentDonatedAction;
	NSDate* _partiallyExecutedActionStartDate;
	NSDate* _matchingIntentDonationDate;
	NSNumber* _partialEngagementWasCompleteMatch;

}

@property (nonatomic,readonly) NSUUID * partiallyExecutedUUID;                            //@synthesize partiallyExecutedUUID=_partiallyExecutedUUID - In the implementation block
@property (nonatomic,readonly) ATXAction * partiallyExecutedAction;                       //@synthesize partiallyExecutedAction=_partiallyExecutedAction - In the implementation block
@property (nonatomic,readonly) ATXAction * matchingIntentDonatedAction;                   //@synthesize matchingIntentDonatedAction=_matchingIntentDonatedAction - In the implementation block
@property (nonatomic,readonly) NSDate * partiallyExecutedActionStartDate;                 //@synthesize partiallyExecutedActionStartDate=_partiallyExecutedActionStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * matchingIntentDonationDate;                       //@synthesize matchingIntentDonationDate=_matchingIntentDonationDate - In the implementation block
@property (nonatomic,readonly) NSNumber * partialEngagementWasCompleteMatch;              //@synthesize partialEngagementWasCompleteMatch=_partialEngagementWasCompleteMatch - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * blendingUICacheUpdateUUID;                        //@synthesize blendingUICacheUpdateUUID=_blendingUICacheUpdateUUID - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubType;                             //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) NSDate * sessionStartDate;                                 //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * sessionEndDate;                                   //@synthesize sessionEndDate=_sessionEndDate - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * engagedUUIDs; 
@property (nonatomic,readonly) NSOrderedSet * rejectedUUIDs; 
@property (nonatomic,readonly) NSOrderedSet * shownUUIDs; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> sessionMetadata;                 //@synthesize sessionMetadata=_sessionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL developerModeEnabled; 
@property (nonatomic,readonly) BOOL demoModeEnabled; 
+(BOOL)supportsSecureCoding;
-(id)spotlightSessionMetadata;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(unsigned char)consumerSubType;
-(NSUUID *)blendingUICacheUpdateUUID;
-(id)homeScreenSessionMetadata;
-(BOOL)developerModeEnabled;
-(id)initWithSessionIdentifier:(id)arg1 consumerSubType:(unsigned char)arg2 sessionStartDate:(id)arg3 sessionEndDate:(id)arg4 blendingUICacheUpdateUUID:(id)arg5 engagedUUIDs:(id)arg6 rejectedUUIDs:(id)arg7 shownUUIDs:(id)arg8 sessionMetadata:(id)arg9 partiallyExecutedUUID:(id)arg10 partiallyExecutedAction:(id)arg11 matchingIntentDonatedAction:(id)arg12 partiallyExecutedActionStartDate:(id)arg13 matchingIntentDonationDate:(id)arg14 partialEngagementWasCompleteMatch:(id)arg15 ;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXAction *)partiallyExecutedAction;
-(NSOrderedSet *)engagedUUIDs;
-(void)markPartiallyExecutedSuggestionAsAbandoned;
-(BOOL)demoModeEnabled;
-(void)updateBlendingUICacheUpdateUUIDIfUnset:(id)arg1 ;
-(NSString *)sessionIdentifier;
-(ATXAction *)matchingIntentDonatedAction;
-(id)description;
-(void)finalizeWithSessionEndDate:(id)arg1 ;
-(BOOL)isEqualToATXFeedbackSession:(id)arg1 ;
-(void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2 ;
-(void)updateEngagedUUIDs:(id)arg1 rejectedUUIDs:(id)arg2 shownUUIDs:(id)arg3 ;
-(unsigned char)uiConsumerSubTypeForFeedback;
-(NSDate *)sessionEndDate;
-(void)updateSessionMetadata:(id)arg1 ;
-(id)initWithSessionIdentifier:(id)arg1 consumerSubType:(unsigned char)arg2 sessionStartDate:(id)arg3 ;
-(NSNumber *)partialEngagementWasCompleteMatch;
-(unsigned long long)hash;
-(NSDate *)partiallyExecutedActionStartDate;
-(id)initWithCoder:(id)arg1 ;
-(NSOrderedSet *)shownUUIDs;
-(NSDate *)sessionStartDate;
-(void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)arg1 donationDate:(id)arg2 ;
-(void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)arg1 engagementDate:(id)arg2 ;
-(NSOrderedSet *)rejectedUUIDs;
-(NSObject*<NSSecureCoding>)sessionMetadata;
-(NSUUID *)partiallyExecutedUUID;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)matchingIntentDonationDate;
@end

