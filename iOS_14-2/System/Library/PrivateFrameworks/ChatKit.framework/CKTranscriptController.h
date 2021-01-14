/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKCoreTranscriptController.h>
#import <libobjc.A.dylib/CKCoreTranscriptControllerProtocol.h>

@class NSString, CKConversation, IMChat, CKTranscriptCollectionView, NSArray, NSIndexSet, CKImpactEffectManager, CKFullScreenEffectManager, UITapGestureRecognizer;

@interface CKTranscriptController : CKCoreTranscriptController <CKCoreTranscriptControllerProtocol>

@property (nonatomic,readonly) NSString * transcriptIdentifier; 
@property (nonatomic,readonly) CKConversation * conversation; 
@property (nonatomic,readonly) IMChat * chat; 
@property (nonatomic,readonly) CKTranscriptCollectionView * collectionView; 
@property (nonatomic,copy,readonly) NSArray * chatItems; 
@property (nonatomic,copy,readonly) NSArray * associatedChatItems; 
@property (nonatomic,readonly) UIEdgeInsets marginInsets; 
@property (nonatomic,readonly) double balloonMaxWidth; 
@property (assign,nonatomic,__weak) id<CKTranscriptCollectionViewControllerDelegate> delegate; 
@property (nonatomic,retain) UIView*<CKGradientReferenceView> gradientReferenceView; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> updateAnimationGroup; 
@property (nonatomic,copy) NSIndexSet * hiddenItems; 
@property (nonatomic,copy) NSIndexSet * hiddenAssociatedItems; 
@property (nonatomic,copy) NSIndexSet * hiddenBalloonViews; 
@property (assign,getter=isInitialLoad,nonatomic) BOOL initialLoad; 
@property (assign,nonatomic) BOOL shouldLoadDefaultConversationViewingMessageCountOnAppear; 
@property (nonatomic,retain) CKImpactEffectManager * impactEffectManager; 
@property (nonatomic,retain) CKFullScreenEffectManager * fullscreenEffectManager; 
@property (assign,nonatomic) BOOL transitionedFromComposing; 
@property (assign,nonatomic) BOOL transitioningFromComposing; 
@property (assign,getter=isTranscriptUpdateAnimated,nonatomic) BOOL transcriptUpdateAnimated; 
@property (assign,nonatomic) BOOL allowsPluginPlayback; 
@property (assign,nonatomic) double pluginPlaybackDelay; 
@property (setter=__setCurrentTestName:,nonatomic,retain) NSString * __CurrentTestName; 
@property (assign,nonatomic) long long contentAnimationPauseReasons; 
@property (assign,nonatomic,__weak) id<UIDragInteractionDelegate> dragInteractionDelegate; 
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@end

