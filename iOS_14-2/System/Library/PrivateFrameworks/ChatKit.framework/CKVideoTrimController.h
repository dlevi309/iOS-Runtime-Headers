/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CKTrimControllerDelegate>)delegate;
-(CKUIVideoEditorController *)editVideoVC;
-(void)setOriginalMediaObject:(CKMediaObject *)arg1 ;
-(CKMediaObject *)originalMediaObject;
-(CKMediaObject *)trimmedMediaObject;
-(void)setTrimmedMediaObject:(CKMediaObject *)arg1 ;
-(void)setEditVideoVC:(CKUIVideoEditorController *)arg1 ;
-(id)initWithMediaObject:(id)arg1 maxTrimDuration:(double)arg2 ;
-(void)setDelegate:(id<CKTrimControllerDelegate>)arg1 ;
-(void)videoEditorControllerDidCancel:(id)arg1 ;
-(void)videoEditorController:(id)arg1 didSaveEditedVideoToPath:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)videoEditorController:(id)arg1 didTrimVideoWithOptions:(id)arg2 ;
-(void)dealloc;
@end

