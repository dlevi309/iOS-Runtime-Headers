/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSHashTable, UIImage, NSString, CPMemoryPool;

@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _unmaskedImages;
	NSHashTable* _failedIcons;
	UIImage* _genericImage;
	UIImage* _overlayImage;
	UIImage* _unmaskedOverlayImage;
	NSHashTable* _observedIcons;
	NSHashTable* _observers;
	NSString* _name;
	unsigned long long _poolingBypassCount;
	CPMemoryPool* _iconImagesMemoryPool;
	SBIconImageInfo _iconImageInfo;

}

@property (nonatomic,readonly) CPMemoryPool * iconImagesMemoryPool;                  //@synthesize iconImagesMemoryPool=_iconImagesMemoryPool - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo;                        //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (nonatomic,readonly) UIImage * genericImage; 
@property (nonatomic,readonly) UIImage * overlayImage; 
@property (nonatomic,readonly) UIImage * unmaskedOverlayImage; 
@property (assign,nonatomic) unsigned long long poolingBypassCount;                  //@synthesize poolingBypassCount=_poolingBypassCount - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCachedImages; 
@property (nonatomic,readonly) unsigned long long numberOfCacheHits; 
@property (nonatomic,readonly) unsigned long long numberOfCacheMisses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_backgroundQueue;
+(BOOL)supportsMemoryPooling;
+(id)overlayImageWithInfo:(SBIconImageInfo)arg1 ;
+(id)unmaskedOverlayImageWithInfo:(SBIconImageInfo)arg1 ;
+(id)genericImageWithInfo:(SBIconImageInfo)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIImage *)overlayImage;
-(SBIconImageInfo)iconImageInfo;
-(id)initWithName:(id)arg1 iconImageInfo:(SBIconImageInfo)arg2 ;
-(void)cacheImage:(id)arg1 forIcon:(id)arg2 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(id)imageForIcon:(id)arg1 ;
-(unsigned long long)numberOfCachedImages;
-(unsigned long long)numberOfCacheHits;
-(unsigned long long)numberOfCacheMisses;
-(void)purgeCachedImagesForIcons:(id)arg1 ;
-(void)purgeAllCachedImages;
-(void)cacheImagesForIcons:(id)arg1 ;
-(id)cachedImageForIcon:(id)arg1 ;
-(UIImage *)genericImage;
-(void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)unmaskedImageForIcon:(id)arg1 ;
-(UIImage *)unmaskedOverlayImage;
-(id)realImageForIcon:(id)arg1 ;
-(id)_cacheKeyForIcon:(id)arg1 ;
-(id)pooledIconImageForMappedIconImage:(id)arg1 ;
-(void)beginObservingIconIfNecessary:(id)arg1 ;
-(id)cachedUnmaskedImageForIcon:(id)arg1 ;
-(void)endObservingIcon:(id)arg1 ;
-(void)endObservingAllIcons;
-(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(double)arg2 withDrawing:(/*^block*/id)arg3 ;
-(unsigned long long)poolingBypassCount;
-(CPMemoryPool *)iconImagesMemoryPool;
-(BOOL)_canPoolImage;
-(id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(BOOL)arg2 ;
-(id)_iconImageOfSize:(CGSize)arg1 scale:(double)arg2 failGracefully:(BOOL)arg3 drawing:(/*^block*/id)arg4 ;
-(void)notifyObserversOfUpdateForIcon:(id)arg1 ;
-(id)memoryMappedIconImageForIconImage:(id)arg1 ;
-(void)setPoolingBypassCount:(unsigned long long)arg1 ;
@end

