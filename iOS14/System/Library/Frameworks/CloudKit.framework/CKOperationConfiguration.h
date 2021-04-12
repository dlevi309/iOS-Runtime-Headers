/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_xpc_object;
@class CKContainer, NSObject, NSString, NSDictionary, NSNumber, NSMutableDictionary, CKSchedulerActivity;

@interface CKOperationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellularAccess;
	BOOL _longLived;
	BOOL _preferAnonymousRequests;
	BOOL _automaticallyRetryNetworkFailures;
	BOOL _xpcActivityAutomaticallyDefer;
	BOOL _discretionarySchedulingForEntireOperation;
	BOOL _allowsBackgroundNetworking;
	BOOL _isCloudKitSupportOperation;
	BOOL _hasQualityOfService;
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
	BOOL _hasApplicationBundleIdentifierOverrideForContainerAccess;
	BOOL _hasApplicationBundleIdentifierOverrideForNetworkAttribution;
	BOOL _hasAdditionalRequestHTTPHeaders;
	BOOL _hasIsCloudKitSupportOperation;
	BOOL _hasCacheDeleteAvailableSpaceClass;
	CKContainer* _container;
	long long _qualityOfService;
	double _timeoutIntervalForRequest;
	double _timeoutIntervalForResource;
	unsigned long long _discretionaryNetworkBehavior;
	NSObject*<OS_xpc_object> _xpcActivity;
	NSString* _sourceApplicationBundleIdentifier;
	NSString* _sourceApplicationSecondaryIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSDictionary* _additionalRequestHTTPHeaders;
	NSNumber* _cacheDeleteAvailableSpaceClass;
	NSMutableDictionary* _unitTestOverrides;
	CKSchedulerActivity* _schedulerActivity;

}

