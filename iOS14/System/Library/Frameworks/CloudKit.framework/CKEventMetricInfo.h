/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface CKEventMetricInfo : NSObject <NSSecureCoding> {

	BOOL _isCKInternalMetric;
	BOOL _isPushTriggerFired;
	BOOL _allowsCellularAccess;
	BOOL _preferAnonymousRequests;
	NSUUID* _metricUUID;
	NSString* _deviceIdentifier;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _eventName;
	NSDate* _startTime;
	NSDate* _endTime;
	NSDictionary* _attributes;
	NSMutableDictionary* _associatedOperations;
	NSMutableDictionary* _associatedOperationGroups;

}

@property (nonatomic,readonly) NSUUID * metricUUID;                                          //@synthesize metricUUID=_metricUUID - In the implementation block
@property (nonatomic,readonly) BOOL isCKInternalMetric;                                      //@synthesize isCKInternalMetric=_isCKInternalMetric - In the implementation block
@property (nonatomic,readonly) BOOL isPushTriggerFired;                                      //@synthesize isPushTriggerFired=_isPushTriggerFired - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess;                                    //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (nonatomic,readonly) BOOL preferAnonymousRequests;                                 //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;                                  //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplicationBundleIdentifier;                 //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier;              //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * eventName;                                         //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                           //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * endTime;                                             //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes;                                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperations;                   //@synthesize associatedOperations=_associatedOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * associatedOperationGroups;              //@synthesize associatedOperationGroups=_associatedOperationGroups - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(id)initWithEventMetric:(id)arg1 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)eventName;
-(NSMutableDictionary *)associatedOperations;
-(NSDictionary *)attributes;
-(NSUUID *)metricUUID;
-(NSMutableDictionary *)associatedOperationGroups;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(BOOL)isCKInternalMetric;
-(BOOL)allowsCellularAccess;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPushTriggerFired;
-(BOOL)preferAnonymousRequests;
-(NSDate *)endTime;
-(NSDate *)startTime;
@end

