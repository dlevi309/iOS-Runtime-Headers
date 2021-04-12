/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSDate *)fireDate;
-(BOOL)isUserVisible;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 isUserVisible:(BOOL)arg3 ;
@end

