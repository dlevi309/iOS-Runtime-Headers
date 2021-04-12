/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdAnalytics.framework/AdAnalytics
*/


@class NSMutableDictionary;

@interface AdAnalyzer : NSObject {

	NSMutableDictionary* _adSequences;

}

@property (nonatomic,retain) NSMutableDictionary * adSequences;              //@synthesize adSequences=_adSequences - In the implementation block
+(id)sharedInstance;
+(long long)nextSequenceNumberForAd:(id)arg1 ;
+(void)clearSequenceNumbersForAd:(id)arg1 ;
+(void)startAdAnalytics:(id)arg1 ;
+(void)stopAdAnalytics:(id)arg1 ;
+(void)captureAdAnalyticsEvent:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)init;
-(void)captureEvent:(id)arg1 event:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)adSequences;
-(void)setAdSequences:(NSMutableDictionary *)arg1 ;
@end

