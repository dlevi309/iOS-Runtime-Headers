/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <CoreFoundation/NSArray.h>

@class NSMutableDictionary;

@interface AVFragmentedAssetsArray : NSArray {

	unsigned long long _count;
	unsigned long long _firstSequenceNumber;
	NSMutableDictionary* _cachedFragments;

}
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithCount:(unsigned long long)arg1 firstSequenceNumber:(unsigned long long)arg2 ;
-(void)dealloc;
@end

