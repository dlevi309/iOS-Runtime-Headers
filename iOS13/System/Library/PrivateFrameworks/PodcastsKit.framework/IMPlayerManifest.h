/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(BOOL)isLoaded;
-(NSUserActivity *)activity;
-(void)setActivity:(NSUserActivity *)arg1 ;
-(void)next;
-(void)previous;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)load:(/*^block*/id)arg1 ;
-(void)setCurrentItem:(IMPlayerItem *)arg1 ;
-(IMPlayerItem *)currentItem;
-(unsigned long long)currentIndex;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(BOOL)hasNext;
-(void)_load:(/*^block*/id)arg1 ;
-(BOOL)hasPrevious;
-(void)assertIndexInBounds:(unsigned long long)arg1 ;
-(void)nextManifest:(/*^block*/id)arg1 ;
-(void)postManifestDidChangeNotification;
@end

