/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTUILogger;
@class AVTPresetResourceLoader, NSMutableDictionary;

@interface AVTAvatarAttributeEditorPreloader : NSObject {

	AVTPresetResourceLoader* _resourceLoader;
	NSMutableDictionary* _cancelationTokens;
	id<AVTUILogger> _logger;

}

@property (nonatomic,retain) AVTPresetResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cancelationTokens;               //@synthesize cancelationTokens=_cancelationTokens - In the implementation block
@property (nonatomic,retain) id<AVTUILogger> logger;                                //@synthesize logger=_logger - In the implementation block
-(NSMutableDictionary *)cancelationTokens;
-(void)preloadCategory:(id)arg1 ;
-(void)cancelAllPreloading;
-(id)initWithResourceLoader:(id)arg1 logger:(id)arg2 ;
-(void)preloadSectionItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)cancelPreloadForSectionItemIndexPath:(id)arg1 ;
-(void)setCancelationTokens:(NSMutableDictionary *)arg1 ;
-(void)setLogger:(id<AVTUILogger>)arg1 ;
-(id<AVTUILogger>)logger;
-(void)setResourceLoader:(AVTPresetResourceLoader *)arg1 ;
-(AVTPresetResourceLoader *)resourceLoader;
-(void)dealloc;
@end

