/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetricKit.framework/MetricKit
*/

#import <MetricKit/MXMetric.h>

@class MXForegroundExitData, MXBackgroundExitData;

@interface MXAppExitMetric : MXMetric {

	MXForegroundExitData* _foregroundExitData;
	MXBackgroundExitData* _backgroundExitData;

}

@property (readonly) MXForegroundExitData * foregroundExitData;              //@synthesize foregroundExitData=_foregroundExitData - In the implementation block
@property (readonly) MXBackgroundExitData * backgroundExitData;              //@synthesize backgroundExitData=_backgroundExitData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)toDictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithForegroundExitData:(id)arg1 backgroundExitData:(id)arg2 ;
-(MXForegroundExitData *)foregroundExitData;
-(MXBackgroundExitData *)backgroundExitData;
@end

