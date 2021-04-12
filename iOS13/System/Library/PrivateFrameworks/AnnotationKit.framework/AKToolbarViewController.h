/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>

@class AKController;

@interface AKToolbarViewController : UIViewController {

	AKController* _controller;

}

@property (__weak) AKController * controller;               //@synthesize controller=_controller - In the implementation block
@property (readonly) BOOL isPresentingPopover; 
+(id)imageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)_imageNameForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)titleForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(id)alternateImageForToolbarButtonItemOfType:(unsigned long long)arg1 ;
+(long long)buttonTypeForToolbarButtonItemOfType:(unsigned long long)arg1 ;
-(void)teardown;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(void)revalidateItems;
-(BOOL)isPresentingPopover;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
@end

