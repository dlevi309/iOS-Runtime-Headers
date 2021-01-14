/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
@class NSObject, NSUbiquitousKeyValueStore, NSString;

@interface CWFKeyValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSUbiquitousKeyValueStore* _ubiquitousKVS;
	BOOL _activated;
	long long _type;
	NSString* _identifier;
	/*^block*/id _invalidationHandler;
	/*^block*/id _eventHandler;

}

@property (assign,getter=isActivated,nonatomic) BOOL activated;              //@synthesize activated=_activated - In the implementation block
@property (readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (copy,readonly) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (copy) id invalidationHandler;                                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
-(void)removeAllEntries;
-(id)dictionaryRepresentation;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)__debugDescriptionForType:(long long)arg1 ;
-(BOOL)__synchronize;
-(void)setActivated:(BOOL)arg1 ;
-(void)activate;
-(BOOL)synchronize;
-(BOOL)isActivated;
-(id)objectForKey:(id)arg1 ;
-(long long)type;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithType:(long long)arg1 identifier:(id)arg2 ;
-(void)__ubiquitousKVSChanged:(id)arg1 ;
-(id)invalidationHandler;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

