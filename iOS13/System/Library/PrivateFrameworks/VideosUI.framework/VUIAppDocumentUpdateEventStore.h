/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSMutableDictionary, NSArray;

@interface VUIAppDocumentUpdateEventStore : NSObject {

	NSMutableDictionary* _eventByEventDescriptor;

}

@property (nonatomic,retain) NSMutableDictionary * eventByEventDescriptor;              //@synthesize eventByEventDescriptor=_eventByEventDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * events; 
-(id)init;
-(id)description;
-(NSArray *)events;
-(void)addEvents:(id)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)removeAllEvents;
-(NSMutableDictionary *)eventByEventDescriptor;
-(void)setEventByEventDescriptor:(NSMutableDictionary *)arg1 ;
@end

