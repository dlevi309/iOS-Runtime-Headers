/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFThermalBlockProvider.h>

@class NSUUID, NSHashTable, SBExternalWifiDefaults, SBThermalDefaults, SBSecurityDefaults, NSString;

@interface SBThermalController : NSObject <SBFThermalBlockProvider> {

	NSUUID* _samplingToken;
	int _hotToken;
	unsigned long long _hotLevel;
	int _coldToken;
	unsigned long long _coldLevel;
	int _sunToken;
	unsigned long long _sunLevel;
	long long _level;
	BOOL _inSunlight;
	NSHashTable* _observers;
	SBExternalWifiDefaults* _networkDefaults;
	SBThermalDefaults* _thermalDefaults;
	SBSecurityDefaults* _securityDefaults;

}

@property (nonatomic,readonly) long long level;                                  //@synthesize level=_level - In the implementation block
@property (getter=isInSunlight,nonatomic,readonly) BOOL inSunlight;              //@synthesize inSunlight=_inSunlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)logThermalEvent:(id)arg1 ;
-(void)_setBlocked:(BOOL)arg1 ;
-(void)addThermalObserver:(id)arg1 ;
-(id)init;
-(BOOL)isThermalBlocked;
-(BOOL)isInSunlight;
-(BOOL)_isBlocked;
-(NSString *)description;
-(long long)level;
-(void)_respondToCurrentThermalCondition;
-(void)startListeningForThermalEvents;
-(void)_updateThermalJetsamCPUSamplingState;
-(void)removeThermalObserver:(id)arg1 ;
-(void)dealloc;
@end

