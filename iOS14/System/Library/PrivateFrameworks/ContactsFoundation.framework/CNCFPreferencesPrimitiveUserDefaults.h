/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/CNPrimitiveUserDefaults.h>

@class NSString;

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {

	NSString* _applicationID;
	long long _autosyncTimerIsActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)primitiveRemoveObjectForKey:(id)arg1 ;
-(id)primitiveObjectForKey:(id)arg1 ;
-(void)setupAutosync;
-(long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(BOOL)synchronize;
-(BOOL)primitiveBoolValueForKey:(id)arg1 keyExists:(BOOL*)arg2 ;
-(id)initWithApplicationID:(id)arg1 ;
-(CFStringRef)CFApplicationID;
-(void)setPrimitiveObject:(id)arg1 forKey:(id)arg2 ;
@end

