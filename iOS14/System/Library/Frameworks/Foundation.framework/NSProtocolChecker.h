/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProxy.h>

@class Protocol, NSObject;

@interface NSProtocolChecker : NSProxy

@property (readonly) Protocol * protocol; 
@property (retain,readonly) NSObject * target; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)protocolCheckerWithTarget:(id)arg1 protocol:(id)arg2 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(Protocol *)protocol;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(const char*)_localClassNameForClass;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(NSObject *)target;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

