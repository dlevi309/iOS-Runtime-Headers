/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned long long _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithGraph:(id)arg1 ;
-(unsigned long long)_updateVisitedCount:(id)arg1 ;
@end

