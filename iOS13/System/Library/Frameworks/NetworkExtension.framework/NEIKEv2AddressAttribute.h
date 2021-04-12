/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2ConfigurationAttribute.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWAddressEndpoint;

@interface NEIKEv2AddressAttribute : NEIKEv2ConfigurationAttribute <NSCopying> {

	NWAddressEndpoint* _address;
	unsigned long long _customType;

}

@property (assign,nonatomic) unsigned long long customType;              //@synthesize customType=_customType - In the implementation block
@property (retain) NWAddressEndpoint * address;                          //@synthesize address=_address - In the implementation block
+(id)copyTypeDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NWAddressEndpoint *)address;
-(unsigned long long)attributeType;
-(id)initWithAddress:(id)arg1 ;
-(void)setAddress:(NWAddressEndpoint *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)customType;
-(void)setCustomType:(unsigned long long)arg1 ;
-(id)initCustomWithAttributeType:(unsigned long long)arg1 attributeName:(id)arg2 addressValue:(id)arg3 ;
@end

