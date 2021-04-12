/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned long long _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)_updateVisitedCount:(id)arg1 ;
-(void)dealloc;
@end

