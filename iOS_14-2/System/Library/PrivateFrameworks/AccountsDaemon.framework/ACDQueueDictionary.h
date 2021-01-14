/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {

	NSMutableDictionary* _allQueuesByID;

}
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(BOOL)isQueueEmptyForKey:(id)arg1 ;
-(void)addObject:(id)arg1 toQueueForKey:(id)arg2 ;
-(id)dequeueFirstObjectInQueueForKey:(id)arg1 ;
-(id)firstObjectInQueueForKey:(id)arg1 ;
-(id)dequeueAllObjectsInQueueForKey:(id)arg1 ;
-(id)keyForRandomQueue;
@end

