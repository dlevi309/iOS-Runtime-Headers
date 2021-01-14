/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class NSMutableDictionary, NSCache;

@interface MRUAssetsProvider : NSObject {

	NSMutableDictionary* _completionBlocks;
	NSCache* _imageCache;

}

@property (readonly) NSMutableDictionary * completionBlocks;              //@synthesize completionBlocks=_completionBlocks - In the implementation block
@property (readonly) NSCache * imageCache;                                //@synthesize imageCache=_imageCache - In the implementation block
+(id)menu;
+(id)like;
+(id)pause;
+(id)languageOptions;
+(id)play;
+(id)stop;
+(id)forward;
+(id)applicationIconForBundleIdentifier:(id)arg1 ;
+(id)airplay;
+(id)dislike;
+(id)systemImageNamedNumberAware:(id)arg1 ;
+(id)backward;
+(id)controlOtherSpeakers;
+(id)airPlayControlAudioForInterfaceStyle:(long long)arg1 ;
+(id)airPlayControlVideoForInterfaceStyle:(long long)arg1 ;
+(id)packageWithName:(id)arg1 ;
+(id)mapImageNameNumberAware:(id)arg1 ;
+(id)sharedAssetsProvider;
+(id)airplayVideo;
+(id)tvRemote;
+(id)wishlist;
+(id)goBackwardForTimeInterval:(double)arg1 ;
+(id)goForwardForTimeInterval:(double)arg1 ;
+(id)volumeMin;
+(id)volumeMax;
+(id)volumeThumbWithSize:(double)arg1 ;
+(id)volumeTrackWithHeight:(double)arg1 ;
+(id)routingOutline;
+(id)routingAccessoryMultiDeselected;
+(id)routingAccessorySelected;
+(id)routingAccessoryMultiSelected;
-(NSMutableDictionary *)completionBlocks;
-(id)init;
-(NSCache *)imageCache;
-(void)imageForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

