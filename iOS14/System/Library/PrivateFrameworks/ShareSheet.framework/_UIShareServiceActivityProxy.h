/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activityProxyForServiceActivityDataRequest:(id)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
-(void)_cleanup;
-(id)activityUUID;
-(id)activityType;
-(BOOL)_activitySupportsPromiseURLs;
-(void)prepareWithActivityItems:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)_isExecutedInProcess;
-(id)initWithUnderlyingActivityItemDataRequest:(id)arg1 ;
-(id)didFinishPreparingForExecution;
-(void)activityDidFinish:(BOOL)arg1 ;
-(void)_prepareWithActivityItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3 ;
-(void)setDidFinishPerformingActivityHandler:(id)arg1 ;
-(void)_willBePerformedOrPresented;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
-(BOOL)_wantsInitialSocialText;
-(id)didFinishPerformingActivityHandler;
-(BOOL)_managesOwnPresentation;
-(id)_embeddedActivityViewController;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_needsResolvedActivityItems;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(BOOL)allowsEmbedding;
-(CGSize)_thumbnailSize;
-(id)activityImage;
-(void)setDidFinishPreparingForExecution:(id)arg1 ;
-(id)activityViewController;
-(void)forwardInvocation:(id)arg1 ;
@end

