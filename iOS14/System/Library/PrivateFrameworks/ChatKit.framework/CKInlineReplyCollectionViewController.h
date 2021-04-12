/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTranscriptCollectionViewController.h>

@class NSDictionary;

@interface CKInlineReplyCollectionViewController : CKTranscriptCollectionViewController {

	BOOL _animatingIn;
	BOOL _animatingOut;
	NSDictionary* _currentFrameMapForNextReload;
	NSDictionary* _targetFrameMapForAnimateOut;

}

@property (nonatomic,retain) NSDictionary * currentFrameMapForNextReload;              //@synthesize currentFrameMapForNextReload=_currentFrameMapForNextReload - In the implementation block
@property (nonatomic,retain) NSDictionary * targetFrameMapForAnimateOut;               //@synthesize targetFrameMapForAnimateOut=_targetFrameMapForAnimateOut - In the implementation block
@property (assign,getter=isAnimatingIn,nonatomic) BOOL animatingIn;                    //@synthesize animatingIn=_animatingIn - In the implementation block
@property (assign,getter=isAnimatingOut,nonatomic) BOOL animatingOut;                  //@synthesize animatingOut=_animatingOut - In the implementation block
+(id)chatItemsDidChangeNotification;
-(BOOL)_canUseOpaqueMask;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)setScrollAnchor:(double)arg1 ;
-(id)imChatItems;
-(id)transcriptBackgroundColor;
-(BOOL)isInline;
-(void)viewDidAppearDeferredSetup;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 notifications:(id)arg3 balloonMaxWidth:(double)arg4 marginInsets:(UIEdgeInsets)arg5 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(BOOL)isAnimatingOut;
-(BOOL)isAnimatingIn;
-(id)_replyTranscriptBubbleFilterForUserInterfaceStyle:(long long)arg1 ;
-(NSDictionary *)currentFrameMapForNextReload;
-(NSDictionary *)targetFrameMapForAnimateOut;
-(void)setAnimatingOut:(BOOL)arg1 ;
-(void)setCurrentFrameMapForNextReload:(NSDictionary *)arg1 ;
-(void)setTargetFrameMapForAnimateOut:(NSDictionary *)arg1 ;
-(void)loadEarlierMessagesForConversation;
-(void)loadRecentMessagesForConversation;
-(id)overrideCurrentFrameMapForLayout:(id)arg1 ;
-(id)overrideTargetFrameMapForLayout:(id)arg1 ;
-(void)setCollectionViewCurrentFrames:(id)arg1 ;
-(void)setCollectionViewTargetFrames:(id)arg1 ;
-(void)setAnimatingIn:(BOOL)arg1 ;
@end

