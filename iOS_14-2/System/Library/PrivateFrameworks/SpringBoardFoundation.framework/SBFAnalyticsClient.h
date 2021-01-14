/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class SBFAnalyticsBackend, NSString;

@interface SBFAnalyticsClient : NSObject {

	SBFAnalyticsBackend* _backend;
	NSString* _significantTimeChangedNotificationName;

}

@property (nonatomic,copy) NSString * significantTimeChangedNotificationName;              //@synthesize significantTimeChangedNotificationName=_significantTimeChangedNotificationName - In the implementation block
+(id)sharedInstance;
-(NSString *)significantTimeChangedNotificationName;
-(void)emitEvent:(unsigned long long)arg1 ;
-(id)initWithBackend:(id)arg1 ;
-(void)setSignificantTimeChangedNotificationName:(NSString *)arg1 ;
-(void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)registerForQueryName:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
@end

