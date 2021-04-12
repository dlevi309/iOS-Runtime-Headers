/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFCloudKitWebServiceQueryFilter.h>

@class NSString;

@interface WFCloudKitWebServiceQueryFilterComparison : WFCloudKitWebServiceQueryFilter {

	NSString* _recordKey;
	unsigned long long _type;
	NSString* _value;

}

@property (nonatomic,retain) NSString * recordKey;                 //@synthesize recordKey=_recordKey - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * value;                     //@synthesize value=_value - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)recordKey;
-(void)setRecordKey:(NSString *)arg1 ;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

