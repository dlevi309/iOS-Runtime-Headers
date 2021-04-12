/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKRemoteObject : NSObject {

	RetainPtr<_WKRemoteObjectRegistry>* _objectRegistry;
	RetainPtr<_WKRemoteObjectInterface>* _interface;

}
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

