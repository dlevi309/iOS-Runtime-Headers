/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreFoundation/NSEnumerator.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSString;

@interface _SGNSStringEncodingEnumerator : NSEnumerator <NSFastEnumeration> {

	NSString* _string;
	unsigned long long _encoding;
	NSRange _remaining;
	BOOL _needsBOM;
	BOOL _needsNullTermination;

}
-(id)nextObject;
-(id)init;
-(id)initWithString:(id)arg1 encoding:(unsigned long long)arg2 nullTerminated:(BOOL)arg3 ;
-(id)nullTerminationIfNeeded;
@end

