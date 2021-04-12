/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSString;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {

	unique_ptr<MSg::Queue, std::__1::default_delete<MSg::Queue> >* _cppQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> innerQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)serialQueueWithName:(id)arg1 ;
-(NSString *)uniqueName;
-(id)initSerialQueueWithName:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)innerQueue;
-(void)syncBlock:(/*^block*/id)arg1 ;
-(id)syncReturningBlock:(/*^block*/id)arg1 ;
-(BOOL)syncBOOLReturningBlock:(/*^block*/id)arg1 ;
-(void)asyncBlock:(/*^block*/id)arg1 ;
@end

