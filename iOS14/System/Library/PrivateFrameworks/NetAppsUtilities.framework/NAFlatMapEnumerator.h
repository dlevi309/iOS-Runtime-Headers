/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface NAFlatMapEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _map;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,copy,readonly) id map;                            //@synthesize map=_map - In the implementation block
-(id)nextObject;
-(NSEnumerator *)enumerator;
-(id)allObjects;
-(id)map;
-(id)initWithEnumerator:(id)arg1 map:(/*^block*/id)arg2 ;
@end

