/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSUUID, NSMutableDictionary;

@interface CKEventMetric : NSObject <NSSecureCoding> {

	BOOL _isPushTriggerFired;
	BOOL _hasBeenSubmitted;
	BOOL _inferredAllowsCellular;
	BOOL _inferredPreferAnonymousRequests;
	BOOL _isCKInternalMetric;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	NSUUID* _metricUUID;
	NSString* _inferredDeviceIdentifier;
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
@property (nonatomic,retain) NSString * inferredDeviceIdentifier;                                  //@synthesize inferredDeviceIdentifier=_inferredDeviceIdentifier - In the implementation block
@property (nonatomic,retain) NSString * inferredSourceApplicationBundleIdentifier;                 //@synthesize inferredSourceApplicationBundleIdentifier=_inferredSourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * inferredSourceApplicationSecondaryIdentifier;              //@synthesize inferredSourceApplicationSecondaryIdentifier=_inferredSourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperations;                         //@synthesize associatedOperations=_associatedOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperationGroups;                    //@synthesize associatedOperationGroups=_associatedOperationGroups - In the implementation block
@property (assign,nonatomic) BOOL isCKInternalMetric;                                              //@synthesize isCKInternalMetric=_isCKInternalMetric - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                                          //@synthesize eventName=_eventName - In the implementation block
@property (copy) NSDate * startTime;                                                               //@synthesize startTime=_startTime - In the implementation block
@property (copy) NSDate * endTime;                                                                 //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL isPushTriggerFired;                                              //@synthesize isPushTriggerFired=_isPushTriggerFired - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setMetricValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)inferredSourceApplicationBundleIdentifier;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)generateEventMetricInfo;
-(void)setHasBeenSubmitted:(BOOL)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIsPushTriggerFired:(BOOL)arg1 ;
-(void)setInferredSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(NSString *)eventName;
-(id)initWithEventName:(id)arg1 ;
-(NSString *)inferredSourceApplicationSecondaryIdentifier;
-(void)setInferredAllowsCellular:(BOOL)arg1 ;
-(void)setInferredPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setInferredDeviceIdentifier:(NSString *)arg1 ;
-(NSMutableDictionary *)associatedOperations;
-(NSMutableDictionary *)attributes;
-(BOOL)hasBeenSubmitted;
-(NSUUID *)metricUUID;
-(NSMutableDictionary *)associatedOperationGroups;
-(BOOL)isCKInternalMetric;
-(BOOL)inferredAllowsCellular;
-(BOOL)associateWithCompletedOperation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPushTriggerFired;
-(void)setEndTime:(NSDate *)arg1 ;
-(id)initWithEventName:(id)arg1 atTime:(id)arg2 ;
-(NSDate *)endTime;
-(BOOL)inferredPreferAnonymousRequests;
-(NSString *)inferredDeviceIdentifier;
-(NSDate *)startTime;
-(void)setIsCKInternalMetric:(BOOL)arg1 ;
-(void)setInferredSourceApplicationBundleIdentifier:(NSString *)arg1 ;
@end

