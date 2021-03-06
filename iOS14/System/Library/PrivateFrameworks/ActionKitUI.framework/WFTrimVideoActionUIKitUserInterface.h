/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <WorkflowKit/WFActionUserInterface.h>
#import <UIKit/UIVideoEditorControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/WFTrimVideoActionUserInterface.h>

@class WFFileRepresentation, NSString;

@interface WFTrimVideoActionUIKitUserInterface : WFActionUserInterface <UIVideoEditorControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate, WFTrimVideoActionUserInterface> {

	BOOL _hasSaved;
	WFFileRepresentation* _copiedFile;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) WFFileRepresentation * copiedFile;              //@synthesize copiedFile=_copiedFile - In the implementation block
@property (assign,nonatomic) BOOL hasSaved;                                  //@synthesize hasSaved=_hasSaved - In the implementation block
@property (nonatomic,copy) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)videoEditorControllerDidCancel:(id)arg1 ;
-(void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)cancelPresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showWithVideo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)copyFileToDealWithBadUIVideoEditorControllerSandboxHandling:(id)arg1 ;
-(void)dismissEditor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WFFileRepresentation *)copiedFile;
-(void)setCopiedFile:(WFFileRepresentation *)arg1 ;
-(BOOL)hasSaved;
-(void)setHasSaved:(BOOL)arg1 ;
@end

