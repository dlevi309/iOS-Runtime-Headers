/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
@class NSData;

@interface ENAdvertisement : NSObject {

	char _typicalRSSI;
	char _maxRSSI;
	BOOL _saturated;
	unsigned char _counter;
	unsigned short _scanInterval;
	NSData* _rpi;
	NSData* _encryptedAEM;
	double _timestamp;

}

@property (nonatomic,retain) NSData * rpi;                             //@synthesize rpi=_rpi - In the implementation block
@property (nonatomic,retain) NSData * encryptedAEM;                    //@synthesize encryptedAEM=_encryptedAEM - In the implementation block
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) unsigned short scanInterval;              //@synthesize scanInterval=_scanInterval - In the implementation block
@property (assign,nonatomic) char typicalRSSI;                         //@synthesize typicalRSSI=_typicalRSSI - In the implementation block
@property (assign,nonatomic) char maxRSSI;                             //@synthesize maxRSSI=_maxRSSI - In the implementation block
@property (assign,nonatomic) BOOL saturated;                           //@synthesize saturated=_saturated - In the implementation block
@property (assign,nonatomic) unsigned char counter;                    //@synthesize counter=_counter - In the implementation block
+(id)decryptedMetadataForTemporaryExposureKey:(id)arg1 encryptedAEM:(const SCD_Struct_EN5*)arg2 RPI:(const SCD_Struct_EN6*)arg3 ;
-(unsigned short)scanInterval;
-(NSData *)rpi;
-(BOOL)saturated;
-(double)timestamp;
-(void)setScanInterval:(unsigned short)arg1 ;
-(unsigned char)counter;
-(id)description;
-(char)maxRSSI;
-(void)setRpi:(NSData *)arg1 ;
-(void)setCounter:(unsigned char)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(id)initWithStructRepresentation:(SCD_Struct_EN7)arg1 ;
-(id)initWithRPI:(id)arg1 encryptedAEM:(id)arg2 timestamp:(double)arg3 scanInterval:(unsigned short)arg4 typicalRSSI:(char)arg5 maxRSSI:(char)arg6 saturated:(BOOL)arg7 counter:(unsigned char)arg8 ;
-(char)typicalRSSI;
-(SCD_Struct_EN7)structRepresentation;
-(void)combineWithAdvertisement:(id)arg1 ;
-(id)decryptedMetadataForTemporaryExposureKey:(id)arg1 ;
-(NSData *)encryptedAEM;
-(void)setEncryptedAEM:(NSData *)arg1 ;
-(void)setTypicalRSSI:(char)arg1 ;
-(void)setMaxRSSI:(char)arg1 ;
-(void)setSaturated:(BOOL)arg1 ;
@end

