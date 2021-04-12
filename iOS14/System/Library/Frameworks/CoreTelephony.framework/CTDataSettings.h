/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataSettings : NSObject <NSCopying, NSSecureCoding> {

	BOOL _cellularDataEnabled;
	BOOL _airplaneModeEnabled;
	BOOL _cellularDataCapable;

}

@property (assign,getter=isCellularDataEnabled,nonatomic) BOOL cellularDataEnabled;              //@synthesize cellularDataEnabled=_cellularDataEnabled - In the implementation block
@property (assign,getter=isAirplaneModeEnabled,nonatomic) BOOL airplaneModeEnabled;              //@synthesize airplaneModeEnabled=_airplaneModeEnabled - In the implementation block
@property (assign,getter=isCellularDataCapable,nonatomic) BOOL cellularDataCapable;              //@synthesize cellularDataCapable=_cellularDataCapable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isAirplaneModeEnabled;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isCellularDataCapable;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setCellularDataCapable:(BOOL)arg1 ;
-(BOOL)isCellularDataEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

