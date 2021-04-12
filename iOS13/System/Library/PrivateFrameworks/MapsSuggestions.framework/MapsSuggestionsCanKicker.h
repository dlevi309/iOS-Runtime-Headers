/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _name;
	/*^block*/id _block;
	double _time;
	double _leeway;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _count;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
-(void)dealloc;
-(void)cancel;
-(NSString *)uniqueName;
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithName:(id)arg1 time:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)kickCanBySameTime;
-(void)kickCanByTime:(double)arg1 ;
-(id)initWithName:(id)arg1 time:(double)arg2 leeway:(double)arg3 queue:(id)arg4 block:(/*^block*/id)arg5 ;
-(void)_kickCan;
-(void)kickCanByTime:(double)arg1 leeway:(double)arg2 ;
@end

