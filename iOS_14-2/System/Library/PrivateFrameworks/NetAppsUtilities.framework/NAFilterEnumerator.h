/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)filter;
-(NSEnumerator *)enumerator;
-(id)allObjects;
-(id)initWithEnumerator:(id)arg1 filter:(/*^block*/id)arg2 ;
@end

