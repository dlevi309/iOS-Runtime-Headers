/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSUUID* _uuid;
	NSArray* _scoredActions;
	NSDate* _predictionDate;
	ATXAction* _engagedAction;
	ATXAction* _matchingIntentDonatedAction;
	unsigned long long _feedbackStage;
	NSDate* _uiFeedbackDate;
	NSDate* _donatedIntentDate;
	unsigned long long _searchedActionType;
	NSString* _engagedAppString;
	NSData* _cacheFileData;
	NSError* _error;

}

@property (nonatomic,readonly) NSUUID * uuid;                                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSArray * scoredActions;                              //@synthesize scoredActions=_scoredActions - In the implementation block
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) NSDate * predictionDate;                              //@synthesize predictionDate=_predictionDate - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubType;                        //@synthesize consumerSubType=_consumerSubType - In the implementation block
@property (nonatomic,readonly) ATXAction * engagedAction;                            //@synthesize engagedAction=_engagedAction - In the implementation block
@property (nonatomic,readonly) ATXAction * matchingIntentDonatedAction;              //@synthesize matchingIntentDonatedAction=_matchingIntentDonatedAction - In the implementation block
@property (nonatomic,readonly) NSArray * shownActions; 
@property (nonatomic,readonly) NSArray * explicitlyDismissedActions; 
@property (nonatomic,readonly) unsigned long long feedbackStage;                     //@synthesize feedbackStage=_feedbackStage - In the implementation block
@property (nonatomic,readonly) NSDate * uiFeedbackDate;                              //@synthesize uiFeedbackDate=_uiFeedbackDate - In the implementation block
@property (nonatomic,readonly) NSDate * donatedIntentDate;                           //@synthesize donatedIntentDate=_donatedIntentDate - In the implementation block
@property (nonatomic,readonly) unsigned long long searchedActionType;                //@synthesize searchedActionType=_searchedActionType - In the implementation block
@property (nonatomic,readonly) NSString * engagedAppString;                          //@synthesize engagedAppString=_engagedAppString - In the implementation block
@property (nonatomic,readonly) NSData * cacheFileData;                               //@synthesize cacheFileData=_cacheFileData - In the implementation block
@property (nonatomic,readonly) NSError * error;                                      //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSUUID *)uuid;
-(id)jsonDescription;
-(NSArray *)actions;
-(id)jsonData;
-(id)initWithScoredActions:(id)arg1 cacheFileData:(id)arg2 consumerSubType:(unsigned char)arg3 error:(id)arg4 ;
-(void)updateConsumerSubType:(unsigned char)arg1 engagedAction:(id)arg2 shownActions:(id)arg3 feedbackStage:(unsigned long long)arg4 explicitlyDismissedActions:(id)arg5 searchedActionType:(unsigned long long)arg6 engagedAppString:(id)arg7 ;
-(void)updateWithMatchingIntentDonatedAction:(id)arg1 intentDonationDate:(id)arg2 ;
-(BOOL)indexWasShown:(unsigned long long)arg1 ;
-(NSArray *)shownActions;
-(NSArray *)explicitlyDismissedActions;
-(BOOL)isEqualToActionResponse:(id)arg1 ;
-(id)json;
-(BOOL)isActionSpotlightCaptureRateAppEngagementType;
-(NSArray *)scoredActions;
-(NSDate *)predictionDate;
-(unsigned char)consumerSubType;
-(ATXAction *)engagedAction;
-(ATXAction *)matchingIntentDonatedAction;
-(unsigned long long)feedbackStage;
-(NSDate *)uiFeedbackDate;
-(NSDate *)donatedIntentDate;
-(unsigned long long)searchedActionType;
-(NSString *)engagedAppString;
-(NSData *)cacheFileData;
-(id)routeDestinationTypeString;
-(void)setContainsExternalRoute:(BOOL)arg1 ;
-(BOOL)containsExternalRoute;
@end

