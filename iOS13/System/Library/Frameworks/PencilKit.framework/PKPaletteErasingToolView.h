/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteErasingTool.h>
#import <libobjc.A.dylib/PKPaletteErasingAttributesViewControllerDelegate.h>

@class UIViewController, NSString;

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate> {

	BOOL _bitmapEraser;
	UIViewController* _attributeViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isBitmapEraser,nonatomic) BOOL bitmapEraser;              //@synthesize bitmapEraser=_bitmapEraser - In the implementation block
-(void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1 ;
-(id)initWithToolIdentifier:(id)arg1 ;
-(id)toolIdentifier;
-(id)attributeViewController;
-(void)setBitmapEraser:(BOOL)arg1 ;
-(BOOL)isBitmapEraser;
-(void)_updateAttributesViewController;
@end

