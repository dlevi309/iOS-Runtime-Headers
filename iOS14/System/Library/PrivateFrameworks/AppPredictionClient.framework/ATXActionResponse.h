/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSIndexSet, NSArray, NSUUID, NSDate, ATXAction, NSString, NSData, NSError;

@interface ATXActionResponse : NSObject <NSSecureCoding> {

	NSIndexSet* _shownActionIndices;
	NSIndexSet* _explicitlyDismissedActionIndices;
	NSArray* _shownActionsCache;
	BOOL _containsRouteInternal;
	unsigned char _consumerSubType;
	BOOL _matchingIntentWasCompleteMatch;
	NSUUID* _uuid;
	NSArray* _scoredActions;
	NSUUID* _blendingModelUICacheUpdateUUID;
	NSArray* _proactiveSuggestions;
	NSDate* _predictionDate;
	ATXAction* _engagedAction;
	unsigned long long _feedbackStage;
	NSDate* _uiFeedbackDate;
	ATXAction* _matchingIntentDonatedAction;
	NSDate* _donatedIntentDate;
	unsigned long long _searchedActionType;
	NSString* _engagedAppString;
	NSData* _cacheFileData;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * scoredActions;                              //@synthesize scoredActions=_scoredActions - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSUUID * blendingModelUICacheUpdateUUID;              //@synthesize blendingModelUICacheUpdateUUID=_blendingModelUICacheUpdateUUID - In the implementation block
@property (nonatomic,readonly) NSArray * proactiveSuggestions;                       //@synthesize proactiveSuggestions=_proactiveSuggestions - In the implementation block
@property (nonatomic,readonly) NSDate * predictionDate;                              //@synthesize predictionDate=_predictionDate - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubType;                        //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) ATXAction * engagedAction;                            //@synthesize engagedAction=_engagedAction - In the implementation block
@property (nonatomic,readonly) NSArray * shownActions; 
@property (nonatomic,readonly) NSArray * explicitlyDismissedActions; 
@property (nonatomic,readonly) unsigned long long feedbackStage;                     //@synthesize feedbackStage=_feedbackStage - In the implementation block
@property (nonatomic,readonly) NSDate * uiFeedbackDate;                              //@synthesize uiFeedbackDate=_uiFeedbackDate - In the implementation block
@property (nonatomic,readonly) ATXAction * matchingIntentDonatedAction;              //@synthesize matchingIntentDonatedAction=_matchingIntentDonatedAction - In the implementation block
@property (nonatomic,readonly) BOOL matchingIntentWasCompleteMatch;                  //@synthesize matchingIntentWasCompleteMatch=_matchingIntentWasCompleteMatch - In the implementation block
@property (nonatomic,readonly) NSDate * donatedIntentDate;                           //@synthesize donatedIntentDate=_donatedIntentDate - In the implementation block
@property (nonatomic,readonly) unsigned long long searchedActionType;                //@synthesize searchedActionType=_searchedActionType - In the implementation block
@property (nonatomic,readonly) NSString * engagedAppString;                          //@synthesize engagedAppString=_engagedAppString - In the implementation block
@property (nonatomic,readonly) NSData * cacheFileData;                               //@synthesize cacheFileData=_cacheFileData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)searchedActionType;
-(NSString *)engagedAppString;
-(unsigned char)consumerSubType;
-(NSArray *)explicitlyDismissedActions;
-(NSUUID *)blendingModelUICacheUpdateUUID;
-(NSUUID *)uuid;
-(id)json;
-(NSArray *)actions;
-(id)routeDestinationTypeString;
-(NSArray *)scoredActions;
-(id)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(ATXAction *)engagedAction;
-(BOOL)isActionSpotlightCaptureRateAppEngagementType;
-(unsigned long long)feedbackStage;
-(NSError *)error;
-(BOOL)indexWasShown:(unsigned long long)arg1 ;
-(BOOL)matchingIntentWasCompleteMatch;
-(id)jsonDescription;
-(ATXAction *)matchingIntentDonatedAction;
-(BOOL)isEqualToActionResponse:(id)arg1 ;
-(NSDate *)uiFeedbackDate;
-(NSDate *)donatedIntentDate;
-(NSDate *)predictionDate;
-(id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 proactiveSuggestions:(id)arg3 blendingModelUICacheUpdateUUID:(id)arg4 consumerSubType:(unsigned char)arg5 predictionDate:(id)arg6 error:(id)arg7 ;
-(NSData *)cacheFileData;
-(void)updateConsumerSubType:(unsigned char)arg1 engagedAction:(id)arg2 shownActions:(id)arg3 feedbackStage:(unsigned long long)arg4 explicitlyDismissedActions:(id)arg5 searchedActionType:(unsigned long long)arg6 engagedAppString:(id)arg7 uiFeedbackDate:(id)arg8 ;
-(NSArray *)proactiveSuggestions;
-(BOOL)containsExternalRoute;
-(void)updateWithMatchingIntentDonatedAction:(id)arg1 intentDonationDate:(id)arg2 matchingIntentWasCompleteMatch:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)shownActions;
-(void)setContainsExternalRoute:(BOOL)arg1 ;
-(id)initWithProactiveSuggestions:(id)arg1 blendingModelUICacheUpdateUUID:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4 ;
@end

