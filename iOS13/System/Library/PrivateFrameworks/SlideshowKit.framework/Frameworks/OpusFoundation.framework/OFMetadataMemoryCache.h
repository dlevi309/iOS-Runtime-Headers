/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
*/


@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {

	OFLRUCache* _memoryCache;
	BOOL _allowCleanupOnMemoryWarnings;
	BOOL _allowCleanupOnEnteringBackground;
	unsigned long long _hasChanges;

}

@property (assign,nonatomic) BOOL allowCleanupOnMemoryWarnings;                  //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL allowCleanupOnEnteringBackground;              //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(BOOL)hasChanges;
-(BOOL)writeToURL:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 ;
-(id)attributesForIdentifier:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setNumberOfMemorySlots:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(BOOL)arg1 ;
-(BOOL)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(BOOL)arg1 ;
-(void)resetChanges;
-(unsigned long long)numberOfMemorySlots;
-(unsigned long long)numberOfUsedMemorySlots;
-(void)invalidateForIdentifier:(id)arg1 ;
@end

