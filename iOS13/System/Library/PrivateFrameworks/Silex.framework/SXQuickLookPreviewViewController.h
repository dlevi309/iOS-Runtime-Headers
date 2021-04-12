/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@protocol SXMediaSharingPolicyProvider;
@class SXQuickLookFile, SXQuickLookTransitionContext, NSString;

@interface SXQuickLookPreviewViewController : QLPreviewController <QLPreviewControllerPrivateDelegate, QLPreviewControllerDataSource> {

	SXQuickLookFile* _file;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
	SXQuickLookTransitionContext* _transitionContext;

}

@property (nonatomic,readonly) SXQuickLookFile * file;                                                   //@synthesize file=_file - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;              //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (nonatomic,readonly) SXQuickLookTransitionContext * transitionContext;                         //@synthesize transitionContext=_transitionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXQuickLookFile *)file;
-(void)viewDidLoad;
-(SXQuickLookTransitionContext *)transitionContext;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id)initWithFile:(id)arg1 mediaSharingPolicyProvider:(id)arg2 transitionContext:(id)arg3 ;
@end

