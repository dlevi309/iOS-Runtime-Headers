/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/GSAdditionEnumerating.h>

@class GSTemporaryStorage, NSString, NSError, NSDirectoryEnumerator, NSArray;

@interface GSTemporaryAddtionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSTemporaryStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOption;
	NSError* _error;
	NSDirectoryEnumerator* _enumerator;
	NSArray* _array;
	unsigned long long _pos;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)nextObject;
-(NSError *)error;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
-(id)_nextURL;
@end

