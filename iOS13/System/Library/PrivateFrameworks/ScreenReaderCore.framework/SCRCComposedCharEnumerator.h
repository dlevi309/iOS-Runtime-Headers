/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString;

@interface SCRCComposedCharEnumerator : NSEnumerator {

	BOOL _done;
	NSString* _string;
	unsigned long long _indexOfCurrentComposedCharacter;

}
-(id)nextObject;
-(id)allObjects;
-(id)initWithString:(id)arg1 ;
@end

