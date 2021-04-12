/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)teardown;
-(AKController *)controller;
-(void)revalidateItems;
-(BOOL)isPresentingPopover;
-(void)setFillColorUIDisplayToColor:(id)arg1 ;
-(void)setStrokeColorUIDisplayToColor:(id)arg1 ;
-(id)_toolbarButtonItemOfType:(unsigned long long)arg1 ;
@end

