/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)totalCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(NSString *)signpostName;
-(id)initWithCoder:(id)arg1 ;
-(MXSignpostIntervalData *)signpostIntervalData;
-(id)initWithSignpostName:(id)arg1 withSignpostCategory:(id)arg2 withTotalCount:(unsigned long long)arg3 withSignpostIntervalData:(id)arg4 ;
-(NSString *)signpostCategory;
@end

