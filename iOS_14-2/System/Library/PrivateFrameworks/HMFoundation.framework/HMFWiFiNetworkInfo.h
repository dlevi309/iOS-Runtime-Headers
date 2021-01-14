/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFMACAddress, NSString, NSArray;

@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding> {

	HMFMACAddress* _MACAddress;
	NSString* _SSID;

}

@property (copy,readonly) HMFMACAddress * MACAddress;                             //@synthesize MACAddress=_MACAddress - In the implementation block
@property (setter=SID,copy,readonly) NSString * SSID;                             //@synthesize SSID=_SSID - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)SSID;
-(HMFMACAddress *)MACAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)propertyDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMACAddress:(id)arg1 SSID:(id)arg2 ;
-(BOOL)isEqualToNetworkInfo:(id)arg1 ;
@end

