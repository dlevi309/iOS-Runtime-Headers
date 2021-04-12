/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteInkingTool.h>
#import <libobjc.A.dylib/PKPaletteSelectingTool.h>

@protocol PKPaletteInkingTool;
@class PKInk, NSString;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool> {

	id<PKPaletteInkingTool> _inkTool;

}

@property (nonatomic,retain) id<PKPaletteInkingTool> inkTool;                     //@synthesize inkTool=_inkTool - In the implementation block
@property (nonatomic,readonly) PKInk * ink; 
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PKInk *)ink;
-(void)setSelected:(BOOL)arg1 ;
-(id<PKPaletteInkingTool>)inkTool;
-(void)setInkColor:(id)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(id)initWithToolIdentifier:(id)arg1 ;
-(id)attributeViewController;
-(void)setInkTool:(id<PKPaletteInkingTool>)arg1 ;
@end

