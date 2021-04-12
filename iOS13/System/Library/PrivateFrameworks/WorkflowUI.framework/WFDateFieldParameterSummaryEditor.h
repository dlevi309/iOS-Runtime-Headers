/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTextInputParameterSummaryEditor.h>
#import <libobjc.A.dylib/WFParameterEventObserver.h>

@class WFTextEditingHintView, NSDateFormatter, NSString;

@interface WFDateFieldParameterSummaryEditor : WFTextInputParameterSummaryEditor <WFParameterEventObserver> {

	WFTextEditingHintView* _hintView;
	NSDateFormatter* _hintDateFormatter;

}

@property (assign,nonatomic,__weak) WFTextEditingHintView * hintView;              //@synthesize hintView=_hintView - In the implementation block
@property (nonatomic,retain) NSDateFormatter * hintDateFormatter;                  //@synthesize hintDateFormatter=_hintDateFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parameterAttributesDidChange:(id)arg1 ;
-(NSDateFormatter *)hintDateFormatter;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryDidFinish;
-(void)updateHintView;
-(id)hintTextForVariableString:(id)arg1 ;
-(WFTextEditingHintView *)hintView;
-(void)setHintView:(WFTextEditingHintView *)arg1 ;
-(void)setHintDateFormatter:(NSDateFormatter *)arg1 ;
@end

