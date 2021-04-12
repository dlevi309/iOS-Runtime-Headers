/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/_PASZonedObject.h>

@class _PASLock;

@interface _PASInternPool : _PASZonedObject {

	_PASLock* _lock;
	/*^block*/id _copyWithZone;

}
-(void)clear;
-(id)intern:(id)arg1 ;
-(id)init;
-(BOOL)isInterned:(id)arg1 ;
-(id)_intern:(id)arg1 copyInput:(BOOL)arg2 ;
-(id)internNoCopy:(id)arg1 ;
-(id)initWithBehavior:(unsigned long long)arg1 copyWithZone:(/*^block*/id)arg2 ;
@end

