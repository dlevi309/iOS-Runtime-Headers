/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_init;
-(id)cacheForContext:(id)arg1 ;
-(void)releaseCache:(id)arg1 forContext:(id)arg2 ;
-(NSMutableDictionary *)cachesByPath;
-(NSMutableDictionary *)checkoutsByPath;
-(void)setCachesByPath:(NSMutableDictionary *)arg1 ;
-(void)setCheckoutsByPath:(NSMutableDictionary *)arg1 ;
@end

