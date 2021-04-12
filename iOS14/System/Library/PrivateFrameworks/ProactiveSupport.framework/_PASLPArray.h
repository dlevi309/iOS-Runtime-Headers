/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <ProactiveSupport/_PASLazyArrayBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol _PASLPReaderProtocol;
@class _PASLPArrayContext;

@interface _PASLPArray : _PASLazyArrayBase <NSFastEnumeration> {

	id<_PASLPReaderProtocol> _reader;
	_PASLPArrayContext* _context;

}
-(id)init;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLazyPlistReader:(id)arg1 context:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

