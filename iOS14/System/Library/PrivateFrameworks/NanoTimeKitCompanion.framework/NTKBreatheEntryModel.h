/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBreatheEntryModel : NTKTimelineEntryModel {

	BOOL _isLoading;
	BOOL _isLocked;
	unsigned long long _minutesBreathed;

}

@property (assign,nonatomic) unsigned long long minutesBreathed;              //@synthesize minutesBreathed=_minutesBreathed - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                  //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                                   //@synthesize isLocked=_isLocked - In the implementation block
+(id)companionModel;
+(id)lockedEntryModel;
+(BOOL)supportsFlowerImages;
+(BOOL)familySupportsLiveData:(long long)arg1 ;
+(id)modelWithActivitySummary:(id)arg1 ;
-(BOOL)isLocked;
-(BOOL)isLoading;
-(void)setIsLocked:(BOOL)arg1 ;
-(void)setIsLoading:(BOOL)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setMinutesBreathed:(unsigned long long)arg1 ;
-(id)_modularSmallTemplate;
-(id)_circularSmallTemplate;
-(id)_utilitarianSmallTemplate;
-(id)_extraLargeTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(id)_signatureExtraLargeTemplate;
-(id)_circularMediumTemplate;
-(unsigned long long)minutesBreathed;
@end

