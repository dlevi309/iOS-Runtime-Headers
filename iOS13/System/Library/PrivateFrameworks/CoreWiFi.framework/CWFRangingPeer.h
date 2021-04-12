/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)MACAddress;
-(void)setMACAddress:(NSString *)arg1 ;
-(void)setPMK:(NSData *)arg1 ;
-(unsigned long long)numberOfMeasurements;
-(NSData *)PMK;
-(BOOL)isEqualToRangingPeer:(id)arg1 ;
-(void)setNumberOfMeasurements:(unsigned long long)arg1 ;
@end

