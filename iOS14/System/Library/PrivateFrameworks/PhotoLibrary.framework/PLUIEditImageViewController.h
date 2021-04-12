/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)mode;
-(id)photo;
-(id)delegate;
-(unsigned short)imageFormat;
-(void)setMode:(int)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(int)cropOverlayMode;
-(id)initWithPhoto:(id)arg1 ;
-(void)dealloc;
-(int)saveOptions;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)setImageSavingOptions:(int)arg1 ;
-(unsigned long long)_contentAutoresizingMask;
-(unsigned long long)_tileAutoresizingMask;
-(id)imageTile;
@end

