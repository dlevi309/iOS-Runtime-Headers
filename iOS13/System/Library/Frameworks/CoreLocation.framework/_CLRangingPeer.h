/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _CLRangingPeer : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) unsigned long long macAddress; 
@property (nonatomic,copy,readonly) NSData * secureRangingKeyID; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)uintMacAddressFromString:(id)arg1 ;
+(id)hexStringMacAddressFromUInt:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2 ;
-(id)initWithMacAddressAsString:(id)arg1 secureRangingKeyID:(id)arg2 ;
-(unsigned long long)macAddress;
-(id)getMacAddressAsString;
-(NSData *)secureRangingKeyID;
-(BOOL)isEqualToPeer:(id)arg1 ;
-(id)initWithMacAddressAsData:(id)arg1 secureRangingKeyID:(id)arg2 ;
@end

