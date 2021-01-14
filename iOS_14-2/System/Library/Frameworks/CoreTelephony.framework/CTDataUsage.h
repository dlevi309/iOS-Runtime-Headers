/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cellularHome;
	unsigned long long _cellularRoaming;
	unsigned long long _wifi;

}

@property (assign,nonatomic) unsigned long long cellularHome;                 //@synthesize cellularHome=_cellularHome - In the implementation block
@property (assign,nonatomic) unsigned long long cellularRoaming;              //@synthesize cellularRoaming=_cellularRoaming - In the implementation block
@property (assign,nonatomic) unsigned long long wifi;                         //@synthesize wifi=_wifi - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)addUsage:(id)arg1 ;
-(unsigned long long)cellularHome;
-(id)initWithHome:(unsigned long long)arg1 roaming:(unsigned long long)arg2 wifi:(unsigned long long)arg3 ;
-(unsigned long long)cellularRoaming;
-(void)setCellularHome:(unsigned long long)arg1 ;
-(void)setCellularRoaming:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)wifi;
-(id)description;
-(void)setWifi:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

