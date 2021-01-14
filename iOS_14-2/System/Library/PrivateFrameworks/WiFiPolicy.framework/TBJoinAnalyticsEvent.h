/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/TBAnalyticsEvent.h>

@class NSString, NSDictionary, NSNumber;

@interface TBJoinAnalyticsEvent : NSObject <TBAnalyticsEvent> {

	unsigned long long _type;
	unsigned long long _source;
	unsigned long long _action;
	NSString* _bssid;
	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _score;
	NSNumber* _visibleDuration;

}

@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long source;                     //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * bssid;                                //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,retain) NSNumber * latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSNumber * longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSNumber * score;                              //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) NSNumber * visibleDuration;                    //@synthesize visibleDuration=_visibleDuration - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDictionary * eventDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)joinRecommendationEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 BSSID:(id)arg3 latitude:(id)arg4 longitude:(id)arg5 score:(id)arg6 visibleDuration:(id)arg7 ;
+(id)joinAlertEventWithSource:(unsigned long long)arg1 action:(unsigned long long)arg2 visibleDuration:(id)arg3 ;
-(NSNumber *)latitude;
-(void)setBssid:(NSString *)arg1 ;
-(NSNumber *)score;
-(NSNumber *)longitude;
-(NSString *)eventName;
-(void)setScore:(NSNumber *)arg1 ;
-(void)setLongitude:(NSNumber *)arg1 ;
-(unsigned long long)action;
-(void)setType:(unsigned long long)arg1 ;
-(void)setAction:(unsigned long long)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(void)setLatitude:(NSNumber *)arg1 ;
-(NSDictionary *)eventDictionary;
-(unsigned long long)type;
-(NSString *)bssid;
-(unsigned long long)source;
-(NSNumber *)visibleDuration;
-(void)setVisibleDuration:(NSNumber *)arg1 ;
@end

