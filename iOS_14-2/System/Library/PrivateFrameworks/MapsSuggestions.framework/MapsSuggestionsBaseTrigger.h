/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestionsTrigger.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, MapsSuggestionsObservers;

@interface MapsSuggestionsBaseTrigger : NSObject <MapsSuggestionsTrigger> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _name;
	MapsSuggestionsObservers* _observers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(id)initWithName:(id)arg1 queue:(id)arg2 ;
-(void)didAddFirstObserver;
-(NSString *)uniqueName;
-(BOOL)hasObservers;
-(id)dispatchQueue;
-(id)initWithName:(id)arg1 ;
-(void)triggerMyObservers;
-(void)didRemoveLastObserver;
-(void)removeObserver:(id)arg1 ;
@end

