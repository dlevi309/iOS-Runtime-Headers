/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)objectForKey:(id)arg1 ;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyObjectForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
-(void)dealloc;
@end

