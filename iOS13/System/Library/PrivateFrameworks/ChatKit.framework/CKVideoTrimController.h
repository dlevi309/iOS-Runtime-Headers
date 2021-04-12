/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKit/UIVideoEditorControllerDelegatePrivate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CKTrimControllerDelegate;
@class CKMediaObject, CKUIVideoEditorController, NSString;

@interface CKVideoTrimController : NSObject <UIVideoEditorControllerDelegatePrivate, UINavigationControllerDelegate> {

	CKMediaObject* _originalMediaObject;
	CKMediaObject* _trimmedMediaObject;
	CKUIVideoEditorController* _editVideoVC;
	id<CKTrimControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKTrimControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKMediaObject * originalMediaObject;                       //@synthesize originalMediaObject=_originalMediaObject - In the implementation block
@property (nonatomic,retain) CKMediaObject * trimmedMediaObject;                        //@synthesize trimmedMediaObject=_trimmedMediaObject - In the implementation block
@property (nonatomic,retain) CKUIVideoEditorController * editVideoVC;                   //@synthesize editVideoVC=_editVideoVC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<CKTrimControllerDelegate>)delegate;
-(void)setDelegate:(id<CKTrimControllerDelegate>)arg1 ;
-(void)videoEditorControllerDidCancel:(id)arg1 ;
-(void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2 ;
-(CKUIVideoEditorController *)editVideoVC;
-(void)setOriginalMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)originalMediaObject;
-(void)setTrimmedMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)trimmedMediaObject;
-(void)setEditVideoVC:(CKUIVideoEditorController *)arg1 ;
@end

