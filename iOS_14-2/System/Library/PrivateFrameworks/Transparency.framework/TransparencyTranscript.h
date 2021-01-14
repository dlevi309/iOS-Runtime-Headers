/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSString, NSMutableArray;

@interface TransparencyTranscript : NSObject {

	NSString* _context;
	NSMutableArray* _events;

}

@property (retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
-(id)serialize;
-(void)addEvent:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSString *)context;
-(void)startEvent:(id)arg1 ;
-(NSMutableArray *)events;
-(void)setContext:(NSString *)arg1 ;
-(void)stopEventWithSuccess:(id)arg1 ;
-(void)stopEventWithFailure:(id)arg1 error:(id)arg2 ;
@end

