/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {

	NSUndoManager* _manager;
	Class _targetClass;

}
-(id)initWithManager:(id)arg1 ;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)superRelease;
-(void)setTargetClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

