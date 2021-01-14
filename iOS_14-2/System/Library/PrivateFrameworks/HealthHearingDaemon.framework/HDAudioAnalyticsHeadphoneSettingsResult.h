/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
*/


@class NSString;

@interface HDAudioAnalyticsHeadphoneSettingsResult : NSObject {

	BOOL _hasHAENRequired;
	BOOL _hasHAENEnabled;
	BOOL _hasMeasureLevelsEnabled;
	BOOL _hasIncludeOtherHeadphonesEnabled;
	NSString* _haenRetention;

}

@property (assign,nonatomic) BOOL hasHAENRequired;                               //@synthesize hasHAENRequired=_hasHAENRequired - In the implementation block
@property (assign,nonatomic) BOOL hasHAENEnabled;                                //@synthesize hasHAENEnabled=_hasHAENEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasMeasureLevelsEnabled;                       //@synthesize hasMeasureLevelsEnabled=_hasMeasureLevelsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeOtherHeadphonesEnabled;              //@synthesize hasIncludeOtherHeadphonesEnabled=_hasIncludeOtherHeadphonesEnabled - In the implementation block
@property (nonatomic,retain) NSString * haenRetention;                           //@synthesize haenRetention=_haenRetention - In the implementation block
-(void)setHasHAENRequired:(BOOL)arg1 ;
-(void)setHasHAENEnabled:(BOOL)arg1 ;
-(void)setHasMeasureLevelsEnabled:(BOOL)arg1 ;
-(void)setHasIncludeOtherHeadphonesEnabled:(BOOL)arg1 ;
-(void)setHaenRetention:(NSString *)arg1 ;
-(id)initWithHAENRequired:(BOOL)arg1 hasHAENEnabled:(BOOL)arg2 hasMeasureLevelsEnabled:(BOOL)arg3 hasIncludeOtherHeadphonesEnabled:(BOOL)arg4 haenRetention:(id)arg5 ;
-(BOOL)hasHAENRequired;
-(BOOL)hasHAENEnabled;
-(BOOL)hasMeasureLevelsEnabled;
-(BOOL)hasIncludeOtherHeadphonesEnabled;
-(NSString *)haenRetention;
@end

