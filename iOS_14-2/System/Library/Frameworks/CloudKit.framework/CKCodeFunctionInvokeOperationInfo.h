/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldSendRecordPCSKeys;
	BOOL _enqueuedOnContainerService;
	BOOL _legacyIsLocalBit;
	BOOL _shouldFetchAssetContentInMemory;
	NSString* _serviceName;
	NSString* _functionName;
	NSArray* _requestLocalSerializations;
	NSArray* _requestLocalEnvelopes;
	NSData* _permittedRemoteMeasurement;
	NSURL* _clientRuntimeProvidedServiceURL;
	NSURL* _resolvedBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                              //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalSerializations;                 //@synthesize requestLocalSerializations=_requestLocalSerializations - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalEnvelopes;                      //@synthesize requestLocalEnvelopes=_requestLocalEnvelopes - In the implementation block
@property (nonatomic,copy) NSData * permittedRemoteMeasurement;                  //@synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement - In the implementation block
@property (assign,nonatomic) BOOL shouldSendRecordPCSKeys;                       //@synthesize shouldSendRecordPCSKeys=_shouldSendRecordPCSKeys - In the implementation block
@property (assign,nonatomic) BOOL enqueuedOnContainerService;                    //@synthesize enqueuedOnContainerService=_enqueuedOnContainerService - In the implementation block
@property (nonatomic,copy) NSURL * clientRuntimeProvidedServiceURL;              //@synthesize clientRuntimeProvidedServiceURL=_clientRuntimeProvidedServiceURL - In the implementation block
@property (assign,nonatomic) BOOL legacyIsLocalBit;                              //@synthesize legacyIsLocalBit=_legacyIsLocalBit - In the implementation block
@property (nonatomic,copy) NSURL * resolvedBaseURL;                              //@synthesize resolvedBaseURL=_resolvedBaseURL - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;               //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyDefaultParametersToServiceURLComponents:(id)arg1 ;
-(void)setRequestLocalSerializations:(NSArray *)arg1 ;
-(NSArray *)requestLocalSerializations;
-(void)setClientRuntimeProvidedServiceURL:(NSURL *)arg1 ;
-(void)setEnqueuedOnContainerService:(BOOL)arg1 ;
-(void)setLegacyIsLocalBit:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)functionName;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(NSURL *)resolvedBaseURL;
-(BOOL)legacyIsLocalBit;
-(NSURL *)clientRuntimeProvidedServiceURL;
-(NSArray *)requestLocalEnvelopes;
-(NSData *)permittedRemoteMeasurement;
-(BOOL)shouldSendRecordPCSKeys;
-(void)setResolvedBaseURL:(NSURL *)arg1 ;
-(BOOL)enqueuedOnContainerService;
-(void)setRequestLocalEnvelopes:(NSArray *)arg1 ;
-(void)setPermittedRemoteMeasurement:(NSData *)arg1 ;
-(void)setShouldSendRecordPCSKeys:(BOOL)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(id)initWithCoder:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
@end

