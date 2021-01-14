/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPQueueFeeder.h>
#import <libobjc.A.dylib/MPCQueueControllerDataSource.h>

@class NSString;

@interface _MPCNullQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource> {

	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) BOOL containsLiveStream; 
@property (nonatomic,readonly) BOOL containsTransportableContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)uniqueIdentifier;
-(id)playbackInfoForItem:(id)arg1 ;
-(BOOL)containsTransportableContent;
-(BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2 ;
-(void)loadPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)itemForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)supportsAutoPlayForItem:(id)arg1 inSection:(id)arg2 ;
-(BOOL)containsLiveStream;
@end

