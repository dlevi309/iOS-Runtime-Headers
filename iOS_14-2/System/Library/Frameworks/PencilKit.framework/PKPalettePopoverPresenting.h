/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UIViewController;


@protocol PKPalettePopoverPresenting <NSObject>
@property (nonatomic,retain) UIViewController * palettePopoverPresentingController; 
@required
-(BOOL)isPalettePresentingPopover;
-(UIViewController *)palettePopoverPresentingController;
-(BOOL)wantsCustomPalettePopoverPresentationSource;
-(id)palettePopoverSourceView;
-(UIEdgeInsets*)palettePopoverLayoutMargins;
-(BOOL)shouldPalettePresentPopover;
-(id)palettePopoverPassthroughViews;
-(unsigned long long)palettePopoverPermittedArrowDirections;
-(CGRect*)palettePopoverSourceRect;
-(void)updatePalettePopover:(id)arg1;
-(void)setPalettePopoverPresentingController:(id)arg1;

@end

