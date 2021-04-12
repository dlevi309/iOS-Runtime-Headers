/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSRTCLogger : NSObject <CUTMetricLogger> {

	unsigned short _category;

}

@property (nonatomic,readonly) unsigned short category;              //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)loggerWithCategory:(unsigned short)arg1 ;
-(unsigned short)category;
-(void)logMetric:(id)arg1 ;
-(id)initWithCategory:(unsigned short)arg1 ;
@end

