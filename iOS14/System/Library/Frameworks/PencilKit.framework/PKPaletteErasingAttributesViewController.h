/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteAttributeViewController.h>

@protocol PKPaletteErasingAttributesViewControllerDelegate;
@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController {

	id<PKPaletteErasingAttributesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long eraserType; 
@property (assign,nonatomic,__weak) id<PKPaletteErasingAttributesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)_preferredContentSizeWidth;
-(id<PKPaletteErasingAttributesViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaletteErasingAttributesViewControllerDelegate>)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)setEraserType:(long long)arg1 ;
-(long long)eraserType;
-(void)_segmentedControlDidChangeValue:(id)arg1 ;
@end

