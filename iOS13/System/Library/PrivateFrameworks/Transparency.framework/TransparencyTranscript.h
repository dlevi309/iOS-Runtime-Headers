/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSString, NSMutableArray;

@interface TransparencyTranscript : NSObject {

	NSString* _context;
	NSMutableArray* _events;

}

@property (retain) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (retain) NSMutableArray * events;              //@synthesize events=_events - In the implementation block
-(NSString *)context;
-(void)setContext:(NSString *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)serialize;
-(NSMutableArray *)events;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)startEvent:(id)arg1 ;
-(void)stopEventWithSuccess:(id)arg1 ;
-(void)stopEventWithFailure:(id)arg1 error:(id)arg2 ;
@end

