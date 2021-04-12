/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


#import <ShareSheet/ShareSheet-Structs.h>
@class NSUUID, NSString, UISUIActivityExtensionItemDataRequest;

@interface _UIShareServiceActivityProxy : NSObject {

	NSUUID* _activityUUID;
	NSString* _activityType;
	long long _activityCategory;
	UISUIActivityExtensionItemDataRequest* _underlyingActivityItemDataRequest;
	Class _remoteClass;
	CGSize _thumbnailSize;
	/*^block*/id _didFinishPreparingForExecution;
	/*^block*/id _didFinishPerformingActivityHandler;

}

@property (nonatomic,copy) id didFinishPerformingActivityHandler;              //@synthesize didFinishPerformingActivityHandler=_didFinishPerformingActivityHandler - In the implementation block
@property (nonatomic,copy) id didFinishPreparingForExecution;                  //@synthesize didFinishPreparingForExecution=_didFinishPreparingForExecution - In the implementation block
+(void)forwardInvocation:(id)arg1 ;
+(id)activityProxyForServiceActivityDataRequest:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)activityType;
-(void)_cleanup;
-(CGSize)_thumbnailSize;
-(id)activityUUID;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activityViewController;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
-(id)activityImage;
-(void)_willBePerformedOrPresented;
-(BOOL)_activitySupportsPromiseURLs;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(id)didFinishPerformingActivityHandler;
-(id)_embeddedActivityViewController;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_managesOwnPresentation;
-(BOOL)_needsResolvedActivityItems;
-(void)setDidFinishPreparingForExecution:(id)arg1 ;
-(BOOL)allowsEmbedding;
-(BOOL)_isExecutedInProcess;
-(id)initWithUnderlyingActivityItemDataRequest:(id)arg1 ;
-(id)didFinishPreparingForExecution;
@end

