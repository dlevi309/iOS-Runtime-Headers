/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSDateComponents, NSDictionary;

@interface STAllowance : NSObject <NSCopying> {

	BOOL _allowanceEnabled;
	BOOL _shouldAllowEditing;
	NSArray* _bundleIdentifiers;
	NSArray* _webDomains;
	NSArray* _categoryIdentifiers;
	NSString* _identifier;
	unsigned long long _behaviorType;
	NSDateComponents* _time;
	NSDictionary* _timeByDay;

}

@property (copy) NSArray * bundleIdentifiers;                              //@synthesize bundleIdentifiers=_bundleIdentifiers - In the implementation block
@property (copy) NSArray * webDomains;                                     //@synthesize webDomains=_webDomains - In the implementation block
@property (copy) NSArray * categoryIdentifiers;                            //@synthesize categoryIdentifiers=_categoryIdentifiers - In the implementation block
@property (assign) BOOL allowanceEnabled;                                  //@synthesize allowanceEnabled=_allowanceEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowEditing;                      //@synthesize shouldAllowEditing=_shouldAllowEditing - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) double timeToday; 
@property (assign,nonatomic) unsigned long long behaviorType;              //@synthesize behaviorType=_behaviorType - In the implementation block
@property (copy,readonly) NSString * scheduleText; 
@property (nonatomic,copy) NSDateComponents * time;                        //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) NSDictionary * timeByDay;                       //@synthesize timeByDay=_timeByDay - In the implementation block
+(double)timeIntervalForAllowanceDateComponents:(id)arg1 ;
+(id)dateComponentsForDuration:(double)arg1 ;
-(NSDateComponents *)time;
-(void)setTime:(NSDateComponents *)arg1 ;
-(id)init;
-(void)setBundleIdentifiers:(NSArray *)arg1 ;
-(unsigned long long)behaviorType;
-(NSArray *)webDomains;
-(NSArray *)categoryIdentifiers;
-(unsigned long long)hash;
-(void)setBehaviorType:(unsigned long long)arg1 ;
-(NSString *)identifier;
-(void)setCategoryIdentifiers:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)bundleIdentifiers;
-(BOOL)isEqual:(id)arg1 ;
-(void)setWebDomains:(NSArray *)arg1 ;
-(BOOL)shouldAllowEditing;
-(NSDictionary *)timeByDay;
-(void)setTimeByDay:(NSDictionary *)arg1 ;
-(id)defaultTimeByDay;
-(void)setAllowanceEnabled:(BOOL)arg1 ;
-(BOOL)allowanceEnabled;
-(NSString *)scheduleText;
-(void)setShouldAllowEditing:(BOOL)arg1 ;
-(double)timeToday;
-(id)initWithBlueprint:(id)arg1 ;
-(id)defaultBudgetTime;
@end

