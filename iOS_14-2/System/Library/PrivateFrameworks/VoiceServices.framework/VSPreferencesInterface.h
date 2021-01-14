/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/


@class NSUserDefaults, NSDate, NSString;

@interface VSPreferencesInterface : NSObject {

	NSUserDefaults* _defaults;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSDate * lastTTSRequestDate; 
@property (nonatomic,readonly) NSString * deviceUUID; 
+(id)defaultInstance;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(id)initWithSuiteName:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(id)autoDownloadedVoicesForClientID:(id)arg1 ;
-(void)migrateDefaults;
-(void)setAutoDownloadedVoices:(id)arg1 withClientID:(id)arg2 ;
-(void)setLastTTSRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastTTSRequestDate;
-(NSString *)deviceUUID;
@end

