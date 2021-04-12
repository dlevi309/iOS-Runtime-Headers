/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSData;

@interface AFMyriadRecord : NSObject <NSCopying> {

	unsigned char _goodness;
	unsigned char _userConfidence;
	unsigned char _deviceGroup;
	unsigned char _deviceClass;
	unsigned char _productType;
	unsigned char _tieBreaker;
	BOOL _isMe;
	unsigned char _rawAudioGoodnessScore;
	unsigned char _bump;
	unsigned char _isCollectedFromContextCollector;
	BOOL _advertisementDataIsDirty;
	unsigned short _pHash;
	NSUUID* _deviceID;
	NSData* _advertisementData;

}

@property (assign,nonatomic) BOOL advertisementDataIsDirty;                              //@synthesize advertisementDataIsDirty=_advertisementDataIsDirty - In the implementation block
@property (assign,nonatomic) unsigned char rawAudioGoodnessScore;                        //@synthesize rawAudioGoodnessScore=_rawAudioGoodnessScore - In the implementation block
@property (assign,nonatomic) unsigned char bump;                                         //@synthesize bump=_bump - In the implementation block
@property (assign,nonatomic) unsigned char goodness;                                     //@synthesize goodness=_goodness - In the implementation block
@property (nonatomic,copy) NSData * advertisementData;                                   //@synthesize advertisementData=_advertisementData - In the implementation block
@property (assign,nonatomic) unsigned char userConfidence;                               //@synthesize userConfidence=_userConfidence - In the implementation block
@property (assign,nonatomic) unsigned short pHash;                                       //@synthesize pHash=_pHash - In the implementation block
@property (nonatomic,copy) NSUUID * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) unsigned char deviceGroup;                                  //@synthesize deviceGroup=_deviceGroup - In the implementation block
@property (assign,nonatomic) unsigned char deviceClass;                                  //@synthesize deviceClass=_deviceClass - In the implementation block
@property (assign,nonatomic) unsigned char productType;                                  //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) unsigned char tieBreaker;                                   //@synthesize tieBreaker=_tieBreaker - In the implementation block
@property (assign,nonatomic) BOOL isMe;                                                  //@synthesize isMe=_isMe - In the implementation block
@property (assign,nonatomic) unsigned char isCollectedFromContextCollector;              //@synthesize isCollectedFromContextCollector=_isCollectedFromContextCollector - In the implementation block
-(void)setDeviceID:(NSUUID *)arg1 ;
-(BOOL)isMe;
-(NSUUID *)deviceID;
-(unsigned char)bump;
-(unsigned short)pHash;
-(id)init;
-(BOOL)isSane;
-(unsigned char)productType;
-(unsigned char)deviceClass;
-(void)setProductType:(unsigned char)arg1 ;
-(BOOL)isATrump;
-(void)setIsMe:(BOOL)arg1 ;
-(id)description;
-(void)setDeviceClass:(unsigned char)arg1 ;
-(unsigned char)goodness;
-(void)setGoodness:(unsigned char)arg1 ;
-(id)initWithDeviceID:(id)arg1 data:(id)arg2 ;
-(void)setIsCollectedFromContextCollector:(unsigned char)arg1 ;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(void)setBump:(unsigned char)arg1 ;
-(unsigned char)tieBreaker;
-(unsigned long long)hash;
-(unsigned char)deviceGroup;
-(unsigned char)userConfidence;
-(BOOL)isSlowdown;
-(BOOL)isInEarTrump;
-(NSData *)advertisementData;
-(BOOL)isAContinuation;
-(void)setRawAudioGoodnessScore:(unsigned char)arg1 ;
-(void)setUserConfidence:(unsigned char)arg1 ;
-(void)setDeviceGroup:(unsigned char)arg1 ;
-(void)setTieBreaker:(unsigned char)arg1 ;
-(id)asAdvertisementData;
-(unsigned char)rawAudioGoodnessScore;
-(unsigned char)isCollectedFromContextCollector;
-(id)initWithAudioData:(id)arg1 ;
-(void)setRawAudioGoodnessScore:(unsigned char)arg1 withBump:(unsigned char)arg2 ;
-(void)adjustByMultiplier:(float)arg1 adding:(int)arg2 ;
-(BOOL)isCarplayTrump;
-(void)generateRandomConfidence;
-(void)generateTiebreaker;
-(BOOL)isALateSupressionTrumpFor:(id)arg1 ;
-(BOOL)isAnEmergency;
-(BOOL)isAnEmergencyHandled;
-(int)slowdownDelay;
-(BOOL)hasEqualAdvertismentData:(id)arg1 ;
-(BOOL)advertisementDataIsDirty;
-(void)setAdvertisementDataIsDirty:(BOOL)arg1 ;
-(void)setPHash:(unsigned short)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

