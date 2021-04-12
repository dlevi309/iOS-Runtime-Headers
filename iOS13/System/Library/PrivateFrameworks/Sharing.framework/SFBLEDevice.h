/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, NSUUID, NSString, SFProximityEstimator, RPIdentity;

@interface SFBLEDevice : NSObject <NSSecureCoding> {

	char _rssiHistory[8];
	unsigned char _rssiCount;
	unsigned char _rssiIndex;
	BOOL _insideBubble;
	BOOL _insideSmallBubble;
	BOOL _insideMediumBubble;
	BOOL _paired;
	BOOL _tempPaired;
	BOOL _triggered;
	int _rssiEstimate;
	unsigned _connectedServices;
	unsigned _productID2;
	NSData* _advertisementData;
	NSDictionary* _advertisementFields;
	NSData* _bluetoothAddress;
	NSUUID* _counterpartIdentifier;
	long long _distance;
	unsigned long long _foundTicks;
	NSUUID* _identifier;
	NSString* _name;
	long long _rssi;
	long long _rssiCeiling;
	long long _rssiFloor;
	long long _smoothedRSSI;
	SFProximityEstimator* _closeProximityEstimatorSmall;
	SFProximityEstimator* _closeProximityEstimatorMedium;
	SFProximityEstimator* _infoProximityEstimator;
	double _lastSeen;
	double _pairCheckTime;
	SFProximityEstimator* _proxPairProximityEstimator;
	SFProximityEstimator* _setupProximityEstimator;
	RPIdentity* _rpIdentity;

}

