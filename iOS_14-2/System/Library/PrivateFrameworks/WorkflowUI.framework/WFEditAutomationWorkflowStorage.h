/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/WFWorkflowStorage.h>

@class WFWorkflowReference, WFWorkflowRecord, NSString;

@interface WFEditAutomationWorkflowStorage : NSObject <WFWorkflowStorage> {

	WFWorkflowReference* _reference;
	WFWorkflowRecord* _originalRecord;
	WFWorkflowRecord* _lastSavedRecord;

}

@property (nonatomic,readonly) WFWorkflowReference * reference;              //@synthesize reference=_reference - In the implementation block
@property (nonatomic,copy) WFWorkflowRecord * originalRecord;                //@synthesize originalRecord=_originalRecord - In the implementation block
@property (nonatomic,copy) WFWorkflowRecord * lastSavedRecord;               //@synthesize lastSavedRecord=_lastSavedRecord - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFWorkflowReference *)reference;
-(BOOL)saveRecord:(id)arg1 error:(id*)arg2 ;
-(BOOL)reloadRecord:(id)arg1 error:(id*)arg2 ;
-(id)initWithReference:(id)arg1 originalRecord:(id)arg2 ;
-(WFWorkflowRecord *)originalRecord;
-(void)setOriginalRecord:(WFWorkflowRecord *)arg1 ;
-(WFWorkflowRecord *)lastSavedRecord;
-(void)setLastSavedRecord:(WFWorkflowRecord *)arg1 ;
@end

