/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/


@interface NRPairingCompatibilityVersionInfo : NSObject {

	BOOL _isOverrideActive;
	long long _pairingCompatibilityVersion;
	long long _maxPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersion;
	long long _minPairingCompatibilityVersionWithChipID;
	long long _minQuickSwitchCompatibilityVersion;

}

@property (assign,nonatomic) long long pairingCompatibilityVersion;                           //@synthesize pairingCompatibilityVersion=_pairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long maxPairingCompatibilityVersion;                        //@synthesize maxPairingCompatibilityVersion=_maxPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersion;                        //@synthesize minPairingCompatibilityVersion=_minPairingCompatibilityVersion - In the implementation block
@property (assign,nonatomic) long long minPairingCompatibilityVersionWithChipID;              //@synthesize minPairingCompatibilityVersionWithChipID=_minPairingCompatibilityVersionWithChipID - In the implementation block
@property (assign,nonatomic) long long minQuickSwitchCompatibilityVersion;                    //@synthesize minQuickSwitchCompatibilityVersion=_minQuickSwitchCompatibilityVersion - In the implementation block
@property (assign,nonatomic) BOOL isOverrideActive;                                           //@synthesize isOverrideActive=_isOverrideActive - In the implementation block
+(id)systemVersions;
+(unsigned long long)valueForToken:(int)arg1 ;
+(id)numberFromCFPrefs:(id)arg1 ;
+(id)stringFromCFPrefs:(id)arg1 ;
-(id)initInternal;
-(long long)minPairingCompatibilityVersionForChipID:(id)arg1 ;
-(long long)maxPairingCompatibilityVersion;
-(long long)minQuickSwitchPairingCompatibilityVersionForChipID:(id)arg1 ;
-(long long)minPairingCompatibilityVersionForChipID:(id)arg1 name:(id)arg2 defaultVersion:(long long)arg3 ;
-(long long)minPairingCompatibilityVersion;
-(long long)minQuickSwitchCompatibilityVersion;
-(long long)minPairingCompatibilityVersionWithChipID;
-(long long)pairingCompatibilityVersion;
-(BOOL)isOverrideActive;
-(void)setPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMaxPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersion:(long long)arg1 ;
-(void)setMinPairingCompatibilityVersionWithChipID:(long long)arg1 ;
-(void)setMinQuickSwitchCompatibilityVersion:(long long)arg1 ;
-(void)setIsOverrideActive:(BOOL)arg1 ;
@end

