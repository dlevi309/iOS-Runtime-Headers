/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <CoreFoundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;
@interface OKCollectionProxy : NSDictionary {

	id<OKCollectionProxyDataSource> _dataSource;
	unsigned long long _tag;

}

@property (assign,nonatomic) id<OKCollectionProxyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(unsigned long long)tag;
-(id<OKCollectionProxyDataSource>)dataSource;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
-(void)setTag:(unsigned long long)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
@end

