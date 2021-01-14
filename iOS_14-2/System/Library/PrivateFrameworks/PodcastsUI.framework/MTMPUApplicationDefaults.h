/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@protocol OS_dispatch_queue;
#import <PodcastsUI/PodcastsUI-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface MTMPUApplicationDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _applicationIdentifier;
	NSDictionary* _defaultValues;
	unsigned long long _referenceCountForDefferringUpdates;

}
-(void)registerDefaults:(id)arg1 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(id)dictionaryForKey:(id)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)_defaultsDidChange;
-(BOOL)boolForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)dealloc;
-(id)_defaultsDidChangeNotificationName;
-(id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long long)arg2 ;
-(CFStringRef)_defaultsDomain;
-(void)_applyUpdates;
@end

