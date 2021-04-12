/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableDictionary;

@interface CKDPCSSQLCachePool : NSObject {

	NSMutableDictionary* _cachesByPath;
	NSMutableDictionary* _checkoutsByPath;

}

@property (nonatomic,retain) NSMutableDictionary * cachesByPath;                 //@synthesize cachesByPath=_cachesByPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * checkoutsByPath;              //@synthesize checkoutsByPath=_checkoutsByPath - In the implementation block
+(id)sharedPool;
-(void)releaseCache:(id)arg1 forContext:(id)arg2 ;
-(void)setCheckoutsByPath:(NSMutableDictionary *)arg1 ;
-(id)cacheForContext:(id)arg1 ;
-(NSMutableDictionary *)checkoutsByPath;
-(void)setCachesByPath:(NSMutableDictionary *)arg1 ;
-(id)_init;
-(NSMutableDictionary *)cachesByPath;
@end

