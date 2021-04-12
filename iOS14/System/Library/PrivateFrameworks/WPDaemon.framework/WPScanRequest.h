/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
*/

#import <WPDaemon/WPDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSData, NSDictionary, NSArray;

@interface WPScanRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	BOOL _allowDuplicates;
	BOOL _scanWhenLocked;
	BOOL _activeScanning;
	BOOL _scanCache;
	BOOL _advBuffer;
	BOOL _priorityCritical;
	BOOL _range;
	BOOL _holdVoucher;
	NSNumber* _rssiThreshold;
	NSData* _blobValue;
	NSData* _maskValue;
	NSDictionary* _options;
	NSArray* _peers;
	double _updateTime;
	long long _nearbyScanMode;
	long long _advBufferMode;
	SCD_Struct_WP1 _scanningRates;

}

@property (assign) unsigned char clientType;                  //@synthesize clientType=_clientType - In the implementation block
@property (assign) SCD_Struct_WP1 scanningRates;              //@synthesize scanningRates=_scanningRates - In the implementation block
@property (assign) BOOL allowDuplicates;                      //@synthesize allowDuplicates=_allowDuplicates - In the implementation block
@property (assign) BOOL scanWhenLocked;                       //@synthesize scanWhenLocked=_scanWhenLocked - In the implementation block
@property (assign) BOOL activeScanning;                       //@synthesize activeScanning=_activeScanning - In the implementation block
@property (assign) BOOL scanCache;                            //@synthesize scanCache=_scanCache - In the implementation block
@property (retain) NSNumber * rssiThreshold;                  //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (nonatomic,retain) NSData * blobValue;              //@synthesize blobValue=_blobValue - In the implementation block
@property (nonatomic,retain) NSData * maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (retain) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
@property (retain) NSArray * peers;                           //@synthesize peers=_peers - In the implementation block
@property (assign) double updateTime;                         //@synthesize updateTime=_updateTime - In the implementation block
@property (assign) long long nearbyScanMode;                  //@synthesize nearbyScanMode=_nearbyScanMode - In the implementation block
@property (assign) BOOL advBuffer;                            //@synthesize advBuffer=_advBuffer - In the implementation block
@property (assign) long long advBufferMode;                   //@synthesize advBufferMode=_advBufferMode - In the implementation block
@property (assign) BOOL priorityCritical;                     //@synthesize priorityCritical=_priorityCritical - In the implementation block
@property (assign) BOOL range;                                //@synthesize range=_range - In the implementation block
@property (assign) BOOL holdVoucher;                          //@synthesize holdVoucher=_holdVoucher - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)scanCache;
-(double)updateTime;
-(NSArray *)peers;
-(NSNumber *)rssiThreshold;
-(void)setRange:(BOOL)arg1 ;
-(void)setRssiThreshold:(NSNumber *)arg1 ;
-(id)init;
-(BOOL)range;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(void)setScanCache:(BOOL)arg1 ;
-(id)description;
-(void)setUpdateTime:(double)arg1 ;
-(BOOL)allowDuplicates;
-(void)setAllowDuplicates:(BOOL)arg1 ;
-(void)setClientType:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)clientType;
-(void)setPeers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)maskValue;
-(void)setMaskValue:(NSData *)arg1 ;
-(void)setScanningRates:(SCD_Struct_WP1)arg1 ;
-(void)setActiveScanning:(BOOL)arg1 ;
-(void)setBlobValue:(NSData *)arg1 ;
-(SCD_Struct_WP1)scanningRates;
-(BOOL)holdVoucher;
-(void)setHoldVoucher:(BOOL)arg1 ;
-(void)setNearbyScanMode:(long long)arg1 ;
-(BOOL)scanWhenLocked;
-(void)setScanWhenLocked:(BOOL)arg1 ;
-(BOOL)activeScanning;
-(NSData *)blobValue;
-(long long)nearbyScanMode;
-(BOOL)advBuffer;
-(void)setAdvBuffer:(BOOL)arg1 ;
-(long long)advBufferMode;
-(void)setAdvBufferMode:(long long)arg1 ;
-(BOOL)priorityCritical;
-(void)setPriorityCritical:(BOOL)arg1 ;
@end

