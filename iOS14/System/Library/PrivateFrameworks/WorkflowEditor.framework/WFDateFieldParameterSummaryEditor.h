/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WFTextInputParameterSummaryEditor.h>
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
-(void)textEntryDidFinish;
-(void)textEntryTextDidChange:(id)arg1 ;
-(void)textEntryWillBegin:(id)arg1 allowMultipleLines:(BOOL*)arg2 ;
-(void)updateHintView;
-(id)hintTextForVariableString:(id)arg1 ;
-(WFTextEditingHintView *)hintView;
-(void)setHintView:(WFTextEditingHintView *)arg1 ;
-(void)setHintDateFormatter:(NSDateFormatter *)arg1 ;
@end

