/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

