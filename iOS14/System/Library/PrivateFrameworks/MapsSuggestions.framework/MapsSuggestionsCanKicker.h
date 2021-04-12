/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, MapsSuggestionsTimer;

@interface MapsSuggestionsCanKicker : NSObject <MapsSuggestionsObject> {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _name;
	/*^block*/id _block;
	double _time;
	double _leeway;
	MapsSuggestionsTimer* _timer;
	unsigned long long _count;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)kickCanBySameTime;
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)uniqueName;
-(id)initWithName:(id)arg1 time:(double)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)kickCanByTime:(double)arg1 ;
-(id)initWithName:(id)arg1 time:(double)arg2 leeway:(double)arg3 queue:(id)arg4 block:(/*^block*/id)arg5 ;
-(void)cancel;
-(void)dealloc;
@end

