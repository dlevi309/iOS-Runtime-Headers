/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithSuiteName:(id)arg1 ;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(NSString *)deviceUUID;
-(id)autoDownloadedVoicesForClientID:(id)arg1 ;
-(void)migrateDefaults;
-(void)setAutoDownloadedVoices:(id)arg1 withClientID:(id)arg2 ;
-(void)setLastTTSRequestDate:(NSDate *)arg1 ;
-(NSDate *)lastTTSRequestDate;
@end

