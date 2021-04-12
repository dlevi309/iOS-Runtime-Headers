/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUISettingValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableDictionary* _originalValues;
	NSMutableDictionary* _modifiedValues;

}
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)hasChanges;
-(void)commitChanges;
-(void)clearValueForKey:(id)arg1 ;
-(void)discardChanges;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg1 ;
-(id)resolvedValueForKey:(id)arg1 ;
-(void)setModifiedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOriginalValue:(id)arg1 forKey:(id)arg2 ;
@end

