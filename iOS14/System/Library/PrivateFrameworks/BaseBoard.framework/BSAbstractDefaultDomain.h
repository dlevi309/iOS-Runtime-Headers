/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSMutableSet, NSMutableDictionary;

@interface BSAbstractDefaultDomain : NSObject {

	NSUserDefaults* _userDefaults;
	BOOL _boundDefaults;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSMutableSet* _observerQueue_observers;
	NSMutableDictionary* _defaultKeyToDefaultValue;

}
+(void)initialize;
+(BOOL)__useDynamicMethodResolution;
-(id)init;
-(void)resetAllDefaults;
-(id)observeDefaults:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 ;
-(void)_setUserDefaults:(id)arg1 ;
-(void)synchronizeDefaults;
-(id)observeDefault:(id)arg1 onQueue:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 ;
-(id)_initWithDefaults:(id)arg1 ;
-(id)_initWithDomain:(id)arg1 ;
-(id)description;
-(id)_store;
-(void)_bindAndRegisterDefaults;
-(void)_bindProperty:(id)arg1 withDefaultKey:(id)arg2 toDefaultValue:(id)arg3 options:(unsigned long long)arg4 ;
-(void)dealloc;
@end

