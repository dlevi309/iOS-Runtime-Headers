/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyObjectForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
@end

