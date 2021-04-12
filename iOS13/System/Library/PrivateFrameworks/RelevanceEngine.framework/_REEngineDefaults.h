/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
@class NSString, NSUserDefaults, NSMutableSet, NSMutableDictionary, NSObject;

@interface _REEngineDefaults : NSObject {

	NSString* _domain;
	NSUserDefaults* _defaults;
	NSMutableSet* _registeredPaths;
	NSMutableDictionary* _registeredBlocks;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
+(id)defaultsForEngine:(id)arg1 ;
+(id)globalDefaults;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)_domainName;
-(id)initWithDomain:(id)arg1 ;
-(BOOL)_BOOLValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(long long)_NSIntegerValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(id)_idValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(void)_registerCallback:(/*^block*/id)arg1 forKey:(id)arg2 ;
@end

