/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@class NSString, NSArray, NSDate;

@interface TPSDiscoverabilityUsageEvent : NSObject {

	NSString* _contentIdentifier;
	NSString* _bundleIdentifier;
	unsigned long long _displayType;
	long long _state;
	long long _ineligibleReason;
	NSArray* _eligibleContext;
	NSString* _context;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * contentIdentifier;                  //@synthesize contentIdentifier=_contentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long displayType;              //@synthesize displayType=_displayType - In the implementation block
@property (assign,nonatomic) long long state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long ineligibleReason;                  //@synthesize ineligibleReason=_ineligibleReason - In the implementation block
@property (nonatomic,copy) NSArray * eligibleContext;                     //@synthesize eligibleContext=_eligibleContext - In the implementation block
@property (nonatomic,copy) NSString * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSDate * date;                                 //@synthesize date=_date - In the implementation block
+(id)eligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 eligibleContext:(id)arg4 date:(id)arg5 ;
+(id)hintDisplayedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5 ;
+(id)contentViewedEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 date:(id)arg4 ;
+(id)ineligibleEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 reason:(long long)arg5 date:(id)arg6 ;
+(id)performedOutcomeEventWithContentIdentifer:(id)arg1 bundleIdentifier:(id)arg2 type:(unsigned long long)arg3 context:(id)arg4 date:(id)arg5 ;
+(id)_eventWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7 ;
-(unsigned long long)displayType;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(void)setDisplayType:(unsigned long long)arg1 ;
-(NSString *)contentIdentifier;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)context;
-(id)initWithContentIdentifier:(id)arg1 bundleIdentifier:(id)arg2 displayType:(unsigned long long)arg3 eligibleContext:(id)arg4 context:(id)arg5 state:(long long)arg6 date:(id)arg7 ;
-(void)setIneligibleReason:(long long)arg1 ;
-(void)setEligibleContext:(NSArray *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSArray *)eligibleContext;
-(NSDate *)date;
-(void)setContentIdentifier:(NSString *)arg1 ;
-(long long)ineligibleReason;
-(void)setContext:(NSString *)arg1 ;
@end

