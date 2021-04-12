/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