@property (nonatomic,copy) NSData * advertisementData;                                          //@synthesize advertisementData=_advertisementData - In the implementation block
@property (nonatomic,copy) NSDictionary * advertisementFields;                                  //@synthesize advertisementFields=_advertisementFields - In the implementation block
@property (nonatomic,copy) NSData * bluetoothAddress;                                           //@synthesize bluetoothAddress=_bluetoothAddress - In the implementation block
@property (nonatomic,retain) SFProximityEstimator * closeProximityEstimatorSmall;               //@synthesize closeProximityEstimatorSmall=_closeProximityEstimatorSmall - In the implementation block
@property (nonatomic,retain) SFProximityEstimator * closeProximityEstimatorMedium;              //@synthesize closeProximityEstimatorMedium=_closeProximityEstimatorMedium - In the implementation block
@property (assign,nonatomic) unsigned connectedServices;                                        //@synthesize connectedServices=_connectedServices - In the implementation block
@property (nonatomic,copy) NSUUID * counterpartIdentifier;                                      //@synthesize counterpartIdentifier=_counterpartIdentifier - In the implementation block
@property (assign,nonatomic) long long distance;                                                //@synthesize distance=_distance - In the implementation block
@property (assign,nonatomic) unsigned long long foundTicks;                                     //@synthesize foundTicks=_foundTicks - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) SFProximityEstimator * infoProximityEstimator;                     //@synthesize infoProximityEstimator=_infoProximityEstimator - In the implementation block
@property (assign,nonatomic) BOOL insideBubble;                                                 //@synthesize insideBubble=_insideBubble - In the implementation block
@property (assign,nonatomic) BOOL insideSmallBubble;                                            //@synthesize insideSmallBubble=_insideSmallBubble - In the implementation block
@property (assign,nonatomic) BOOL insideMediumBubble;                                           //@synthesize insideMediumBubble=_insideMediumBubble - In the implementation block
@property (nonatomic,copy) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double lastSeen;                                                   //@synthesize lastSeen=_lastSeen - In the implementation block
@property (assign,nonatomic) double pairCheckTime;                                              //@synthesize pairCheckTime=_pairCheckTime - In the implementation block
@property (assign,nonatomic) BOOL paired;                                                       //@synthesize paired=_paired - In the implementation block
@property (assign,nonatomic) unsigned productID2;                                               //@synthesize productID2=_productID2 - In the implementation block
@property (nonatomic,retain) SFProximityEstimator * proxPairProximityEstimator;                 //@synthesize proxPairProximityEstimator=_proxPairProximityEstimator - In the implementation block
@property (nonatomic,retain) SFProximityEstimator * setupProximityEstimator;                    //@synthesize setupProximityEstimator=_setupProximityEstimator - In the implementation block
@property (nonatomic,retain) RPIdentity * rpIdentity;                                           //@synthesize rpIdentity=_rpIdentity - In the implementation block
@property (assign,nonatomic) long long rssi;                                                    //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) long long rssiCeiling;                                             //@synthesize rssiCeiling=_rssiCeiling - In the implementation block
@property (assign,nonatomic) int rssiEstimate;                                                  //@synthesize rssiEstimate=_rssiEstimate - In the implementation block
@property (assign,nonatomic) long long rssiFloor;                                               //@synthesize rssiFloor=_rssiFloor - In the implementation block
@property (assign,nonatomic) long long smoothedRSSI;                                            //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (assign,nonatomic) BOOL tempPaired;                                                   //@synthesize tempPaired=_tempPaired - In the implementation block
@property (assign,nonatomic) BOOL triggered;                                                    //@synthesize triggered=_triggered - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)setRSSIEstimatorInfo:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(long long)rssi;
-(void)setDistance:(long long)arg1 ;
-(long long)distance;
-(void)setRssi:(long long)arg1 ;
-(BOOL)triggered;
-(void)setTriggered:(BOOL)arg1 ;
-(void)setConnectedServices:(unsigned)arg1 ;
-(unsigned)connectedServices;
-(BOOL)paired;
-(void)setPaired:(BOOL)arg1 ;
-(NSData *)advertisementData;
-(BOOL)updateRSSI:(long long)arg1 ;
-(void)setAdvertisementData:(NSData *)arg1 ;
-(NSDictionary *)advertisementFields;
-(void)setAdvertisementFields:(NSDictionary *)arg1 ;
-(NSData *)bluetoothAddress;
-(void)setBluetoothAddress:(NSData *)arg1 ;
-(NSUUID *)counterpartIdentifier;
-(void)setCounterpartIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)foundTicks;
-(void)setFoundTicks:(unsigned long long)arg1 ;
-(BOOL)insideBubble;
-(void)setInsideBubble:(BOOL)arg1 ;
-(int)rssiEstimate;
-(void)setRssiEstimate:(int)arg1 ;
-(long long)rssiCeiling;
-(void)setRssiCeiling:(long long)arg1 ;
-(long long)rssiFloor;
-(void)setRssiFloor:(long long)arg1 ;
-(long long)smoothedRSSI;
-(void)setSmoothedRSSI:(long long)arg1 ;
-(SFProximityEstimator *)closeProximityEstimatorSmall;
-(void)setCloseProximityEstimatorSmall:(SFProximityEstimator *)arg1 ;
-(SFProximityEstimator *)closeProximityEstimatorMedium;
-(void)setCloseProximityEstimatorMedium:(SFProximityEstimator *)arg1 ;
-(SFProximityEstimator *)infoProximityEstimator;
-(void)setInfoProximityEstimator:(SFProximityEstimator *)arg1 ;
-(BOOL)insideSmallBubble;
-(void)setInsideSmallBubble:(BOOL)arg1 ;
-(BOOL)insideMediumBubble;
-(void)setInsideMediumBubble:(BOOL)arg1 ;
-(double)lastSeen;
-(void)setLastSeen:(double)arg1 ;
-(double)pairCheckTime;
-(void)setPairCheckTime:(double)arg1 ;
-(unsigned)productID2;
-(void)setProductID2:(unsigned)arg1 ;
-(SFProximityEstimator *)proxPairProximityEstimator;
-(void)setProxPairProximityEstimator:(SFProximityEstimator *)arg1 ;
-(SFProximityEstimator *)setupProximityEstimator;
-(void)setSetupProximityEstimator:(SFProximityEstimator *)arg1 ;
-(RPIdentity *)rpIdentity;
-(void)setRpIdentity:(RPIdentity *)arg1 ;
-(BOOL)tempPaired;
-(void)setTempPaired:(BOOL)arg1 ;
@end

