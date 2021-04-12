/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isCellularDataEnabled;
-(BOOL)isAirplaneModeEnabled;
-(BOOL)isCellularDataCapable;
-(void)setCellularDataEnabled:(BOOL)arg1 ;
-(void)setAirplaneModeEnabled:(BOOL)arg1 ;
-(void)setCellularDataCapable:(BOOL)arg1 ;
@end