@property (assign,nonatomic) BOOL hasQualityOfService;                                                       //@synthesize hasQualityOfService=_hasQualityOfService - In the implementation block
@property (assign,nonatomic) BOOL hasContainer;                                                              //@synthesize hasContainer=_hasContainer - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsCellularAccess;                                                   //@synthesize hasAllowsCellularAccess=_hasAllowsCellularAccess - In the implementation block
@property (assign,nonatomic) BOOL hasLongLived;                                                              //@synthesize hasLongLived=_hasLongLived - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForRequest;                                              //@synthesize hasTimeoutIntervalForRequest=_hasTimeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) BOOL hasTimeoutIntervalForResource;                                             //@synthesize hasTimeoutIntervalForResource=_hasTimeoutIntervalForResource - In the implementation block
@property (assign,nonatomic) BOOL hasAutomaticallyRetryNetworkFailures;                                      //@synthesize hasAutomaticallyRetryNetworkFailures=_hasAutomaticallyRetryNetworkFailures - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionaryNetworkBehavior;                                           //@synthesize hasDiscretionaryNetworkBehavior=_hasDiscretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivity;                                                            //@synthesize hasXPCActivity=_hasXPCActivity - In the implementation block
@property (assign,nonatomic) BOOL hasXPCActivityAutomaticallyDefer;                                          //@synthesize hasXPCActivityAutomaticallyDefer=_hasXPCActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL hasSchedulerActivity;                                                      //@synthesize hasSchedulerActivity=_hasSchedulerActivity - In the implementation block
@property (assign,nonatomic) BOOL hasDiscretionarySchedulingForEntireOperation;                              //@synthesize hasDiscretionarySchedulingForEntireOperation=_hasDiscretionarySchedulingForEntireOperation - In the implementation block
@property (assign,nonatomic) BOOL hasPreferAnonymousRequests;                                                //@synthesize hasPreferAnonymousRequests=_hasPreferAnonymousRequests - In the implementation block
@property (assign,nonatomic) BOOL hasAllowsBackgroundNetworking;                                             //@synthesize hasAllowsBackgroundNetworking=_hasAllowsBackgroundNetworking - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationBundleIdentifier;                                      //@synthesize hasSourceApplicationBundleIdentifier=_hasSourceApplicationBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSourceApplicationSecondaryIdentifier;                                   //@synthesize hasSourceApplicationSecondaryIdentifier=_hasSourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize hasApplicationBundleIdentifierOverrideForContainerAccess=_hasApplicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize hasApplicationBundleIdentifierOverrideForNetworkAttribution=_hasApplicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasAdditionalRequestHTTPHeaders;                                           //@synthesize hasAdditionalRequestHTTPHeaders=_hasAdditionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasIsCloudKitSupportOperation;                                             //@synthesize hasIsCloudKitSupportOperation=_hasIsCloudKitSupportOperation - In the implementation block
@property (assign,nonatomic) BOOL hasCacheDeleteAvailableSpaceClass;                                         //@synthesize hasCacheDeleteAvailableSpaceClass=_hasCacheDeleteAvailableSpaceClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unitTestOverrides;                                        //@synthesize unitTestOverrides=_unitTestOverrides - In the implementation block
@property (assign,nonatomic) BOOL xpcActivityAutomaticallyDefer;                                             //@synthesize xpcActivityAutomaticallyDefer=_xpcActivityAutomaticallyDefer - In the implementation block
@property (assign,nonatomic) BOOL discretionarySchedulingForEntireOperation;                                 //@synthesize discretionarySchedulingForEntireOperation=_discretionarySchedulingForEntireOperation - In the implementation block
@property (nonatomic,copy) NSString * _sourceApplicationSecondaryIdentifier;                                 //@synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL automaticallyRetryNetworkFailures;                                         //@synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcActivity;                                           //@synthesize xpcActivity=_xpcActivity - In the implementation block
@property (nonatomic,copy) CKSchedulerActivity * schedulerActivity;                                          //@synthesize schedulerActivity=_schedulerActivity - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryNetworkBehavior;                                //@synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior - In the implementation block
@property (assign,nonatomic) BOOL preferAnonymousRequests;                                                   //@synthesize preferAnonymousRequests=_preferAnonymousRequests - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                 //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;              //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier;                                     //@synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,copy) NSDictionary * additionalRequestHTTPHeaders;                                      //@synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders - In the implementation block
@property (assign,nonatomic) BOOL isCloudKitSupportOperation;                                                //@synthesize isCloudKitSupportOperation=_isCloudKitSupportOperation - In the implementation block
@property (nonatomic,copy) NSNumber * cacheDeleteAvailableSpaceClass;                                        //@synthesize cacheDeleteAvailableSpaceClass=_cacheDeleteAvailableSpaceClass - In the implementation block
@property (assign,nonatomic) BOOL allowsBackgroundNetworking;                                                //@synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                                                     //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;                                                      //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
@property (assign,getter=isLongLived,nonatomic) BOOL longLived;                                              //@synthesize longLived=_longLived - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForRequest;                                               //@synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest - In the implementation block
@property (assign,nonatomic) double timeoutIntervalForResource;                                              //@synthesize timeoutIntervalForResource=_timeoutIntervalForResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasLongLived;
-(void)setAdditionalRequestHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(BOOL)hasApplicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSchedulerActivity:(CKSchedulerActivity *)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForNetworkAttribution:(BOOL)arg1 ;
-(NSMutableDictionary *)unitTestOverrides;
-(BOOL)hasPreferAnonymousRequests;
-(void)setHasDiscretionaryNetworkBehavior:(BOOL)arg1 ;
-(void)setHasAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setCacheDeleteAvailableSpaceClass:(NSNumber *)arg1 ;
-(id)init;
-(void)setHasTimeoutIntervalForRequest:(BOOL)arg1 ;
-(void)setHasTimeoutIntervalForResource:(BOOL)arg1 ;
-(void)setHasXPCActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setHasLongLived:(BOOL)arg1 ;
-(BOOL)hasTimeoutIntervalForRequest;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)allowsBackgroundNetworking;
-(BOOL)hasAdditionalRequestHTTPHeaders;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(BOOL)hasContainer;
-(void)setXpcActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setHasApplicationBundleIdentifierOverrideForContainerAccess:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)hasSourceApplicationBundleIdentifier;
-(BOOL)isLongLived;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(void)setLongLived:(BOOL)arg1 ;
-(BOOL)hasIsCloudKitSupportOperation;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1 ;
-(BOOL)hasDiscretionaryNetworkBehavior;
-(BOOL)automaticallyRetryNetworkFailures;
-(void)set_sourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setHasQualityOfService:(BOOL)arg1 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)setHasCacheDeleteAvailableSpaceClass:(BOOL)arg1 ;
-(void)setTimeoutIntervalForResource:(double)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(void)setQualityOfServiceWithoutQoSChecks:(long long)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(id)description;
-(BOOL)hasXPCActivityAutomaticallyDefer;
-(BOOL)isCloudKitSupportOperation;
-(BOOL)hasSourceApplicationSecondaryIdentifier;
-(BOOL)hasApplicationBundleIdentifierOverrideForContainerAccess;
-(BOOL)hasSchedulerActivity;
-(BOOL)hasTimeoutIntervalForResource;
-(BOOL)discretionarySchedulingForEntireOperation;
-(double)timeoutIntervalForRequest;
-(void)setDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(void)setHasPreferAnonymousRequests:(BOOL)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(BOOL)hasAutomaticallyRetryNetworkFailures;
-(void)setXpcActivityAutomaticallyDefer:(BOOL)arg1 ;
-(void)setAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(NSString *)_sourceApplicationSecondaryIdentifier;
-(BOOL)allowsCellularAccess;
-(BOOL)hasXPCActivity;
-(void)setHasSourceApplicationBundleIdentifier:(BOOL)arg1 ;
-(void)setIsCloudKitSupportOperation:(BOOL)arg1 ;
-(void)setHasAdditionalRequestHTTPHeaders:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(void)setHasSchedulerActivity:(BOOL)arg1 ;
-(void)setHasXPCActivity:(BOOL)arg1 ;
-(BOOL)preferAnonymousRequests;
-(void)setAutomaticallyRetryNetworkFailuresIfNotSet:(BOOL)arg1 ;
-(void)setHasDiscretionarySchedulingForEntireOperation:(BOOL)arg1 ;
-(void)setUnitTestOverrides:(NSMutableDictionary *)arg1 ;
-(void)setHasSourceApplicationSecondaryIdentifier:(BOOL)arg1 ;
-(NSObject*<OS_xpc_object>)xpcActivity;
-(void)setAllowsBackgroundNetworking:(BOOL)arg1 ;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(void)setHasAutomaticallyRetryNetworkFailures:(BOOL)arg1 ;
-(long long)qualityOfService;
-(double)timeoutIntervalForResource;
-(BOOL)xpcActivityAutomaticallyDefer;
-(CKContainer *)container;
-(void)setHasAllowsCellularAccess:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasAllowsBackgroundNetworking;
-(CKSchedulerActivity *)schedulerActivity;
-(void)setHasIsCloudKitSupportOperation:(BOOL)arg1 ;
-(BOOL)hasQualityOfService;
-(BOOL)hasAllowsCellularAccess;
-(BOOL)hasCacheDeleteAvailableSpaceClass;
-(id)resolveAgainstGenericConfiguration:(id)arg1 ;
-(BOOL)hasDiscretionarySchedulingForEntireOperation;
-(void)setApplicationBundleIdentifierOverride:(id)arg1 ;
-(void)setPreferAnonymousRequests:(BOOL)arg1 ;
-(void)setHasContainer:(BOOL)arg1 ;
-(void)setTimeoutIntervalForRequest:(double)arg1 ;
@end

