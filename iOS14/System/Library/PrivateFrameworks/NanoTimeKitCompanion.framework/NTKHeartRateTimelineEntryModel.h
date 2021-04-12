/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSArray;

@interface NTKHeartRateTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _hasBPM;
	BOOL _lessThanMinute;
	BOOL _locked;
	BOOL _hasSummary;
	NSDate* _measurementDate;
	long long _BPM;
	long long _dailyLowBPM;
	long long _dailyHighBPM;
	NSArray* _chartPoints;

}

@property (nonatomic,retain) NSDate * measurementDate;                 //@synthesize measurementDate=_measurementDate - In the implementation block
@property (assign,nonatomic) long long BPM;                            //@synthesize BPM=_BPM - In the implementation block
@property (assign,nonatomic) BOOL hasBPM;                              //@synthesize hasBPM=_hasBPM - In the implementation block
@property (assign,nonatomic) BOOL lessThanMinute;                      //@synthesize lessThanMinute=_lessThanMinute - In the implementation block
@property (assign,getter=isLocked,nonatomic) BOOL locked;              //@synthesize locked=_locked - In the implementation block
@property (assign,nonatomic) BOOL hasSummary;                          //@synthesize hasSummary=_hasSummary - In the implementation block
@property (assign,nonatomic) long long dailyLowBPM;                    //@synthesize dailyLowBPM=_dailyLowBPM - In the implementation block
@property (assign,nonatomic) long long dailyHighBPM;                   //@synthesize dailyHighBPM=_dailyHighBPM - In the implementation block
@property (nonatomic,retain) NSArray * chartPoints;                    //@synthesize chartPoints=_chartPoints - In the implementation block
-(BOOL)isLocked;
-(long long)BPM;
-(void)setChartPoints:(NSArray *)arg1 ;
-(NSArray *)chartPoints;
-(BOOL)hasBPM;
-(void)setLocked:(BOOL)arg1 ;
-(void)setBPM:(long long)arg1 ;
-(BOOL)hasSummary;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(id)_newExtraLargeTemplate;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newSignatureExtraLargeCircularTemplate;
-(void)setMeasurementDate:(NSDate *)arg1 ;
-(void)setHasBPM:(BOOL)arg1 ;
-(void)setHasSummary:(BOOL)arg1 ;
-(void)setDailyHighBPM:(long long)arg1 ;
-(void)setDailyLowBPM:(long long)arg1 ;
-(id)_newSignatureCornerTemplate;
-(id)_newSignatureRectangularTemplate;
-(id)_newUtilitarianSmallFlatTemplate;
-(id)_newUtilitarianSmallTemplate;
-(id)_newUtilitarianLargeTemplate;
-(id)_newModularSmallTemplate;
-(id)_newModularLargeTemplate;
-(id)_newCircularTemplateUsingMediumSize:(BOOL)arg1 ;
-(id)_bpmString;
-(id)_heartrateString;
-(id)_signatureBezelTextProvider;
-(id)_metadataWithCurrentMeasurements;
-(NSDate *)measurementDate;
-(BOOL)lessThanMinute;
-(void)setLessThanMinute:(BOOL)arg1 ;
-(long long)dailyLowBPM;
-(long long)dailyHighBPM;
@end

