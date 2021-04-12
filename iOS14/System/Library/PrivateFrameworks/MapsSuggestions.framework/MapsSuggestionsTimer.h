/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsTimer.h>

@protocol MapsSuggestionsTimer <MapsSuggestionsObject,MapsSuggestionsJSONable>
@required
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3;
-(void)scheduleWithInterval:(Duration)arg1 leeway:(Duration)arg2;
-(void)unschedule;
-(void)scheduleWithInterval:(Duration)arg1 repeatAfter:(Duration)arg2 leeway:(Duration)arg3;
-(void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2;
-(void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3;

@end


@class NSString;

@interface MapsSuggestionsTimer : NSObject <MapsSuggestionsTimer> {

	Timer _timer;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(NSString *)uniqueName;
-(void)scheduleWithInterval:(Duration)arg1 leeway:(Duration)arg2 ;
-(id)objectForJSON;
-(void)unschedule;
-(void)scheduleWithInterval:(Duration)arg1 repeatAfter:(Duration)arg2 leeway:(Duration)arg3 ;
-(void)dealloc;
-(void)scheduleWithTimeInterval:(double)arg1 leeway:(double)arg2 ;
-(void)scheduleWithTimeInterval:(double)arg1 repeatAfter:(double)arg2 leeway:(double)arg3 ;
@end

