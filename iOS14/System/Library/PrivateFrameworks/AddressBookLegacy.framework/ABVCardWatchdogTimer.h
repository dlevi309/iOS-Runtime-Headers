/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
*/


@protocol ABVCardTimeProvider;
@class NSDate;

@interface ABVCardWatchdogTimer : NSObject {

	BOOL _valid;
	unsigned long long _ticks;
	id<ABVCardTimeProvider> _timeProvider;
	NSDate* _startTime;

}

@property (assign,nonatomic) unsigned long long ticks;                            //@synthesize ticks=_ticks - In the implementation block
@property (nonatomic,readonly) id<ABVCardTimeProvider> timeProvider;              //@synthesize timeProvider=_timeProvider - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL valid;                                          //@synthesize valid=_valid - In the implementation block
+(id)timerWithTimeProvider:(id)arg1 ;
+(BOOL)shouldCheckTime;
-(void)setValid:(BOOL)arg1 ;
-(unsigned long long)ticks;
-(BOOL)isStarted;
-(void)start;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)isValid;
-(BOOL)valid;
-(id)initWithTimeProvider:(id)arg1 ;
-(void)checkValidity;
-(id<ABVCardTimeProvider>)timeProvider;
-(NSDate *)startTime;
-(void)setTicks:(unsigned long long)arg1 ;
-(void)dealloc;
@end

