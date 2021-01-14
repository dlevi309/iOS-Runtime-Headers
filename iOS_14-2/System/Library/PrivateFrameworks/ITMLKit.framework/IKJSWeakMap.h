/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

