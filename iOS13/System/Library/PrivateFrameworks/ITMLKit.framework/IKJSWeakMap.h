/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKJSObject.h>

@class JSManagedValue;

@interface IKJSWeakMap : IKJSObject {

	JSManagedValue* _managedWeakMap;

}

@property (nonatomic,readonly) JSManagedValue * managedWeakMap;              //@synthesize managedWeakMap=_managedWeakMap - In the implementation block
-(id)initWithAppContext:(id)arg1 ;
-(id)_jsWeakMap;
-(JSManagedValue *)managedWeakMap;
-(void)setValue:(id)arg1 forWeakKey:(id)arg2 ;
-(id)valueForWeakKey:(id)arg1 ;
-(const OpaqueJSValueRef)valueRefForWeakKeyRef:(OpaqueJSValueRef)arg1 ;
@end

