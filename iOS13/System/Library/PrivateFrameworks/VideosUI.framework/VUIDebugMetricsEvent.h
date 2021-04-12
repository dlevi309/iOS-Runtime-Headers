/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSArray, NSDictionary, NSDate, NSString;

@interface VUIDebugMetricsEvent : NSObject {

	NSArray* _eventData;
	NSDictionary* _rawData;
	NSArray* _sortedPageKeys;
	NSArray* _sortedPrimaryKeys;

}

@property (nonatomic,retain) NSDictionary * rawData;                   //@synthesize rawData=_rawData - In the implementation block
@property (nonatomic,retain) NSArray * eventData;                      //@synthesize eventData=_eventData - In the implementation block
@property (nonatomic,retain) NSArray * sortedPageKeys;                 //@synthesize sortedPageKeys=_sortedPageKeys - In the implementation block
@property (nonatomic,retain) NSArray * sortedPrimaryKeys;              //@synthesize sortedPrimaryKeys=_sortedPrimaryKeys - In the implementation block
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) NSString * eventType; 
@property (nonatomic,readonly) NSString * pageContext; 
@property (nonatomic,readonly) NSDictionary * rawEvent; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)eventType;
-(NSDictionary *)rawData;
-(NSDate *)eventDate;
-(NSArray *)eventData;
-(void)setEventData:(NSArray *)arg1 ;
-(NSString *)pageContext;
-(void)setRawData:(NSDictionary *)arg1 ;
-(id)initWithEventDictionary:(id)arg1 termCollater:(id)arg2 ;
-(NSDictionary *)rawEvent;
-(NSArray *)sortedPageKeys;
-(NSArray *)sortedPrimaryKeys;
-(id)_sortKeys:(id)arg1 ;
-(void)setSortedPageKeys:(NSArray *)arg1 ;
-(void)setSortedPrimaryKeys:(NSArray *)arg1 ;
@end

