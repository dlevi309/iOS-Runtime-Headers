/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/


@protocol OS_dispatch_queue;
#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface MPUApplicationDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _applicationIdentifier;
	NSDictionary* _defaultValues;
	unsigned long long _referenceCountForDefferringUpdates;

}
-(void)dealloc;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)arrayForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(long long)integerForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)registerDefaults:(id)arg1 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setArray:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(id)arg1 forKey:(id)arg2 ;
-(id)numberForKey:(id)arg1 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(id)dateForKey:(id)arg1 ;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)_defaultsDidChange;
-(void)_setObject:(id)arg1 forKey:(id)arg2 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(id)initWithApplicationIdentifier:(id)arg1 ;
-(void)removeValueForKey:(id)arg1 ;
-(CFStringRef)_defaultsDomain;
-(id)_defaultsDidChangeNotificationName;
-(id)_objectForKey:(id)arg1 expectedTypeID:(unsigned long long)arg2 ;
-(void)_applyUpdates;
@end

