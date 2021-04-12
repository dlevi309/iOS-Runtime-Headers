/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class CKContainer, NSObject, NSString, NSDictionary, CKSchedulerActivity;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _preferAnonymousRequests;
	BOOL _automaticallyRetryNetworkFailures;
	BOOL _xpcActivityAutomaticallyDefer;
	BOOL _discretionarySchedulingForEntireOperation;
	BOOL _allowsBackgroundNetworking;
	BOOL _shouldSkipZonePCSUpdate;
	BOOL _isCloudKitSupportOperation;
	BOOL _hasContainer;
	BOOL _hasAllowsCellularAccess;
	BOOL _hasLongLived;
	BOOL _hasTimeoutIntervalForRequest;
	BOOL _hasTimeoutIntervalForResource;
	BOOL _hasAutomaticallyRetryNetworkFailures;
	BOOL _hasDiscretionaryNetworkBehavior;
	BOOL _hasXPCActivity;
	BOOL _hasXPCActivityAutomaticallyDefer;
	BOOL _hasSchedulerActivity;
	BOOL _hasDiscretionarySchedulingForEntireOperation;
	BOOL _hasPreferAnonymousRequests;
	BOOL _hasAllowsBackgroundNetworking;
	BOOL _hasSourceApplicationBundleIdentifier;
	BOOL _hasSourceApplicationSecondaryIdentifier;
	BOOL _hasAdditionalRequestHTTPHeaders;
	BOOL _hasShouldSkipZonePCSUpdate;
	BOOL _hasIsCloudKitSupportOperation;
	BOOL _hasQualityOfService;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSDictionary* _additionalRequestHTTPHeaders;
	CKSchedulerActivity* _schedulerActivity;

}

@property (assign,nonatomic) BOOL hasContainer;                                              //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellularAccess;                                   //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL hasLongLived;                                              //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForRequest;                              //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForResource;                             //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;                      //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionaryNetworkBehavior;                           //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivity;                                            //@synthesize hasXPCActivity=_hasXPCActivity - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivityAutomaticallyDefer;                          //@synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulerActivity;                                      //@synthesize hasSchedulerActivity=_hasSchedulerActivity - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation;              //@synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) BOOL hasPreferAnonymousRequests;                                //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsBackgroundNetworking;                             //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationBundleIdentifier;                      //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;                   //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalRequestHTTPHeaders;                           //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasShouldSkipZonePCSUpdate;                                //@synthesize hasShouldSkipZonePCSUpdate=_hasShouldSkipZonePCSUpdate - In the implementation block
@property (assign,nonatomic) BOOL hasIsCloudKitSupportOperation;                             //@synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation - In the implementation block
@property (assign,nonatomic) BOOL xpcActivityAutomaticallyDefer;                             //@synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL discretionarySchedulingForEntireOperation;                 //@synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRetryNetworkFailures;                         //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                           //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,retain) CKSchedulerActivity * schedulerActivity;                        //@synthesize schedulerActivity=_schedulerActivity - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationBundleIdentifier;                   //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sourceApplicationSecondaryIdentifier;                //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalRequestHTTPHeaders;                    //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasQualityOfService;                                       //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipZonePCSUpdate;                                   //@synthesize shouldSkipZonePCSUpdate=_shouldSkipZonePCSUpdate - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitSupportOperation;                                //@synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                              //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                               //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                              //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(double)timeoutIntervalForResource;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
-(BOOL)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)isLongLived;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setSchedulerActivity:(CKSchedulerActivity *)arg1 ;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)xpcActivityAutomaticallyDefer;
-(BOOL)discretionarySchedulingForEntireOperation;
-(BOOL)automaticallyRetryNetworkFailures;
-(void)setLongLived:(BOOL)arg1 ;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(BOOL)hasQualityOfService;
-(BOOL)preferAnonymousRequests;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(BOOL)allowsBackgroundNetworking;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(BOOL)hasContainer;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(BOOL)hasAllowsCellularAccess;
-(BOOL)hasLongLived;
-(BOOL)hasTimeoutIntervalForRequest;
-(BOOL)hasTimeoutIntervalForResource;
-(BOOL)hasAutomaticallyRetryNetworkFailures;
-(BOOL)hasDiscretionaryNetworkBehavior;
-(BOOL)hasSchedulerActivity;
-(CKSchedulerActivity *)schedulerActivity;
-(BOOL)hasXPCActivity;
-(BOOL)hasXPCActivityAutomaticallyDefer;
-(void)setXpcActivityAutomaticallyDefer:(BOOL)arg1 ;
-(BOOL)hasDiscretionarySchedulingForEntireOperation;
-(void)setDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(BOOL)hasPreferAnonymousRequests;
-(BOOL)hasAllowsBackgroundNetworking;
-(BOOL)hasSourceApplicationBundleIdentifier;
-(BOOL)hasSourceApplicationSecondaryIdentifier;
-(BOOL)hasAdditionalRequestHTTPHeaders;
-(BOOL)hasShouldSkipZonePCSUpdate;
-(BOOL)shouldSkipZonePCSUpdate;
-(void)setShouldSkipZonePCSUpdate:(BOOL)arg1 ;
-(BOOL)isCloudKitSupportOperation;
-(BOOL)hasIsCloudKitSupportOperation;
-(void)setIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setHasContainer:(BOOL)arg1 ;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(void)setHasAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHasLongLived:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForRequest:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForResource:(BOOL)arg1 ;
-(void)setHasAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(void)setHasDiscretionaryNetworkBehavior:(BOOL)arg1 ;
-(void)setHasXPCActivity:(BOOL)arg1 ;
-(void)setHasXPCActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setHasSchedulerActivity:(BOOL)arg1 ;
-(void)setHasDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(void)setHasPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setHasShouldSkipZonePCSUpdate:(BOOL)arg1 ;
-(void)setHasIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setHasAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setHasSourceApplicationBundleIdentifier:(BOOL)arg1 ;
-(void)setHasSourceApplicationSecondaryIdentifier:(BOOL)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(BOOL)arg1 ;
-(void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)arg1 ;
@end

