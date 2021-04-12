/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class NSString;

@interface PMObjectCacheEntry : NSObject {

	NSString* _cacheKey;
	unsigned _hashValue;
	id _item;
	unsigned long long _size;
	unsigned long long _lastAccess;
	float _freq;
	float _value;
	double _cost;

}
-(id)cacheKey;
-(unsigned long long)lastAccess;
-(void)setLastAccess:(unsigned long long)arg1 ;
-(unsigned)hashValue;
-(void)setCacheKey:(id)arg1 ;
-(double)cost;
-(unsigned long long)getSize;
-(id)getItem;
-(void)dealloc;
-(id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5 ;
-(void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3 ;
-(void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3 ;
-(float)getValue:(unsigned long long)arg1 decayRate:(float)arg2 ;
-(BOOL)canBePurgedFromCache;
@end

