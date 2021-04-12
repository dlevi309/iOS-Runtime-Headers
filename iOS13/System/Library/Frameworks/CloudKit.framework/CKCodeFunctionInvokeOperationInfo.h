/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSData, NSURL;

@interface CKCodeFunctionInvokeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _local;
	BOOL _shouldFetchAssetContentInMemory;
	NSString* _serviceName;
	NSString* _functionName;
	NSArray* _requestLocalSerializations;
	NSArray* _requestLocalEnvelopes;
	NSData* _permittedRemoteMeasurement;
	NSURL* _explicitBaseURL;

}

@property (nonatomic,copy) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * functionName;                             //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalSerializations;                //@synthesize requestLocalSerializations=_requestLocalSerializations - In the implementation block
@property (nonatomic,copy) NSArray * requestLocalEnvelopes;                     //@synthesize requestLocalEnvelopes=_requestLocalEnvelopes - In the implementation block
@property (nonatomic,copy) NSData * permittedRemoteMeasurement;                 //@synthesize permittedRemoteMeasurement=_permittedRemoteMeasurement - In the implementation block
@property (nonatomic,copy) NSURL * explicitBaseURL;                             //@synthesize explicitBaseURL=_explicitBaseURL - In the implementation block
@property (assign,nonatomic) BOOL local;                                        //@synthesize local=_local - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;              //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setFunctionName:(NSString *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(BOOL)local;
-(void)setLocal:(BOOL)arg1 ;
-(NSURL *)explicitBaseURL;
-(void)setExplicitBaseURL:(NSURL *)arg1 ;
-(NSArray *)requestLocalSerializations;
-(NSArray *)requestLocalEnvelopes;
-(NSData *)permittedRemoteMeasurement;
-(void)setRequestLocalSerializations:(NSArray *)arg1 ;
-(void)setRequestLocalEnvelopes:(NSArray *)arg1 ;
-(void)setPermittedRemoteMeasurement:(NSData *)arg1 ;
@end

