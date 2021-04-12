/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface WPZoneTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	BOOL _scanWhenScreenOff;
	NSMutableSet* _zones;
	SCD_Struct_WP1 _scanningRates;

}

@property (assign) unsigned char clientType;                  //@synthesize clientType=_clientType - In the implementation block
@property (assign) SCD_Struct_WP1 scanningRates;              //@synthesize scanningRates=_scanningRates - In the implementation block
@property (assign) BOOL scanWhenScreenOff;                    //@synthesize scanWhenScreenOff=_scanWhenScreenOff - In the implementation block
@property (retain) NSMutableSet * zones;                      //@synthesize zones=_zones - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableSet *)zones;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setZones:(NSMutableSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(BOOL)scanWhenScreenOff;
-(void)setScanWhenScreenOff:(BOOL)arg1 ;
@end

