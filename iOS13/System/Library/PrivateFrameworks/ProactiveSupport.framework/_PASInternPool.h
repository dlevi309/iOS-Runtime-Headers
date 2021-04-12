/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject {

	_PASLock* _lock;
	/*^block*/id _copyWithZone;

}
-(id)init;
-(void)clear;
-(id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(/*^block*/id)arg2 ;
-(id)intern:(id)arg1 ;
-(id)internNoCopy:(id)arg1 ;
-(id)_intern:(id)arg1 copyInput:(BOOL)arg2 ;
-(BOOL)isInterned:(id)arg1 ;
@end

