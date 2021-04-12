/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKPluginPlaybackManagerDelegate;
@class NSMutableArray;

@interface CKPluginPlaybackManager : NSObject {

	unsigned long long _currentIndex;
	BOOL _isPlayingBack;
	id<CKPluginPlaybackManagerDelegate> _delegate;
	NSMutableArray* __pluginItems;

}

@property (setter=_setPluginItems:,nonatomic,retain) NSMutableArray * _pluginItems;              //@synthesize _pluginItems=__pluginItems - In the implementation block
@property (assign,setter=_setPlayingBack:,nonatomic) BOOL isPlayingBack;                         //@synthesize isPlayingBack=_isPlayingBack - In the implementation block
@property (assign,nonatomic,__weak) id<CKPluginPlaybackManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)stopPlayback;
-(void)_cleanup;
-(id<CKPluginPlaybackManagerDelegate>)delegate;
-(void)setDelegate:(id<CKPluginPlaybackManagerDelegate>)arg1 ;
-(void)_setPluginItems:(id)arg1 ;
-(void)_setPlayingBack:(BOOL)arg1 ;
-(NSMutableArray *)_pluginItems;
-(void)startPlayback;
-(id)initWithPluginItems:(id)arg1 ;
-(void)addPluginItem:(id)arg1 ;
-(BOOL)isPlayingBack;
-(void)dealloc;
@end

