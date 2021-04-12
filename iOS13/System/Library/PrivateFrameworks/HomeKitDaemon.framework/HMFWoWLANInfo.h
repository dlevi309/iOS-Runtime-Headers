/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(NSData *)primaryMACAddress;
-(id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2 ;
-(NSArray *)additionalMACAddresses;
@end

