/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFilterEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _filter;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id filter;                         //@synthesize filter=_filter - In the implementation block
-(id)nextObject;
-(id)allObjects;
-(NSEnumerator *)enumerator;
-(id)filter;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
@end

