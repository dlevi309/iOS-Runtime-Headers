/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCustomTableItem.h>

@class NSArray;

@interface WFSegmentedControlTableItem : WFCustomTableItem {

	NSArray* _possibleValues;

}

@property (nonatomic,copy,readonly) NSArray * possibleValues;              //@synthesize possibleValues=_possibleValues - In the implementation block
+(id)itemWithInitialValue:(id)arg1 possibleValues:(id)arg2 ;
-(NSArray *)possibleValues;
-(void)configureCell:(id)arg1 ;
-(void)segmentedControlSelectedItemAtIndex:(unsigned long long)arg1 ;
@end

