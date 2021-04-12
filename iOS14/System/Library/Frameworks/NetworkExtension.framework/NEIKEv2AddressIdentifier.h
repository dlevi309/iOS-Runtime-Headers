/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Identifier.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {

	NWAddressEndpoint* _address;

}

@property (retain) NWAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
+(id)copyTypeDescription;
-(id)initWithAddress:(id)arg1 ;
-(id)identifierData;
-(id)stringValue;
-(NWAddressEndpoint *)address;
-(void)setAddress:(NWAddressEndpoint *)arg1 ;
-(unsigned long long)identifierType;
@end

