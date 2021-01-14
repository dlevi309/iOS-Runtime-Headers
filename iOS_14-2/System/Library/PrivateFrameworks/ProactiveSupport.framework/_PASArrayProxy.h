/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <ProactiveSupport/_PASLazyArrayBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface _PASArrayProxy : _PASLazyArrayBase <NSFastEnumeration> {

	/*^block*/id _objectAtIndexBlock;
	/*^block*/id _countBlock;

}
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)_pas_unproxy;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

