/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(unsigned long long)type;
-(NSString *)recordKey;
-(NSString *)value;
-(id)stringRepresentationWithRecordType:(id)arg1 ;
@end

