/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKPaletteTextOptionsViewControllerDelegate;
@interface PKPaletteTextOptionsViewController : UIViewController {

	id<PKPaletteTextOptionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPaletteTextOptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPaletteTextOptionsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteTextOptionsViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)_textButtonTouchUpInsideHandler:(id)arg1 ;
-(void)_signatureButtonTouchUpInsideHandler:(id)arg1 ;
@end

