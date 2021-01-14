/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


@protocol IDSCurrentServerTimeProvider;
@class IDSCurrentServerTimePair;

@interface IDSCurrentServerTime : NSObject {

	IDSCurrentServerTimePair* _timePair;
	id<IDSCurrentServerTimeProvider> _serverTimeProvider;

}

@property (nonatomic,retain) id<IDSCurrentServerTimeProvider> serverTimeProvider;              //@synthesize serverTimeProvider=_serverTimeProvider - In the implementation block
@property (retain) IDSCurrentServerTimePair * timePair;                                        //@synthesize timePair=_timePair - In the implementation block
+(id)sharedInstance;
-(IDSCurrentServerTimePair *)timePair;
-(void)setTimePair:(IDSCurrentServerTimePair *)arg1 ;
-(id)initWithServerTimeProvider:(id)arg1 ;
-(void)_storeInitialServerTime;
-(id<IDSCurrentServerTimeProvider>)serverTimeProvider;
-(double)currentServerTimeInterval;
-(double)_refreshTimeInterval;
-(void)_refreshServerTime;
-(id)currentServerTimeDate;
-(void)setServerTimeProvider:(id<IDSCurrentServerTimeProvider>)arg1 ;
@end

