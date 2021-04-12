/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary, NSArray;

@interface VUIAppDocumentUpdateEventStore : NSObject {

	NSMutableDictionary* _eventByEventDescriptor;

}

@property (nonatomic,retain) NSMutableDictionary * eventByEventDescriptor;              //@synthesize eventByEventDescriptor=_eventByEventDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(id)init;
-(void)removeEvent:(id)arg1 ;
-(void)removeAllEvents;
-(id)description;
-(NSArray *)events;
-(NSMutableDictionary *)eventByEventDescriptor;
-(void)setEventByEventDescriptor:(NSMutableDictionary *)arg1 ;
@end

