/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUISettingValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableDictionary* _originalValues;
	NSMutableDictionary* _modifiedValues;

}
-(void)commitChanges;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(BOOL)hasChanges;
-(void)clearValueForKey:(id)arg1 ;
-(void)discardChanges;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg1 ;
-(id)resolvedValueForKey:(id)arg1 ;
-(void)setModifiedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOriginalValue:(id)arg1 forKey:(id)arg2 ;
@end

