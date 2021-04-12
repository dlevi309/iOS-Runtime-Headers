/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSString;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {

	unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >* _cppQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> innerQueue; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serialQueueWithName:(id)arg1 ;
-(NSString *)uniqueName;
-(void)asyncBlock:(/*^block*/id)arg1 ;
-(void)syncBlock:(/*^block*/id)arg1 ;
-(id)syncReturningBlock:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)innerQueue;
-(id)initSerialQueueWithName:(id)arg1 ;
-(BOOL)syncBOOLReturningBlock:(/*^block*/id)arg1 ;
@end

