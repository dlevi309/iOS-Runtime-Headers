/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject {

	NSMutableDictionary* _eventSpecMap;

}

@property (nonatomic,retain) NSMutableDictionary * eventSpecMap;              //@synthesize eventSpecMap=_eventSpecMap - In the implementation block
+(id)sharedInstance;
-(id)initFromConfig:(id)arg1 ;
-(id)replacePeriodsInString:(id)arg1 ;
-(void)setEventSpecMap:(NSMutableDictionary *)arg1 ;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)loadEventSpecMapFromConfig:(id)arg1 ;
-(NSMutableDictionary *)eventSpecMap;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 ;
@end

