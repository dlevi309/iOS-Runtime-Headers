/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableSet *)zones;
-(unsigned char)clientType;
-(void)setClientType:(unsigned char)arg1 ;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(BOOL)scanWhenScreenOff;
-(void)setScanWhenScreenOff:(BOOL)arg1 ;
-(void)setZones:(NSMutableSet *)arg1 ;
@end

