/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/

#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/GSAdditionEnumerating.h>

@class NSError, GSPermanentStorage, NSString, NSArray, GSDaemonProxySync;

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {

	GSPermanentStorage* _storage;
	NSString* _nameSpace;
	unsigned long long _withOptions;
	unsigned long long _withoutOptions;
	NSArray* _array;
	unsigned long long _pos;
	GSDaemonProxySync* _proxy;
	NSError* _error;
	id _token;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)nextObject;
-(NSError *)error;
-(void)_fetchNextBatch;
-(id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5 ;
@end

