/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSArray;

@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter {

	NSArray* _filters;
	unsigned long long _type;

}

@property (nonatomic,retain) NSArray * filters;                    //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

