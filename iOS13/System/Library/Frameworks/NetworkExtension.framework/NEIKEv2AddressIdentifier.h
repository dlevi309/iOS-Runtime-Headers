/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NEIKEv2Identifier.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {

	NWAddressEndpoint* _address;

}

@property (retain) NWAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
+(id)copyTypeDescription;
-(id)stringValue;
-(NWAddressEndpoint *)address;
-(unsigned long long)identifierType;
-(id)initWithAddress:(id)arg1 ;
-(void)setAddress:(NWAddressEndpoint *)arg1 ;
-(id)identifierData;
@end

