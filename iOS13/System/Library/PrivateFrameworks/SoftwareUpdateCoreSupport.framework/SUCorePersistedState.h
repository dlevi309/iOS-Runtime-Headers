/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary;

@interface SUCorePersistedState : NSObject {

	NSObject*<OS_dispatch_queue> _persistedStateQueue;
	NSString* _persistencePath;
	NSString* _versionPolicyLayer;
	NSMutableDictionary* _persistedState;
	NSString* _versionSUCore;

}

@property (nonatomic,retain) NSMutableDictionary * persistedState;                            //@synthesize persistedState=_persistedState - In the implementation block
@property (nonatomic,retain) NSString * persistencePath;                                      //@synthesize persistencePath=_persistencePath - In the implementation block
@property (nonatomic,retain) NSString * versionPolicyLayer;                                   //@synthesize versionPolicyLayer=_versionPolicyLayer - In the implementation block
@property (nonatomic,retain) NSString * versionSUCore;                                        //@synthesize versionSUCore=_versionSUCore - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> persistedStateQueue;              //@synthesize persistedStateQueue=_persistedStateQueue - In the implementation block
-(id)description;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSString *)persistencePath;
-(void)setPersistencePath:(NSString *)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)summary;
-(BOOL)booleanForKey:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)persistedStateQueue;
-(NSMutableDictionary *)persistedState;
-(void)setPersistedState:(NSMutableDictionary *)arg1 ;
-(id)_createEmptyPersistedState;
-(BOOL)booleanForKey:(id)arg1 forType:(int)arg2 ;
-(unsigned long long)ullForKey:(id)arg1 forType:(int)arg2 ;
-(id)stringForKey:(id)arg1 forType:(int)arg2 ;
-(id)dictionaryForKey:(id)arg1 forType:(int)arg2 ;
-(id)dataForKey:(id)arg1 forType:(int)arg2 ;
-(id)dateForKey:(id)arg1 forType:(int)arg2 ;
-(id)objectForKey:(id)arg1 ofClass:(Class)arg2 forType:(int)arg3 ;
-(void)persistBoolean:(BOOL)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)_writePersistedState;
-(void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)persistString:(id)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)persistDictionary:(id)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)persistData:(id)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)persistDate:(id)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(void)persistObject:(id)arg1 forKey:(id)arg2 forType:(int)arg3 ;
-(NSString *)versionPolicyLayer;
-(NSString *)versionSUCore;
-(id)initWithDispatchQueue:(id)arg1 withPersistencePath:(id)arg2 forPolicyVersion:(id)arg3 ;
-(BOOL)isPersistedStateLoaded;
-(id)persistedContentsType;
-(id)persistedCoreVersion;
-(id)persistedPolicyVersion;
-(BOOL)loadPersistedState;
-(void)removePersistedState;
-(unsigned long long)ullForKey:(id)arg1 ;
-(void)persistBoolean:(BOOL)arg1 forKey:(id)arg2 ;
-(void)persistULL:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)persistString:(id)arg1 forKey:(id)arg2 ;
-(void)persistDictionary:(id)arg1 forKey:(id)arg2 ;
-(void)persistData:(id)arg1 forKey:(id)arg2 ;
-(void)persistDate:(id)arg1 forKey:(id)arg2 ;
-(void)persistObject:(id)arg1 forKey:(id)arg2 ;
-(void)setVersionPolicyLayer:(NSString *)arg1 ;
-(void)setVersionSUCore:(NSString *)arg1 ;
@end

