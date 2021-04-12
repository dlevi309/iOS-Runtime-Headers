/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@protocol NSObjectNSCopying, NSObject;
@interface ASKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) id<NSObject> cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<NSObject>)cacheKey;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(id<NSObject><NSCopying>)requestKey;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
@end

