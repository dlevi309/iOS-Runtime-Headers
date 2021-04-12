/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSObject, NSString;

@interface WKObject : NSProxy <WKObject> {

	BOOL _hasInitializedTarget;
	NSObject* _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(BOOL)isNSDate__;
-(BOOL)isNSString__;
-(BOOL)isNSCFConstantString__;
-(BOOL)isNSNumber__;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(Class)classForCoder;
-(BOOL)isNSArray__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSData__;
-(BOOL)isNSObject__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSSet__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(Class)classForKeyedArchiver;
-(Object*)_apiObject;
-(id)_web_createTarget;
@end

