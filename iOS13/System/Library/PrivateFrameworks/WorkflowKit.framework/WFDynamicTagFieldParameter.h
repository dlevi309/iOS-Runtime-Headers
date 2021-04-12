/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFTagFieldParameter.h>

@protocol WFDynamicTagFieldDataSource;
@interface WFDynamicTagFieldParameter : WFTagFieldParameter {

	id<WFDynamicTagFieldDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<WFDynamicTagFieldDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(id<WFDynamicTagFieldDataSource>)dataSource;
-(void)setDataSource:(id<WFDynamicTagFieldDataSource>)arg1 ;
-(id)suggestedTags;
@end

