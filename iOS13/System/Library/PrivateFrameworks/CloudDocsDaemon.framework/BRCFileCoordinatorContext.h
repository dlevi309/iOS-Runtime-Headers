/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue;
@class brc_task_tracker, NSObject;

@interface BRCFileCoordinatorContext : NSObject {

	int _startTracingCode;
	int _endTracingCode;
	brc_task_tracker* _tracker;
	unsigned long long _sections;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) brc_task_tracker * tracker;                      //@synthesize tracker=_tracker - In the implementation block
@property (assign,nonatomic) unsigned long long sections;                     //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int startTracingCode;                            //@synthesize startTracingCode=_startTracingCode - In the implementation block
@property (assign,nonatomic) int endTracingCode;                              //@synthesize endTracingCode=_endTracingCode - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(brc_task_tracker *)tracker;
-(void)setTracker:(brc_task_tracker *)arg1 ;
-(unsigned long long)sections;
-(void)setSections:(unsigned long long)arg1 ;
-(void)setStartTracingCode:(int)arg1 ;
-(void)setEndTracingCode:(int)arg1 ;
-(id)initWithTracker:(id)arg1 queue:(id)arg2 startCode:(int)arg3 endCode:(int)arg4 ;
-(int)startTracingCode;
-(int)endTracingCode;
@end

