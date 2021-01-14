/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSString, NSHashTable;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject> {

	NSString* _name;
	Queue _callbackQueue;
	NSHashTable* _innerObservers;

}

@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)uniqueName;
-(unsigned long long)count;
-(void)addObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCallbackQueue:(id)arg1 name:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(NSString *)description;
-(void)removeObserver:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)synchronouslyCallBlock:(/*^block*/id)arg1 ;
-(BOOL)callBlock:(/*^block*/id)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 name:(id)arg2 strong:(BOOL)arg3 ;
@end

