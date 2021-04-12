/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(BOOL)isEmpty;
-(void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 ;
-(void)postNotification:(id)arg1 ;
-(void)postNotificationName:(id)arg1 object:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(id)_initWithCFNotificationCenter:(CFNotificationCenterRef)arg1 ;
-(unsigned long long)_addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4 options:(unsigned long long)arg5 ;
-(void)_removeObserver:(unsigned long long)arg1 ;
-(id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

