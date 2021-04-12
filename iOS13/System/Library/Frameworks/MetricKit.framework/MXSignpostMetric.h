/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class NSString, MXSignpostIntervalData;

@interface MXSignpostMetric : MXMetric {

	NSString* _signpostName;
	NSString* _signpostCategory;
	MXSignpostIntervalData* _signpostIntervalData;
	unsigned long long _totalCount;

}

@property (readonly) NSString * signpostName;                                    //@synthesize signpostName=_signpostName - In the implementation block
@property (readonly) NSString * signpostCategory;                                //@synthesize signpostCategory=_signpostCategory - In the implementation block
@property (readonly) MXSignpostIntervalData * signpostIntervalData;              //@synthesize signpostIntervalData=_signpostIntervalData - In the implementation block
@property (readonly) unsigned long long totalCount;                              //@synthesize totalCount=_totalCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)totalCount;
-(id)toDictionary;
-(NSString *)signpostName;
-(id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4 ;
-(NSString *)signpostCategory;
-(MXSignpostIntervalData *)signpostIntervalData;
@end

