/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding> {

	NSData* _primaryMACAddress;
	NSArray* _additionalMACAddresses;

}

@property (nonatomic,readonly) NSData * primaryMACAddress;                    //@synthesize primaryMACAddress=_primaryMACAddress - In the implementation block
@property (nonatomic,readonly) NSArray * additionalMACAddresses;              //@synthesize additionalMACAddresses=_additionalMACAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)primaryMACAddress;
-(id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2 ;
-(NSArray *)additionalMACAddresses;
@end

