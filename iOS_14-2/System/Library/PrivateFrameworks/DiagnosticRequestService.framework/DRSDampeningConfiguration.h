/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
*/


@interface DRSDampeningConfiguration : NSObject {

	double _hysteresis;
	unsigned long long _countCap;
	double _acceptanceRate;

}

@property (assign,nonatomic) double hysteresis;                        //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) unsigned long long countCap;              //@synthesize countCap=_countCap - In the implementation block
@property (assign,nonatomic) double acceptanceRate;                    //@synthesize acceptanceRate=_acceptanceRate - In the implementation block
+(id)_entityName;
+(id)defaultSignatureDampeningConfiguration;
+(id)nandDefaultConfiguration;
+(id)hangTracerNoDownsamplingConfiguration;
+(id)hangTracerDownsamplingConfiguration;
+(id)sentryMacOSAppLaunchConfiguration;
-(double)hysteresis;
-(id)debugDescription;
-(id)description;
-(void)setHysteresis:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)countCap;
-(double)acceptanceRate;
-(id)initWithHysteresis:(double)arg1 cap:(unsigned long long)arg2 acceptanceRate:(double)arg3 ;
-(id)_initWithMO_ON_MOC_QUEUE:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;
-(void)setCountCap:(unsigned long long)arg1 ;
-(void)setAcceptanceRate:(double)arg1 ;
-(BOOL)isEqualToDampeningConfiguration:(id)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg1 identifier:(id)arg2 ;
@end

