/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(MFWeakObjectCache *)cache;
-(void)setCache:(MFWeakObjectCache *)arg1 ;
-(id<NSCopying>)key;
-(void)setKey:(id<NSCopying>)arg1 ;
-(void)dealloc;
@end

