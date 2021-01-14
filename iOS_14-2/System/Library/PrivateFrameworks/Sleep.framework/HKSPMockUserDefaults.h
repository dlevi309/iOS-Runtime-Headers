/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <Sleep/Sleep-Structs.h>
#import <libobjc.A.dylib/HKSPUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface HKSPMockUserDefaults : NSObject <HKSPUserDefaults> {

	os_unfair_lock_s _defaultsLock;
	NSMutableDictionary* _defaults;

}

@property (nonatomic,readonly) NSMutableDictionary * defaults;              //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s defaultsLock;               //@synthesize defaultsLock=_defaultsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)defaults;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(float)floatForKey:(id)arg1 ;
-(id)init;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(BOOL)boolForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(os_unfair_lock_s)defaultsLock;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

