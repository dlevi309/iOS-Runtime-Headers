/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKPaletteConcreteBaseTool.h>
#import <libobjc.A.dylib/PKPaletteHandwritingTool.h>

@class NSString;

@interface PKPaletteConcreteHandwritingTool : PKPaletteConcreteBaseTool <PKPaletteHandwritingTool>

@property (nonatomic,readonly) NSString * toolIdentifier; 
@property (nonatomic,readonly) id<PKPaletteInkingTool> inkingTool; 
@property (nonatomic,readonly) id<PKPaletteErasingTool> erasingTool; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)toolIdentifier;
-(BOOL)isHandwritingTool;
@end

