/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;
@interface PKPaletteErasingAttributesViewController : UIViewController {

	id<PKPaletteErasingAttributesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long eraserType; 
@property (assign,nonatomic,__weak) id<PKPaletteErasingAttributesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)_preferredContentSizeWidth;
-(id<PKPaletteErasingAttributesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteErasingAttributesViewControllerDelegate>)arg1 ;
-(void)loadView;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)setEraserType:(long long)arg1 ;
-(long long)eraserType;
-(void)_segmentedControlDidChangeValue:(id)arg1 ;
@end

