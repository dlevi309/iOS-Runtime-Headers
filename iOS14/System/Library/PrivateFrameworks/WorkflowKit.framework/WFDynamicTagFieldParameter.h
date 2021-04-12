/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

