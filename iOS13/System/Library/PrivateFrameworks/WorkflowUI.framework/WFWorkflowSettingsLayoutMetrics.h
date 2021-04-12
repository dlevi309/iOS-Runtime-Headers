/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


#import <WorkflowUI/WorkflowUI-Structs.h>
@class UITraitCollection, UIFont;

@interface WFWorkflowSettingsLayoutMetrics : NSObject {

	UITraitCollection* _traitCollection;

}

@property (nonatomic,retain) UITraitCollection * traitCollection;                //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIFont * typeSelectionTitleFont; 
@property (nonatomic,readonly) UIFont * typeSelectionTypeLabelFont; 
@property (nonatomic,readonly) UIFont * emptyStateFont; 
@property (nonatomic,readonly) UIFont * emptyStateButtonFont; 
@property (nonatomic,readonly) UIFont * textFieldFont; 
@property (nonatomic,readonly) CGSize tileSize; 
@property (nonatomic,readonly) double emptySizeButtonHeight; 
-(UITraitCollection *)traitCollection;
-(double)scaledValueForValue:(double)arg1 ;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(CGSize)tileSize;
-(id)baseFont;
-(id)initWithTraitCollection:(id)arg1 ;
-(UIFont *)typeSelectionTitleFont;
-(UIFont *)typeSelectionTypeLabelFont;
-(UIFont *)emptyStateFont;
-(UIFont *)emptyStateButtonFont;
-(UIFont *)textFieldFont;
-(double)emptySizeButtonHeight;
-(id)scaledFont;
@end

