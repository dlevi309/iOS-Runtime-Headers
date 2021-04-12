/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSProxy.h>

@class NSUndoManager;

@interface NSUndoManagerProxy : NSProxy {

	NSUndoManager* _manager;
	Class _targetClass;

}
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithManager:(id)arg1 ;
-(void)setTargetClass:(Class)arg1 ;
-(void)superRelease;
@end

