/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator;

@interface CRKFilteredEnumerator : NSEnumerator {

	NSEnumerator* _enumerator;
	/*^block*/id _filterBlock;

}

@property (nonatomic,readonly) NSEnumerator * enumerator;              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,readonly) id filterBlock;                         //@synthesize filterBlock=_filterBlock - In the implementation block
-(id)nextObject;
-(NSEnumerator *)enumerator;
-(id)filterBlock;
-(BOOL)shouldRejectItem:(id)arg1 ;
-(id)initWithEnumerator:(id)arg1 filterBlock:(/*^block*/id)arg2 ;
@end

