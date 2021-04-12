/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <WorkflowKit/WFActionUserInterface.h>
#import <libobjc.A.dylib/QLPreviewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/WFQuickLookActionUserInterface.h>

@class WFContentCollection, QLPreviewController, NSString;

@interface WFQuickLookActionUIKitUserInterface : WFActionUserInterface <QLPreviewControllerPrivateDelegate, WFQuickLookActionUserInterface> {

	/*^block*/id _completionHandler;
	WFContentCollection* _dataSource;
	QLPreviewController* _previewController;

}

@property (nonatomic,copy) id completionHandler;                                   //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) WFContentCollection * dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) QLPreviewController * previewController;              //@synthesize previewController=_previewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(WFContentCollection *)dataSource;
-(void)setPreviewController:(QLPreviewController *)arg1 ;
-(id)completionHandler;
-(void)setDataSource:(WFContentCollection *)arg1 ;
-(BOOL)previewController:(id)arg1 canShareItem:(id)arg2 ;
-(QLPreviewController *)previewController;
-(void)finishWithError:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithItems:(id)arg1 fullScreen:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

