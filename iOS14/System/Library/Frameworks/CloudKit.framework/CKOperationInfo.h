/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKOperationConfiguration, NSString, CKContainerSetupInfo, CKOperationMMCSRequestOptions, CKOperationGroup, NSDictionary, NSNumber;

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isLongLived;
	BOOL _isOutstandingOperation;
	BOOL _clientHasValidatedEntitlements;
	BOOL _wantsRequestStatistics;
	unsigned _clientSDKVersion;
	CKOperationConfiguration* _resolvedConfiguration;
	NSString* _operationID;
	NSString* _name;
	NSString* _parentSectionID;
	CKContainerSetupInfo* _setupInfo;
	NSString* _ckOperationClassName;
	NSString* _operationDaemonCallbackProtocolName;
	NSString* _deviceIdentifier;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;
	CKOperationGroup* _group;
	CKOperationConfiguration* _perOpConfiguration;
	id _parentOperation;
	unsigned long long _duetPreClearedMode;
	unsigned long long _discretionaryWhenBackgroundedState;
	unsigned long long _systemScheduler;

}

@property (nonatomic,retain) NSString * operationID;                                                             //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                                         //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (assign,nonatomic) BOOL isLongLived;                                                                   //@synthesize isLongLived=_isLongLived - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                                        //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * setupInfo;                                                   //@synthesize setupInfo=_setupInfo - In the implementation block
@property (nonatomic,retain) NSString * ckOperationClassName;                                                    //@synthesize ckOperationClassName=_ckOperationClassName - In the implementation block
@property (nonatomic,retain) NSString * operationDaemonCallbackProtocolName;                                     //@synthesize operationDaemonCallbackProtocolName=_operationDaemonCallbackProtocolName - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                                        //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                                 //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                                           //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKOperationConfiguration * perOpConfiguration;                                      //@synthesize perOpConfiguration=_perOpConfiguration - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                                          //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic) BOOL clientHasValidatedEntitlements;                                                //@synthesize clientHasValidatedEntitlements=_clientHasValidatedEntitlements - In the implementation block
@property (assign,nonatomic,__weak) id parentOperation;                                                          //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierOverrideForContainerAccess; 
@property (nonatomic,readonly) NSString * applicationBundleIdentifierOverrideForNetworkAttribution; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) BOOL automaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long discretionaryNetworkBehavior; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) double timeoutIntervalForRequest; 
@property (nonatomic,readonly) double timeoutIntervalForResource; 
@property (nonatomic,readonly) NSDictionary * additionalRequestHTTPHeaders; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL isCloudKitSupportOperation; 
@property (nonatomic,readonly) NSNumber * cacheDeleteAvailableSpaceClass; 
@property (assign,nonatomic) BOOL wantsRequestStatistics;                                                        //@synthesize wantsRequestStatistics=_wantsRequestStatistics - In the implementation block
@property (nonatomic,readonly) CKOperationConfiguration * resolvedConfiguration;                                 //@synthesize resolvedConfiguration=_resolvedConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long duetPreClearedMode;                                              //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryWhenBackgroundedState;                              //@synthesize discretionaryWhenBackgroundedState=_discretionaryWhenBackgroundedState - In the implementation block
@property (assign,nonatomic) unsigned long long systemScheduler;                                                 //@synthesize systemScheduler=_systemScheduler - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(NSString *)deviceIdentifier;
-(CKOperationGroup *)group;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(unsigned long long)systemScheduler;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(NSString *)operationID;
-(id)init;
-(void)setOperationID:(NSString *)arg1 ;
-(BOOL)isOutstandingOperation;
-(void)setSystemScheduler:(unsigned long long)arg1 ;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(void)setSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(void)setIsLongLived:(BOOL)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(void)setPerOpConfiguration:(CKOperationConfiguration *)arg1 ;
-(unsigned long long)discretionaryWhenBackgroundedState;
-(NSString *)parentSectionID;
-(void)setDiscretionaryWhenBackgroundedState:(unsigned long long)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setCkOperationClassName:(NSString *)arg1 ;
-(void)setOperationDaemonCallbackProtocolName:(NSString *)arg1 ;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(void)setWantsRequestStatistics:(BOOL)arg1 ;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)allowsBackgroundNetworking;
-(void)takeValuesFrom:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isLongLived;
-(NSNumber *)cacheDeleteAvailableSpaceClass;
-(BOOL)automaticallyRetryNetworkFailures;
-(CKContainerSetupInfo *)setupInfo;
-(void)setParentOperation:(id)arg1 ;
-(id)parentOperation;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(NSString *)name;
-(unsigned)clientSDKVersion;
-(BOOL)isCloudKitSupportOperation;
-(NSString *)operationDaemonCallbackProtocolName;
-(BOOL)clientHasValidatedEntitlements;
-(void)setClientHasValidatedEntitlements:(BOOL)arg1 ;
-(BOOL)wantsRequestStatistics;
-(NSString *)authPromptReason;
-(double)timeoutIntervalForRequest;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(CKOperationConfiguration *)resolvedConfiguration;
-(BOOL)allowsCellularAccess;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(CKOperationConfiguration *)perOpConfiguration;
-(NSString *)ckOperationClassName;
-(BOOL)preferAnonymousRequests;
-(void)setName:(NSString *)arg1 ;
-(long long)qualityOfService;
-(double)timeoutIntervalForResource;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

