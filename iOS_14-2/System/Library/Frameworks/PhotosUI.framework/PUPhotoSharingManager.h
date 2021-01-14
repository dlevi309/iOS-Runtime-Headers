/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PLPublishingAgentDelegate.h>

@class PLProgressView, NSTimer, NSMutableArray;

@interface PUPhotoSharingManager : NSObject <PLPublishingAgentDelegate> {

	PLProgressView* _publishingProgressView;
	NSTimer* _publishingProgressTimer;
	NSMutableArray* _publishingAgents;
	long long _videoRemakingCount;
	long long _appSuspensionCount;
	long long _networkPromptCount;
	unsigned long long _backgroundTaskIdentifier;

}

@property (assign,getter=isRemaking,nonatomic) BOOL remaking; 
@property (nonatomic,readonly) PLProgressView * publishingProgressView; 
+(id)sharedInstance;
-(BOOL)isRemaking;
-(void)publishingAgentDidStartRemaking:(id)arg1 ;
-(void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)publishingAgentWillBeDisplayed:(id)arg1 ;
-(void)publishingAgentDoneButtonClicked:(id)arg1 ;
-(void)publishingAgentCancelButtonClicked:(id)arg1 ;
-(void)publishingAgentDidBeginPublishing:(id)arg1 ;
-(void)_setNetworkPromptShowing:(BOOL)arg1 ;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2 ;
-(void)_setFlag:(BOOL)arg1 forReferenceCounter:(long long*)arg2 performIfChanged:(/*^block*/id)arg3 ;
-(void)_setDelaysAppSuspend:(BOOL)arg1 ;
-(id)_currentPublishingAgent;
-(void)_schedulePublishingProgressViewUpdate;
-(void)_updatePublishingProgressView:(id)arg1 ;
-(void)_cleanUpPublishingProgressView;
-(void)_addPublishingAgentIfNeeded:(id)arg1 ;
-(void)_removePublishingAgent:(id)arg1 ;
-(void)setRemaking:(BOOL)arg1 ;
-(BOOL)prepareForDismissingForced:(BOOL)arg1 ;
-(void)dealloc;
-(void)cancelPublishing;
-(PLProgressView *)publishingProgressView;
@end

