/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol OS_dispatch_queue, MPMediaLibraryDataProvider;
@class NSMutableDictionary, NSObject;

@interface MPConcreteMediaEntityPropertiesCache : NSObject {

	Class _dataProviderEntityClass;
	long long _identifier;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _valuePersistenceBlocks;
	NSObject*<OS_dispatch_queue> _propertiesQueue;
	id<MPMediaLibraryDataProvider> _dataProvider;

}

@property (nonatomic,__weak,readonly) id<MPMediaLibraryDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) Class dataProviderEntityClass;                                   //@synthesize dataProviderEntityClass=_dataProviderEntityClass - In the implementation block
@property (nonatomic,readonly) long long identifier;                                            //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(long long)identifier;
-(void)delete;
-(id<MPMediaLibraryDataProvider>)dataProvider;
-(void)cachePropertyValues:(id)arg1 forProperties:(id)arg2 persistValueInBackgroundBlock:(/*^block*/id)arg3 ;
-(void)cacheValue:(id)arg1 forProperty:(id)arg2 persistValueInBackgroundBlock:(/*^block*/id)arg3 ;
-(id)valueForProperty:(id)arg1 isCached:(BOOL*)arg2 ;
-(Class)dataProviderEntityClass;
-(id)initWithLibraryDataProvider:(id)arg1 dataProviderEntityClass:(Class)arg2 identifier:(long long)arg3 ;
-(void)_onBarrierCacheValues:(id)arg1 persistValueInBackgroundBlock:(/*^block*/id)arg2 ;
@end

