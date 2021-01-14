/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@protocol NSObjectNSCopying, NSObject;
@interface GKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,copy) id<NSObject> cacheKey;                            //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(id<NSObject>)cacheKey;
-(id<NSObject><NSCopying>)requestKey;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
-(id)init;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

