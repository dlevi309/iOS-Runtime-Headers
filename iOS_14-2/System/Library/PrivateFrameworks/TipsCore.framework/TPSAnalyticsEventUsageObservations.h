/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString, NSNumber;

@interface TPSAnalyticsEventUsageObservations : TPSAnalyticsEvent {

	NSString* _eventID;
	NSNumber* _eventCount;
	NSString* _experimentID;
	NSString* _experimentCampID;

}

@property (nonatomic,retain) NSString * eventID;                         //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,retain) NSNumber * eventCount;                      //@synthesize eventCount=_eventCount - In the implementation block
@property (nonatomic,readonly) NSString * experimentID;                  //@synthesize experimentID=_experimentID - In the implementation block
@property (nonatomic,readonly) NSString * experimentCampID;              //@synthesize experimentCampID=_experimentCampID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventWithEventID:(id)arg1 eventCount:(id)arg2 ;
-(NSString *)eventID;
-(void)setDataProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)eventName;
-(void)setEventCount:(NSNumber *)arg1 ;
-(id)_initWithEventID:(id)arg1 eventCount:(id)arg2 ;
-(NSString *)experimentCampID;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableAnalyticsEventRepresentation;
-(NSNumber *)eventCount;
-(NSString *)experimentID;
-(void)setEventID:(NSString *)arg1 ;
@end

