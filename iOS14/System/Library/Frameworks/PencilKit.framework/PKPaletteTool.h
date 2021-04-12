/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class NSString;


@protocol PKPaletteTool <NSObject>
@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@required
-(NSString *)toolIdentifier;
-(BOOL)isInkingTool;
-(BOOL)isErasingTool;
-(BOOL)isRulerTool;
-(BOOL)isLassoTool;
-(BOOL)isHandwritingTool;
-(id<PKPaletteInkingTool>)inkingTool;
-(id<PKPaletteErasingTool>)erasingTool;

@end

