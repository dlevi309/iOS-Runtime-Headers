/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@interface AVAssetCache : NSObject

@property (getter=isPlayableOffline,nonatomic,readonly) BOOL playableOffline; 
+(id)assetCacheWithURL:(id)arg1 ;
-(id)allKeys;
-(id)initWithURL:(id)arg1 ;
-(id)_init;
-(id)URL;
-(long long)maxSize;
-(id)lastModifiedDateOfEntryForKey:(id)arg1 ;
-(void)removeEntryForKey:(id)arg1 ;
-(id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1 ;
-(BOOL)isPlayableOffline;
-(long long)maxEntrySize;
-(long long)currentSize;
-(long long)sizeOfEntryForKey:(id)arg1 ;
@end

