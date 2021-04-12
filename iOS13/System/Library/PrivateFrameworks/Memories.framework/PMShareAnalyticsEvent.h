/*
* Generated on Monday, March 1, 2021 at 2:35:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PMCoreAnalyticsEvent.h>
#import <libobjc.A.dylib/CoreAnalyticsEventProtocol.h>

@class NSString;

@interface PMShareAnalyticsEvent : PMCoreAnalyticsEvent <CoreAnalyticsEventProtocol> {

	NSString* _activityType;
	NSString* _orientation;

}

@property (nonatomic,copy) NSString * activityType;                 //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,copy) NSString * orientation;                  //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)activityType;
-(NSString *)orientation;
-(id)eventName;
-(void)setOrientation:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(id)eventPayload;
-(void)sendToCoreAnalytics;
-(id)initWithActivityType:(id)arg1 isLandscape:(BOOL)arg2 ;
@end

