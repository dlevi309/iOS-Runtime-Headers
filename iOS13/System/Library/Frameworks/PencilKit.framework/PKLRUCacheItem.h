/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol NSCopying;
@interface PKLRUCacheItem : NSObject {

	id<NSCopying> _key;
	PKLRUCacheItem* _next;
	PKLRUCacheItem* _prev;
	id _object;
	unsigned long long _cost;

}
@end

