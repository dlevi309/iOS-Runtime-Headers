/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFCustomTableItem.h>

@class NSString;

@interface WFSwitchTableItem : WFCustomTableItem {

	NSString* _primaryText;
	NSString* _secondaryText;

}

@property (nonatomic,readonly) NSString * primaryText;                //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,readonly) NSString * secondaryText;              //@synthesize secondaryText=_secondaryText - In the implementation block
+(id)itemWithPrimaryText:(id)arg1 initialValue:(id)arg2 ;
+(id)itemWithPrimaryText:(id)arg1 secondaryText:(id)arg2 initialValue:(id)arg3 ;
-(NSString *)primaryText;
-(NSString *)secondaryText;
-(void)configureCell:(id)arg1 ;
@end

