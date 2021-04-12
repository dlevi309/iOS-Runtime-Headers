/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setActivityType:(NSString *)arg1 ;
-(NSString *)activityType;
-(id)eventName;
-(NSString *)orientation;
-(id)eventPayload;
-(void)setOrientation:(NSString *)arg1 ;
-(void)sendToCoreAnalytics;
-(id)initWithActivityType:(id)arg1 isLandscape:(BOOL)arg2 ;
@end

