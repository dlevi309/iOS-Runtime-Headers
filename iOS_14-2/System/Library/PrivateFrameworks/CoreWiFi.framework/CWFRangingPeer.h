/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding> {

	NSString* _MACAddress;
	NSData* _PMK;
	unsigned long long _numberOfMeasurements;

}

@property (nonatomic,copy) NSString * MACAddress;                                  //@synthesize MACAddress=_MACAddress - In the implementation block
@property (nonatomic,copy) NSData * PMK;                                           //@synthesize PMK=_PMK - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMeasurements;              //@synthesize numberOfMeasurements=_numberOfMeasurements - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)rangingPeerWithMACAddress:(id)arg1 PMK:(id)arg2 ;
-(NSData *)PMK;
-(NSString *)MACAddress;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setPMK:(NSData *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMACAddress:(NSString *)arg1 ;
-(unsigned long long)numberOfMeasurements;
-(BOOL)isEqualToRangingPeer:(id)arg1 ;
-(void)setNumberOfMeasurements:(unsigned long long)arg1 ;
@end

