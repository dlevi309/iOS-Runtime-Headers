/*
* Generated on Thursday, January 14, 2021 at 2:28:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
*/


@interface PRLikenessCacheContext : NSObject {

	BOOL _circular;
	BOOL _forceDecode;
	unsigned long long _cacheSize;
	double _scale;

}

@property (assign,nonatomic) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign,nonatomic) BOOL circular;                             //@synthesize circular=_circular - In the implementation block
@property (assign,nonatomic) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL forceDecode;                          //@synthesize forceDecode=_forceDecode - In the implementation block
+(id)contextWithCacheSize:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)cacheSize;
-(double)scale;
-(void)setCircular:(BOOL)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(BOOL)circular;
-(BOOL)forceDecode;
-(void)setForceDecode:(BOOL)arg1 ;
@end

