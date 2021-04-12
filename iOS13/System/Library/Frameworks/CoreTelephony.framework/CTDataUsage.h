/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)cellularHome;
-(unsigned long long)cellularRoaming;
-(unsigned long long)wifi;
-(void)setCellularHome:(unsigned long long)arg1 ;
-(void)setCellularRoaming:(unsigned long long)arg1 ;
-(void)setWifi:(unsigned long long)arg1 ;
-(id)initWithHome:(unsigned long long)arg1 roaming:(unsigned long long)arg2 wifi:(unsigned long long)arg3 ;
-(void)addUsage:(id)arg1 ;
@end

