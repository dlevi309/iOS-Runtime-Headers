/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFTableSection.h>

@interface WFObjectBasedTableSection : WFTableSection {

	long long _cellStyle;
	Class _cellClass;
	/*^block*/id _configurationBlock;

}

@property (nonatomic,readonly) long long cellStyle;                //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) Class cellClass;                    //@synthesize cellClass=_cellClass - In the implementation block
@property (nonatomic,readonly) id configurationBlock;              //@synthesize configurationBlock=_configurationBlock - In the implementation block
-(void)setRepresentedObjects:(id)arg1 ;
-(void)addRepresentedObject:(id)arg1 ;
-(Class)cellClass;
-(id)configurationBlock;
-(long long)cellStyle;
-(id)initWithCellClass:(Class)arg1 cellStyle:(long long)arg2 representedObjects:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
@end

