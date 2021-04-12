/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFDateFieldParameter.h>

@class HKSampleType;

@interface WFHealthActionEndDateFieldParameter : WFDateFieldParameter {

	HKSampleType* _sampleType;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
-(BOOL)isHidden;
-(HKSampleType *)sampleType;
-(void)setSampleType:(HKSampleType *)arg1 ;
@end

