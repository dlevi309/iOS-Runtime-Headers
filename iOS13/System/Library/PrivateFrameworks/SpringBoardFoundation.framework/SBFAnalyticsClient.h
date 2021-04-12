/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


@class SBFAnalyticsBackend, NSString;

@interface SBFAnalyticsClient : NSObject {

	SBFAnalyticsBackend* _backend;
	NSString* _significantTimeChangedNotificationName;

}

@property (nonatomic,copy) NSString * significantTimeChangedNotificationName;              //@synthesize significantTimeChangedNotificationName=_significantTimeChangedNotificationName - In the implementation block
+(id)sharedInstance;
-(void)registerForQueryName:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBackend:(id)arg1 ;
-(void)emitEvent:(unsigned long long)arg1 withPayload:(id)arg2 ;
-(void)_noteSignificantTimeChanged:(id)arg1 ;
-(void)emitEvent:(unsigned long long)arg1 ;
-(void)setSignificantTimeChangedNotificationName:(NSString *)arg1 ;
-(NSString *)significantTimeChangedNotificationName;
@end

