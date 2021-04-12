/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString, NSNumber;

@interface CEMNetworkVPNDeclaration_DNS : CEMPayloadBase {

	NSArray* _payloadServerAddresses;
	NSArray* _payloadSearchDomains;
	NSString* _payloadDomainName;
	NSArray* _payloadSupplementalMatchDomains;
	NSNumber* _payloadSupplementalMatchDomainsNoSearch;

}

@property (nonatomic,copy) NSArray * payloadServerAddresses;                                //@synthesize payloadServerAddresses=_payloadServerAddresses - In the implementation block
@property (nonatomic,copy) NSArray * payloadSearchDomains;                                  //@synthesize payloadSearchDomains=_payloadSearchDomains - In the implementation block
@property (nonatomic,copy) NSString * payloadDomainName;                                    //@synthesize payloadDomainName=_payloadDomainName - In the implementation block
@property (nonatomic,copy) NSArray * payloadSupplementalMatchDomains;                       //@synthesize payloadSupplementalMatchDomains=_payloadSupplementalMatchDomains - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSupplementalMatchDomainsNoSearch;              //@synthesize payloadSupplementalMatchDomainsNoSearch=_payloadSupplementalMatchDomainsNoSearch - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithServerAddresses:(id)arg1 withSearchDomains:(id)arg2 withDomainName:(id)arg3 withSupplementalMatchDomains:(id)arg4 withSupplementalMatchDomainsNoSearch:(id)arg5 ;
+(id)buildRequiredOnlyWithServerAddresses:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSupplementalMatchDomains:(NSArray *)arg1 ;
-(NSArray *)payloadSupplementalMatchDomains;
-(void)setPayloadServerAddresses:(NSArray *)arg1 ;
-(void)setPayloadSearchDomains:(NSArray *)arg1 ;
-(void)setPayloadDomainName:(NSString *)arg1 ;
-(void)setPayloadSupplementalMatchDomainsNoSearch:(NSNumber *)arg1 ;
-(NSArray *)payloadServerAddresses;
-(NSArray *)payloadSearchDomains;
-(NSString *)payloadDomainName;
-(NSNumber *)payloadSupplementalMatchDomainsNoSearch;
@end

