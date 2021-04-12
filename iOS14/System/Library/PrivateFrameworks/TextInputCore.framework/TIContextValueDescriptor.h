/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <TextInputCore/TIMetricDescriptor.h>

@class NSString;

@interface TIContextValueDescriptor : TIMetricDescriptor {

	NSString* _contextFieldName;

}

@property (retain) NSString * contextFieldName;              //@synthesize contextFieldName=_contextFieldName - In the implementation block
+(id)contextValueDescriptorWithMetricName:(id)arg1 contextFieldName:(id)arg2 ;
-(id)initWithMetricName:(id)arg1 contextFieldName:(id)arg2 ;
-(NSString *)contextFieldName;
-(void)setContextFieldName:(NSString *)arg1 ;
@end

