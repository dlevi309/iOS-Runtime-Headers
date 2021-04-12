/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class NSString, NSArray;


@protocol PKDrawingPaletteViewStateSubject <PKPaletteViewStateSubject>
@property (nonatomic,readonly) id<PKPaletteTool> selectedTool; 
@property (getter=isAnnotationSupportEnabled,nonatomic,readonly) BOOL annotationSupportEnabled; 
@property (nonatomic,readonly) BOOL showsHandwritingTool; 
@property (nonatomic,readonly) NSString * handwritingToolLocaleIdentifier; 
@property (getter=isHandwritingToolSelected,nonatomic,readonly) BOOL handwritingToolSelected; 
@property (nonatomic,copy,readonly) NSArray * inputAssistantItems; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL enableKeyboardButtons; 
@property (nonatomic,readonly) long long floatingKeyboardType; 
@required
-(BOOL)isVisible;
-(BOOL)isHandwritingToolSelected;
-(BOOL)isAnnotationSupportEnabled;
-(BOOL)showsHandwritingTool;
-(NSString *)handwritingToolLocaleIdentifier;
-(BOOL)enableKeyboardButtons;
-(long long)floatingKeyboardType;
-(NSArray *)inputAssistantItems;
-(id<PKPaletteTool>)selectedTool;

@end

