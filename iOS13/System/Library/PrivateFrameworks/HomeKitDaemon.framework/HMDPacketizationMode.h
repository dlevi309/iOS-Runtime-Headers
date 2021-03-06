/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDNumberParser.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMDPacketizationMode : HMDNumberParser <NSSecureCoding> {

	unsigned long long _packetizationMode;

}

@property (nonatomic,readonly) unsigned long long packetizationMode;              //@synthesize packetizationMode=_packetizationMode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)arrayWithModes:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)packetizationMode;
-(id)initWithPacketizationMode:(unsigned long long)arg1 ;
@end

