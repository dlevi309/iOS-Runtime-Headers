/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)init;
-(void)setTag:(unsigned long long)arg1 ;
-(unsigned long long)tag;
-(id<OKCollectionProxyDataSource>)dataSource;
-(unsigned long long)count;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
@end

