/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned _activeContexts;
	unsigned _totalActiveContexts;

}

@property (assign,nonatomic) BOOL attached;                                        //@synthesize attached=_attached - In the implementation block
@property (assign,nonatomic) int indicator;                                        //@synthesize indicator=_indicator - In the implementation block
@property (assign,nonatomic) int indicatorOverride;                                //@synthesize indicatorOverride=_indicatorOverride - In the implementation block
@property (assign,nonatomic) BOOL roamAllowed;                                     //@synthesize roamAllowed=_roamAllowed - In the implementation block
@property (assign,nonatomic) int radioTechnology;                                  //@synthesize radioTechnology=_radioTechnology - In the implementation block
@property (assign,nonatomic) BOOL dataPlanSignalingReductionOverride;              //@synthesize dataPlanSignalingReductionOverride=_dataPlanSignalingReductionOverride - In the implementation block
@property (assign,nonatomic) BOOL cellularDataPossible;                            //@synthesize cellularDataPossible=_cellularDataPossible - In the implementation block
@property (assign,nonatomic) unsigned activeContexts;                              //@synthesize activeContexts=_activeContexts - In the implementation block
@property (assign,nonatomic) unsigned totalActiveContexts;                         //@synthesize totalActiveContexts=_totalActiveContexts - In the implementation block
@property (assign,nonatomic) BOOL inHomeCountry;                                   //@synthesize inHomeCountry=_inHomeCountry - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)attached;
-(int)indicator;
-(int)indicatorOverride;
-(BOOL)roamAllowed;
-(int)radioTechnology;
-(BOOL)dataPlanSignalingReductionOverride;
-(BOOL)cellularDataPossible;
-(unsigned)activeContexts;
-(unsigned)totalActiveContexts;
-(BOOL)inHomeCountry;
-(void)setAttached:(BOOL)arg1 ;
-(void)setIndicator:(int)arg1 ;
-(void)setIndicatorOverride:(int)arg1 ;
-(void)setRoamAllowed:(BOOL)arg1 ;
-(void)setRadioTechnology:(int)arg1 ;
-(void)setDataPlanSignalingReductionOverride:(BOOL)arg1 ;
-(void)setCellularDataPossible:(BOOL)arg1 ;
-(void)setActiveContexts:(unsigned)arg1 ;
-(void)setTotalActiveContexts:(unsigned)arg1 ;
-(void)setInHomeCountry:(BOOL)arg1 ;
@end

