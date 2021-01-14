/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

