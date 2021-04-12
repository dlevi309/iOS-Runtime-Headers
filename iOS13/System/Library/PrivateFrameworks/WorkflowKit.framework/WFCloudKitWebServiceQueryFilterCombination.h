/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSArray *)filters;
-(void)setFilters:(NSArray *)arg1 ;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

