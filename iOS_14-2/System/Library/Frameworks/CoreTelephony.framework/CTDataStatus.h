/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CTDataStatus : NSObject <NSCopying, NSSecureCoding> {

	BOOL _attached;
	BOOL _roamAllowed;
	BOOL _dataPlanSignalingReductionOverride;
	BOOL _cellularDataPossible;
	BOOL _inHomeCountry;
	int _indicator;
	int _indicatorOverride;
	int _radioTechnology;
	int _dataBearerTechnology;
	unsigned _dataBearerSoMask;
	unsigned _activeContexts;
	unsigned _totalActiveContexts;

}

@property (nonatomic,readonly) BOOL newRadioCoverage; 
@property (nonatomic,readonly) BOOL newRadioSaCoverage; 
@property (nonatomic,readonly) BOOL newRadioNsaCoverage; 
@property (nonatomic,readonly) BOOL newRadioDataBearer; 
@property (nonatomic,readonly) BOOL newRadioSaDataBearer; 
@property (nonatomic,readonly) BOOL newRadioNsaDataBearer; 
@property (nonatomic,readonly) BOOL newRadioMmWaveDataBearer; 
@property (nonatomic,readonly) BOOL newRadioSub6DataBearer; 
@property (assign,nonatomic) BOOL attached;                                        //@synthesize attached=_attached - In the implementation block
@property (assign,nonatomic) int indicator;                                        //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) int indicatorOverride;                                //@synthesize indicatorOverride=_indicatorOverride - In the implementation block
@property (assign,nonatomic) BOOL roamAllowed;                                     //@synthesize roamAllowed=_roamAllowed - In the implementation block
@property (assign,nonatomic) int radioTechnology;                                  //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign,nonatomic) int dataBearerTechnology;                             //@synthesize dataBearerTechnology=_dataBearerTechnology - In the implementation block
@property (assign,nonatomic) unsigned dataBearerSoMask;                            //@synthesize dataBearerSoMask=_dataBearerSoMask - In the implementation block
@property (assign,nonatomic) BOOL dataPlanSignalingReductionOverride;              //@synthesize dataPlanSignalingReductionOverride=_dataPlanSignalingReductionOverride - In the implementation block
@property (assign,nonatomic) BOOL cellularDataPossible;                            //@synthesize cellularDataPossible=_cellularDataPossible - In the implementation block
@property (assign,nonatomic) unsigned activeContexts;                              //@synthesize activeContexts=_activeContexts - In the implementation block
@property (assign,nonatomic) unsigned totalActiveContexts;                         //@synthesize totalActiveContexts=_totalActiveContexts - In the implementation block
@property (assign,nonatomic) BOOL inHomeCountry;                                   //@synthesize inHomeCountry=_inHomeCountry - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)newRadioCoverage;
-(BOOL)newRadioMmWaveDataBearer;
-(BOOL)newRadioNsaDataBearer;
-(BOOL)attached;
-(BOOL)roamAllowed;
-(void)setDataBearerSoMask:(unsigned)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)dataBearerTechnology;
-(void)setAttached:(BOOL)arg1 ;
-(BOOL)inHomeCountry;
-(BOOL)newRadioNsaCoverage;
-(void)setCellularDataPossible:(BOOL)arg1 ;
-(id)description;
-(BOOL)dataPlanSignalingReductionOverride;
-(void)setActiveContexts:(unsigned)arg1 ;
-(void)setIndicator:(int)arg1 ;
-(void)setDataPlanSignalingReductionOverride:(BOOL)arg1 ;
-(int)indicator;
-(void)setRoamAllowed:(BOOL)arg1 ;
-(void)setDataBearerTechnology:(int)arg1 ;
-(unsigned)dataBearerSoMask;
-(BOOL)cellularDataPossible;
-(BOOL)newRadioSub6DataBearer;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)totalActiveContexts;
-(unsigned)activeContexts;
-(void)setIndicatorOverride:(int)arg1 ;
-(BOOL)newRadioDataBearer;
-(BOOL)newRadioSaCoverage;
-(int)indicatorOverride;
-(void)setTotalActiveContexts:(unsigned)arg1 ;
-(void)setRadioTechnology:(int)arg1 ;
-(void)setInHomeCountry:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)radioTechnology;
-(BOOL)newRadioSaDataBearer;
@end

