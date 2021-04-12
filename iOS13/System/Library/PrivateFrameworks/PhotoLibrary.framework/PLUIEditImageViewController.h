/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/

#import <PhotoLibrary/PLUIImageViewController.h>

@interface PLUIEditImageViewController : PLUIImageViewController {

	id _delegate;
	int _saveOptions;
	int _mode;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                 //@synthesize mode=_mode - In the implementation block
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)photo;
-(id)initWithPhoto:(id)arg1 ;
-(unsigned short)imageFormat;
-(void)setImageSavingOptions:(int)arg1 ;
-(int)saveOptions;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(id)imageTile;
-(int)cropOverlayMode;
@end

