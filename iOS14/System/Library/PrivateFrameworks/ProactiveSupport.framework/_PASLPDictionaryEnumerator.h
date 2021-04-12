/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <CoreFoundation/NSEnumerator.h>

@protocol _PASLPReaderProtocol;
@class _PASLPDictionaryContext;

@interface _PASLPDictionaryEnumerator : NSEnumerator {

	id<_PASLPReaderProtocol> _reader;
	_PASLPDictionaryContext* _context;
	unsigned long long _ofs;

}
-(id)nextObject;
-(id)initWithLazyPlistReader:(id)arg1 context:(id)arg2 ;
@end

