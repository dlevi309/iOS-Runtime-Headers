/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

