/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSDate;

@interface HDXPCAlarmEvent : NSObject {

	BOOL _isUserVisible;
	NSString* _name;
	NSDate* _fireDate;

}

@property (nonatomic,copy,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;              //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,readonly) BOOL isUserVisible;                  //@synthesize isUserVisible=_isUserVisible - In the implementation block
+(id)_eventWithName:(id)arg1 ;
-(NSDate *)fireDate;
-(NSString *)name;
-(id)description;
-(BOOL)isUserVisible;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(BOOL)arg3 ;
@end

