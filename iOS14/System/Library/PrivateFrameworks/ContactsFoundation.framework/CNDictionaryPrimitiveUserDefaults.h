/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNPrimitiveUserDefaults.h>

@class NSMutableDictionary, NSString;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {

	NSMutableDictionary* _preferences;
	unsigned long long _synchronizeCount;
	unsigned long long _setupAutosyncCount;

}

@property (readonly) unsigned long long synchronizeCount;                //@synthesize synchronizeCount=_synchronizeCount - In the implementation block
@property (readonly) unsigned long long setupAutosyncCount;              //@synthesize setupAutosyncCount=_setupAutosyncCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)synchronize;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(unsigned long long)setupAutosyncCount;
-(unsigned long long)synchronizeCount;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
@end

