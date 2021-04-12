/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)currentServerTimeInterval;
-(id)initWithServerTimeProvider:(id)arg1 ;
-(void)_storeInitialServerTime;
-(IDSCurrentServerTimePair *)timePair;
-(id<IDSCurrentServerTimeProvider>)serverTimeProvider;
-(void)setTimePair:(IDSCurrentServerTimePair *)arg1 ;
-(double)_refreshTimeInterval;
-(void)_refreshServerTime;
-(id)currentServerTimeDate;
-(void)setServerTimeProvider:(id<IDSCurrentServerTimeProvider>)arg1 ;
@end

