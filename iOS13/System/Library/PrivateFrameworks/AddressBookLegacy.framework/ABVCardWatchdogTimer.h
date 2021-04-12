/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)isStarted;
-(void)start;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(id<ABVCardTimeProvider>)timeProvider;
-(void)checkValidity;
-(id)initWithTimeProvider:(id)arg1 ;
-(unsigned long long)ticks;
-(void)setTicks:(unsigned long long)arg1 ;
@end

