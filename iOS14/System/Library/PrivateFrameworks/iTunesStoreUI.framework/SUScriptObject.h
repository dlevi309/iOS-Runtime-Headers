/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSMutableArray, SUScriptObjectInvocationBatch, NSLock, SUScriptNativeObject, NSMutableSet, NSString, SUClientInterface, WebFrame;

@interface SUScriptObject : NSObject {

	NSMutableArray* _eventListeners;
	SUScriptObjectInvocationBatch* _invocationBatch;
	NSLock* _lock;
	SUScriptNativeObject* _nativeObject;
	SUScriptObject* _parentScriptObject;
	NSMutableSet* _scriptObjects;
	unsigned _checkOutWhenHidden : 1;
	unsigned _isVisible : 1;
	NSString* _className;

}

@property (retain) SUScriptNativeObject * nativeObject; 
@property (readonly) OpaqueJSContextRef copyJavaScriptContext; 
@property (retain,readonly) SUClientInterface * clientInterface; 
@property (assign) SUScriptObject * parentScriptObject; 
@property (readonly) BOOL sourceIsTrusted; 
@property (retain,readonly) WebFrame * webFrame; 
@property (readonly) NSMutableArray * scriptAttributeKeys; 
@property (getter=_className,readonly) NSString * className; 
+(void)initialize;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)unlock;
-(id)stringRepresentation;
-(id)init;
-(id)parentViewController;
-(void)setVisible:(BOOL)arg1 ;
-(WebFrame *)webFrame;
-(void)lock;
-(BOOL)isVisible;
-(BOOL)equals:(id)arg1 ;
-(void)finalizeForWebScript;
-(id)viewControllerFactory;
-(SUClientInterface *)clientInterface;
-(id)_className;
-(void)dealloc;
-(NSMutableArray *)scriptAttributeKeys;
-(void)checkInScriptObject:(id)arg1 ;
-(OpaqueJSContextRef)copyJavaScriptContext;
-(id)DOMElementWithElement:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)setNativeObject:(SUScriptNativeObject *)arg1 ;
-(void)tearDownUserInterface;
-(void)checkInScriptObjects:(id)arg1 ;
-(SUScriptNativeObject *)nativeObject;
-(id)webThreadMainThreadBatchProxy;
-(void)checkOutBatchTarget:(id)arg1 ;
-(void)setParentScriptObject:(SUScriptObject *)arg1 ;
-(void)checkOutScriptObjects:(id)arg1 ;
-(SUScriptObject *)parentScriptObject;
-(id)_copyListenersForName:(id)arg1 ;
-(id)newImageWithURL:(id)arg1 scale:(double)arg2 ;
-(BOOL)scriptObjectIsCheckedIn:(id)arg1 ;
-(void)_checkOutAfterVisibilityChange;
-(void)checkOutScriptObject:(id)arg1 ;
-(void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(void)loadImageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)newImageWithURL:(id)arg1 ;
-(BOOL)sourceIsTrusted;
-(id)invocationBatch:(BOOL)arg1 ;
-(void)didPerformBatchedInvocations;
-(void)willPerformBatchedInvocations;
@end

