/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)_textButtonTouchUpInsideHandler:(id)arg1 ;
-(void)_signatureButtonTouchUpInsideHandler:(id)arg1 ;
@end

