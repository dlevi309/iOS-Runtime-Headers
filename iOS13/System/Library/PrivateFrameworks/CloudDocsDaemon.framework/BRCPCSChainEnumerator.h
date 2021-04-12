/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CoreFoundation/NSEnumerator.h>

@class BRCPrivateClientZone, NSMutableArray, NSError;

@interface BRCPCSChainEnumerator : NSEnumerator {

	unsigned long long _maxPathDepth;
	BRCPrivateClientZone* _clientZone;
	NSMutableArray* _stack;
	NSError* _error;

}
-(id)nextObject;
-(id)error;
-(id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2 ;
@end

