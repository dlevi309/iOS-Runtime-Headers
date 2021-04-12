/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PLMetricEvent.h>

@class NSString, NSDictionary;

@interface PGGraphHolidayMetricEvent : NSObject <PLMetricEvent> {

	NSString* _identifier;
	NSDictionary* _payload;
	NSString* _holidayName;
	unsigned long long _numberOfCelebrations;

}

@property (nonatomic,retain) NSString * holidayName;                               //@synthesize holidayName=_holidayName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfCelebrations;              //@synthesize numberOfCelebrations=_numberOfCelebrations - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * payload;                             //@synthesize payload=_payload - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventIdentifier;
+(id)celebratedHolidayMetricEventsWithGraphManager:(id)arg1 ;
-(NSString *)holidayName;
-(NSDictionary *)payload;
-(NSString *)description;
-(NSString *)identifier;
-(void)gatherMetricsWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithHolidayName:(id)arg1 numberOfCelebrations:(unsigned long long)arg2 ;
-(void)setHolidayName:(NSString *)arg1 ;
-(unsigned long long)numberOfCelebrations;
-(void)setNumberOfCelebrations:(unsigned long long)arg1 ;
@end

