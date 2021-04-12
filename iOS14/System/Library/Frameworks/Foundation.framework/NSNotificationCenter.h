/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@interface NSNotificationCenter : NSObject {

	void* _impl;
	void* _callback;
	void** _pad[11];

}
+(id)defaultCenter;
+(id)_defaultCenterWithoutCreating;
-(void)_removeObserver:(unsigned long long)arg1 ;
-(id)init;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(unsigned long long)_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 options:(unsigned long long)arg5 ;
-(id)debugDescription;
-(id)_initWithCFNotificationCenter:(CFNotificationCenterRef)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)removeObserver:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)postNotification:(id)arg1 ;
-(BOOL)isEmpty;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
@end

