/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKOperationConfiguration, NSString, CKContainerSetupInfo, CKOperationMMCSRequestOptions, CKOperationGroup, NSDictionary;

@interface CKOperationInfo : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isLongLived;
	BOOL _isOutstandingOperation;
	BOOL _wantsRequestStatistics;
	unsigned _clientSDKVersion;
	CKOperationConfiguration* _resolvedConfiguration;
	NSString* _operationID;
	NSString* _name;
	NSString* _parentSectionID;
	CKContainerSetupInfo* _setupInfo;
	NSString* _operationClass;
	NSString* _deviceIdentifier;
	CKOperationMMCSRequestOptions* _MMCSRequestOptions;
	CKOperationGroup* _group;
	CKOperationConfiguration* _perOpConfiguration;
	id _parentOperation;
	unsigned long long _duetPreClearedMode;
	unsigned long long _discretionaryWhenBackgroundedState;
	unsigned long long _systemScheduler;

}

@property (assign,nonatomic) unsigned long long duetPreClearedMode;                              //@synthesize duetPreClearedMode=_duetPreClearedMode - In the implementation block
@property (assign,nonatomic) unsigned long long discretionaryWhenBackgroundedState;              //@synthesize discretionaryWhenBackgroundedState=_discretionaryWhenBackgroundedState - In the implementation block
@property (assign,nonatomic) unsigned long long systemScheduler;                                 //@synthesize systemScheduler=_systemScheduler - In the implementation block
@property (nonatomic,retain) NSString * operationID;                                             //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentSectionID;                                         //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (assign,nonatomic) BOOL isLongLived;                                                   //@synthesize isLongLived=_isLongLived - In the implementation block
@property (assign,nonatomic) BOOL isOutstandingOperation;                                        //@synthesize isOutstandingOperation=_isOutstandingOperation - In the implementation block
@property (nonatomic,retain) CKContainerSetupInfo * setupInfo;                                   //@synthesize setupInfo=_setupInfo - In the implementation block
@property (nonatomic,retain) NSString * operationClass;                                          //@synthesize operationClass=_operationClass - In the implementation block
@property (nonatomic,retain) NSString * deviceIdentifier;                                        //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CKOperationMMCSRequestOptions * MMCSRequestOptions;                 //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) CKOperationGroup * group;                                           //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKOperationConfiguration * perOpConfiguration;                      //@synthesize perOpConfiguration=_perOpConfiguration - In the implementation block
@property (assign,nonatomic) unsigned clientSDKVersion;                                          //@synthesize clientSDKVersion=_clientSDKVersion - In the implementation block
@property (assign,nonatomic,__weak) id parentOperation;                                          //@synthesize parentOperation=_parentOperation - In the implementation block
@property (nonatomic,readonly) BOOL allowsCellularAccess; 
@property (nonatomic,readonly) long long qualityOfService; 
@property (nonatomic,readonly) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,readonly) NSString * sourceApplicationSecondaryIdentifier; 
@property (nonatomic,readonly) BOOL automaticallyRetryNetworkFailures; 
@property (nonatomic,readonly) unsigned long long discretionaryNetworkBehavior; 
@property (nonatomic,readonly) BOOL preferAnonymousRequests; 
@property (nonatomic,readonly) BOOL allowsBackgroundNetworking; 
@property (nonatomic,readonly) double timeoutIntervalForRequest; 
@property (nonatomic,readonly) double timeoutIntervalForResource; 
@property (nonatomic,readonly) NSDictionary * additionalRequestHTTPHeaders; 
@property (nonatomic,readonly) NSString * authPromptReason; 
@property (nonatomic,readonly) BOOL shouldSkipZonePCSUpdate; 
@property (nonatomic,readonly) BOOL isCloudKitSupportOperation; 
@property (assign,nonatomic) BOOL wantsRequestStatistics;                                        //@synthesize wantsRequestStatistics=_wantsRequestStatistics - In the implementation block
@property (nonatomic,readonly) CKOperationConfiguration * resolvedConfiguration;                 //@synthesize resolvedConfiguration=_resolvedConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setGroup:(CKOperationGroup *)arg1 ;
-(long long)qualityOfService;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(CKOperationGroup *)group;
-(double)timeoutIntervalForResource;
-(BOOL)allowsCellularAccess;
-(double)timeoutIntervalForRequest;
-(CKContainerSetupInfo *)setupInfo;
-(NSString *)operationID;
-(CKOperationConfiguration *)resolvedConfiguration;
-(BOOL)isLongLived;
-(NSString *)sourceApplicationBundleIdentifier;
-(unsigned)clientSDKVersion;
-(void)setClientSDKVersion:(unsigned)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(CKOperationConfiguration *)perOpConfiguration;
-(NSString *)operationClass;
-(unsigned long long)discretionaryNetworkBehavior;
-(BOOL)isOutstandingOperation;
-(void)setSystemScheduler:(unsigned long long)arg1 ;
-(void)setDuetPreClearedMode:(unsigned long long)arg1 ;
-(unsigned long long)duetPreClearedMode;
-(BOOL)automaticallyRetryNetworkFailures;
-(void)setDiscretionaryWhenBackgroundedState:(unsigned long long)arg1 ;
-(void)setPerOpConfiguration:(CKOperationConfiguration *)arg1 ;
-(void)setOperationID:(NSString *)arg1 ;
-(unsigned long long)discretionaryWhenBackgroundedState;
-(unsigned long long)systemScheduler;
-(void)setIsLongLived:(BOOL)arg1 ;
-(void)setParentSectionID:(NSString *)arg1 ;
-(void)setOperationClass:(NSString *)arg1 ;
-(void)setIsOutstandingOperation:(BOOL)arg1 ;
-(CKOperationMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKOperationMMCSRequestOptions *)arg1 ;
-(void)setWantsRequestStatistics:(BOOL)arg1 ;
-(void)setSetupInfo:(CKContainerSetupInfo *)arg1 ;
-(NSString *)parentSectionID;
-(BOOL)preferAnonymousRequests;
-(BOOL)allowsBackgroundNetworking;
-(NSDictionary *)additionalRequestHTTPHeaders;
-(BOOL)shouldSkipZonePCSUpdate;
-(BOOL)isCloudKitSupportOperation;
-(id)parentOperation;
-(void)setParentOperation:(id)arg1 ;
-(BOOL)wantsRequestStatistics;
-(NSString *)authPromptReason;
-(void)takeValuesFrom:(id)arg1 ;
@end

