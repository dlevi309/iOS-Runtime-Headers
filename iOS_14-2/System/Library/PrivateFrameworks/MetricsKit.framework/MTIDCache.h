/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSMutableDictionary;

@interface MTIDCache : NSObject {

	NSMutableDictionary* _cache;

}

@property (nonatomic,retain) NSMutableDictionary * cache;              //@synthesize cache=_cache - In the implementation block
+(BOOL)idInfo:(id)arg1 isValidForDate:(id)arg2 ;
-(NSMutableDictionary *)cache;
-(id)init;
-(void)setCache:(NSMutableDictionary *)arg1 ;
-(void)removeNamespace:(id)arg1 ;
-(void)removeAllNamespaces;
-(void)removeUnsyncedNamespaces;
-(void)removeNamespaces:(id)arg1 ;
-(id)IDInfoForScheme:(id)arg1 date:(id)arg2 ;
-(void)addIDInfo:(id)arg1 ;
@end

