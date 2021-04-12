/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) UIFont * textFieldFont; 
@property (nonatomic,readonly) CGSize tileSize; 
-(CGSize)tileSize;
-(UITraitCollection *)traitCollection;
-(void)setTraitCollection:(UITraitCollection *)arg1 ;
-(id)baseFont;
-(id)initWithTraitCollection:(id)arg1 ;
-(double)scaledValueForValue:(double)arg1 ;
-(UIFont *)textFieldFont;
-(UIFont *)typeSelectionTitleFont;
-(UIFont *)typeSelectionTypeLabelFont;
-(id)scaledFont;
@end

