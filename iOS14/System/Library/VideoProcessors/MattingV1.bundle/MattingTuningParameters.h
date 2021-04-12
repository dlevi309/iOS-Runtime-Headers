/*
* Generated on Thursday, January 14, 2021 at 2:29:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/VideoProcessors/MattingV1.bundle/MattingV1
*/


#import <MattingV1/MattingV1-Structs.h>
@interface MattingTuningParameters : NSObject {

	SCD_Struct_Ma2 _mattingFilterConfig1;
	SCD_Struct_Ma2 _mattingFilterConfig2;
	SCD_Struct_Ma7 _focalPlaneRestrictionConfig;
	SCD_Struct_Ma0 _mattingSolverConfig;

}

@property (assign,nonatomic) SCD_Struct_Ma2 mattingFilterConfig1;                     //@synthesize mattingFilterConfig1=_mattingFilterConfig1 - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ma7 focalPlaneRestrictionConfig;              //@synthesize focalPlaneRestrictionConfig=_focalPlaneRestrictionConfig - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ma0 mattingSolverConfig;                      //@synthesize mattingSolverConfig=_mattingSolverConfig - In the implementation block
@property (assign,nonatomic) SCD_Struct_Ma2 mattingFilterConfig2;                     //@synthesize mattingFilterConfig2=_mattingFilterConfig2 - In the implementation block
-(id)initWithTuningDictionary:(id)arg1 ;
-(id)initWithDefaults;
-(int)readMattingFilterConfigDict:(id)arg1 mattingFilterConfig:(SCD_Struct_Ma2*)arg2 ;
-(int)readFocalPlaneRestrictionConfig:(id)arg1 ;
-(int)readMattingConfig:(id)arg1 ;
-(SCD_Struct_Ma2)mattingFilterConfig1;
-(void)setMattingFilterConfig1:(SCD_Struct_Ma2)arg1 ;
-(SCD_Struct_Ma7)focalPlaneRestrictionConfig;
-(void)setFocalPlaneRestrictionConfig:(SCD_Struct_Ma7)arg1 ;
-(SCD_Struct_Ma0)mattingSolverConfig;
-(void)setMattingSolverConfig:(SCD_Struct_Ma0)arg1 ;
-(SCD_Struct_Ma2)mattingFilterConfig2;
-(void)setMattingFilterConfig2:(SCD_Struct_Ma2)arg1 ;
@end

