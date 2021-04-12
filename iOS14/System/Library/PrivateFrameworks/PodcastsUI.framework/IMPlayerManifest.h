/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
*/


@protocol OS_dispatch_queue;
@class NSString, IMPlayerItem, NSUserActivity, NSObject;

@interface IMPlayerManifest : NSObject {

	BOOL _isLoaded;
	NSString* _title;
	unsigned long long _currentIndex;
	IMPlayerItem* _currentItem;
	NSUserActivity* _activity;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSUserActivity * activity;                       //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) IMPlayerItem * currentItem;                      //@synthesize currentItem=_currentItem - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                   //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long currentIndex;                 //@synthesize currentIndex=_currentIndex - In the implementation block
+(id)_activityType;
+(void)createManifestForActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)activityTypeSuffix;
+(void)restoreActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)supportedActivityTypes;
+(void)registerManifestForRestoration:(Class)arg1 ;
-(unsigned long long)currentIndex;
-(void)load:(/*^block*/id)arg1 ;
-(void)next;
-(void)previous;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id)init;
-(NSUserActivity *)activity;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)count;
-(void)_load:(/*^block*/id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setActivity:(NSUserActivity *)arg1 ;
-(BOOL)hasNext;
-(id)description;
-(IMPlayerItem *)currentItem;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setCurrentItem:(IMPlayerItem *)arg1 ;
-(BOOL)isLoaded;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)title;
-(BOOL)hasPrevious;
-(void)assertIndexInBounds:(unsigned long long)arg1 ;
-(void)nextManifest:(/*^block*/id)arg1 ;
-(void)postLoadedAdditionalItemsNotification;
-(void)postManifestDidChangeNotification;
@end

