/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


#import <WebCore/WebCore-Structs.h>
@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject {

	WebScriptObjectPrivate* _private;

}
+(void)initialize;
+(id)scriptObjectForJSObject:(OpaqueJSValueRef)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(id)_convertValueToObjcValue:(JSValue*)arg1 originRootObject:(RootObject*)arg2 rootObject:(RootObject*)arg3 ;
+(BOOL)throwException:(id)arg1 ;
-(void)_initializeScriptDOMNodeImp;
-(id)_init;
-(JSObject*)_imp;
-(oneway void)release;
-(id)stringRepresentation;
-(void)_setOriginRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg1 andRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(RootObject*)_rootObject;
-(id)valueForKey:(id)arg1 ;
-(id)objectAtIndex:(unsigned)arg1 ;
-(BOOL)_hasImp;
-(id)JSValue;
-(OpaqueJSValueRef)JSObject;
-(void)setException:(id)arg1 ;
-(id)_initWithJSObject:(JSObject*)arg1 originRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 rootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg3 ;
-(BOOL)_isSafeScript;
-(void)_setImp:(JSObject*)arg1 originRootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg2 rootObject:(RefPtr<JSC::Bindings::RootObject, WTF::DumbPtrTraits<JSC::Bindings::RootObject> >*)arg3 ;
-(RootObject*)_originRootObject;
-(OpaqueJSContextRef)_globalContextRef;
-(id)evaluateWebScript:(id)arg1 ;
-(id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(void)removeWebScriptKey:(id)arg1 ;
-(BOOL)hasWebScriptKey:(id)arg1 ;
-(id)webScriptValueAtIndex:(unsigned)arg1 ;
-(void)setWebScriptValueAtIndex:(unsigned)arg1 value:(id)arg2 ;
-(void)dealloc;
@end

