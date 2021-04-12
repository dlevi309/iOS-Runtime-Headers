/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteToolView.h>
#import <libobjc.A.dylib/PKPaletteInkingTool.h>
#import <libobjc.A.dylib/PKPaletteSelectingTool.h>

@protocol PKPaletteInkingTool;
@class NSString, PKInk;

@interface PKPaletteSelectingToolView : PKPaletteToolView <PKPaletteInkingTool, PKPaletteSelectingTool> {

	id<PKPaletteInkingTool> _inkTool;

}

@property (nonatomic,retain) id<PKPaletteInkingTool> inkTool;              //@synthesize inkTool=_inkTool - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PKInk * ink; 
-(void)setSelected:(BOOL)arg1 ;
-(void)setInkColor:(id)arg1 ;
-(PKInk *)ink;
-(id)initWithToolIdentifier:(id)arg1 ;
-(void)setInkWeight:(double)arg1 ;
-(id)attributeViewController;
-(id<PKPaletteInkingTool>)inkTool;
-(void)setInkTool:(id<PKPaletteInkingTool>)arg1 ;
@end

