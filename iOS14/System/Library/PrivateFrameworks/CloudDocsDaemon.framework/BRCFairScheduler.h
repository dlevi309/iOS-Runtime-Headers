/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_source, OS_dispatch_workloop;
@class NSObject, NSString, NSMutableDictionary;

@interface BRCFairScheduler : NSObject {

	NSObject*<OS_dispatch_source> _source;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSString* _name;
	unsigned long long _maxRegistedSourceBit;
	unsigned long long _lastVisitedBit;
	NSMutableDictionary* _sourceForBitIndex;
	BOOL _resumed;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_workloop> workloop; 
-(void)suspend;
-(void)close;
-(void)schedule;
-(NSObject*<OS_dispatch_workloop>)workloop;
-(void)cancel;
-(void)resume;
-(void)addSource:(id)arg1 ;
-(void)dealloc;
-(id)initWithWorkloop:(id)arg1 name:(id)arg2 ;
-(id)sourceForBitIndex:(unsigned long long)arg1 ;
-(void)unregisterSources;
-(void)signalSourceForBitIndex:(unsigned long long)arg1 ;
@end

