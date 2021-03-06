/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/

#import <MetricsKit/MTObject.h>

@protocol MTConfigDelegate;
@class NSDictionary;

@interface MTConfig : MTObject {

	id<MTConfigDelegate> _delegate;
	long long _eventDataTimeout;
	NSDictionary* _debugSource;

}

@property (nonatomic,retain) NSDictionary * debugSource;                        //@synthesize debugSource=_debugSource - In the implementation block
@property (assign,nonatomic,__weak) id<MTConfigDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long eventDataTimeout;                        //@synthesize eventDataTimeout=_eventDataTimeout - In the implementation block
-(id<MTConfigDelegate>)delegate;
-(id)sources;
-(void)setDelegate:(id<MTConfigDelegate>)arg1 ;
-(NSDictionary *)debugSource;
-(id)injectedSource;
-(BOOL)_isEventDataTimeoutUnset;
-(id)configValueForKeyPath:(id)arg1 sources:(id)arg2 ;
-(void)setEventDataTimeout:(long long)arg1 ;
-(BOOL)disabledForSources:(id)arg1 ;
-(id)blacklistedEventsForSources:(id)arg1 ;
-(id)blacklistedFieldsForSources:(id)arg1 ;
-(id)deResFieldsForSources:(id)arg1 ;
-(long long)eventDataTimeout;
-(BOOL)metricsDisabledOrBlacklistedEvent:(id)arg1 sources:(id)arg2 ;
-(void)removeBlacklistedFields:(id)arg1 sources:(id)arg2 ;
-(void)applyDeRes:(id)arg1 sources:(id)arg2 ;
-(id)computeWithConfigSources:(/*^block*/id)arg1 ;
-(id)configValueForKeyPath:(id)arg1 default:(id)arg2 ;
-(void)setDebugSource:(NSDictionary *)arg1 ;
@end

