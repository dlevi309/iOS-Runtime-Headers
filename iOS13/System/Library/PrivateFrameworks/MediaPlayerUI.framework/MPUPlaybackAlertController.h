/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <UIKitCore/UIAlertController.h>

@class MPAVItem, NSError;

@interface MPUPlaybackAlertController : UIAlertController {

	long long _playbackAlertType;
	MPAVItem* _item;
	NSError* _error;

}

@property (nonatomic,readonly) long long playbackAlertType;              //@synthesize playbackAlertType=_playbackAlertType - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
+(long long)playbackAlertTypeForError:(id)arg1 ;
+(id)contentRestrictedPlaybackAlertControllerForContentType:(long long)arg1 dismissalBlock:(/*^block*/id)arg2 ;
+(id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(/*^block*/id)arg3 ;
+(id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
+(id)playbackAlertControllerForItem:(id)arg1 contentType:(long long)arg2 error:(id)arg3 dismissalBlock:(/*^block*/id)arg4 ;
-(NSError *)error;
-(MPAVItem *)item;
-(long long)playbackAlertType;
@end

