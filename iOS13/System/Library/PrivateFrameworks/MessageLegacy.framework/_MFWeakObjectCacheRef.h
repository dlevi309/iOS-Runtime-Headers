/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


@protocol NSCopying;
@class MFWeakObjectCache;

@interface _MFWeakObjectCacheRef : NSObject {

	id<NSCopying> _key;
	MFWeakObjectCache* _cache;

}

@property (nonatomic,copy) id<NSCopying> key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic,__weak) MFWeakObjectCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)dealloc;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(void)setCache:(MFWeakObjectCache *)arg1 ;
-(MFWeakObjectCache *)cache;
@end

