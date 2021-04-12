/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSUUID, NSMutableDictionary;

@interface CKEventMetric : NSObject <NSSecureCoding> {

	BOOL _hasBeenSubmitted;
	BOOL _inferredAllowsCellular;
	BOOL _inferredPreferAnonymousRequests;
	BOOL _isCKInternalMetric;
	BOOL _isPushTriggerFired;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	NSUUID* _metricUUID;
	NSString* _inferredSourceApplicationBundleIdentifier;
	NSString* _inferredSourceApplicationSecondaryIdentifier;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _associatedOperations;
	NSMutableDictionary* _associatedOperationGroups;

}

@property (assign,nonatomic) BOOL hasBeenSubmitted;                                                //@synthesize hasBeenSubmitted=_hasBeenSubmitted - In the implementation block
@property (nonatomic,readonly) NSUUID * metricUUID;                                                //@synthesize metricUUID=_metricUUID - In the implementation block
@property (assign,nonatomic) BOOL inferredAllowsCellular;                                          //@synthesize inferredAllowsCellular=_inferredAllowsCellular - In the implementation block
@property (assign,nonatomic) BOOL inferredPreferAnonymousRequests;                                 //@synthesize inferredPreferAnonymousRequests=_inferredPreferAnonymousRequests - In the implementation block
@property (nonatomic,retain) NSString * inferredSourceApplicationBundleIdentifier;                 //@synthesize inferredSourceApplicationBundleIdentifier=_inferredSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * inferredSourceApplicationSecondaryIdentifier;              //@synthesize inferredSourceApplicationSecondaryIdentifier=_inferredSourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperations;                         //@synthesize associatedOperations=_associatedOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperationGroups;                    //@synthesize associatedOperationGroups=_associatedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL isCKInternalMetric;                                              //@synthesize isCKInternalMetric=_isCKInternalMetric - In the implementation block
@property (assign,nonatomic) BOOL isPushTriggerFired;                                              //@synthesize isPushTriggerFired=_isPushTriggerFired - In the implementation block
@property (nonatomic,readonly) NSString * eventName;                                               //@synthesize eventName=_eventName - In the implementation block
@property (retain) NSDate * startTime;                                                             //@synthesize startTime=_startTime - In the implementation block
@property (retain) NSDate * endTime;                                                               //@synthesize endTime=_endTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSMutableDictionary *)attributes;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(BOOL)associateWithCompletedOperation:(id)arg1 ;
-(void)setMetricValue:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(id)generateEventMetricInfo;
-(NSUUID *)metricUUID;
-(void)setIsCKInternalMetric:(BOOL)arg1 ;
-(id)initWithEventName:(id)arg1 atTime:(id)arg2 ;
-(BOOL)hasBeenSubmitted;
-(BOOL)inferredAllowsCellular;
-(void)setInferredAllowsCellular:(BOOL)arg1 ;
-(BOOL)inferredPreferAnonymousRequests;
-(void)setInferredPreferAnonymousRequests:(BOOL)arg1 ;
-(NSMutableDictionary *)associatedOperations;
-(void)setInferredSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setInferredSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)associatedOperationGroups;
-(void)setHasBeenSubmitted:(BOOL)arg1 ;
-(NSString *)inferredSourceApplicationBundleIdentifier;
-(NSString *)inferredSourceApplicationSecondaryIdentifier;
-(BOOL)isCKInternalMetric;
-(BOOL)isPushTriggerFired;
-(void)setIsPushTriggerFired:(BOOL)arg1 ;
@end

