/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteErasingTool.h>
#import <libobjc.A.dylib/PKPaletteErasingAttributesViewControllerDelegate.h>

@class PKPaletteAttributeViewController, NSString;

@interface PKPaletteErasingToolView : PKPaletteToolView <PKPaletteErasingTool, PKPaletteErasingAttributesViewControllerDelegate> {

	BOOL _bitmapEraser;
	PKPaletteAttributeViewController* _attributeViewController;

}

@property (assign,getter=isBitmapEraser,nonatomic) BOOL bitmapEraser;              //@synthesize bitmapEraser=_bitmapEraser - In the implementation block
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)erasingAttributesViewControllerDidChangeErasingType:(id)arg1 ;
-(NSString *)toolIdentifier;
-(id)initWithToolIdentifier:(id)arg1 ;
-(id)attributeViewController;
-(void)setBitmapEraser:(BOOL)arg1 ;
-(BOOL)isBitmapEraser;
-(void)_updateAttributesViewController;
@end

