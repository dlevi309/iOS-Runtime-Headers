/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/CUTMetricLogger.h>

@class NSString;

@interface IDSSOSLogger : NSObject <CUTMetricLogger> {

	NSString* _sosURLString;

}

@property (nonatomic,retain) NSString * sosURLString;               //@synthesize sosURLString=_sosURLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logger;
+(id)loggerWithURLString:(id)arg1 ;
-(void)logMetric:(id)arg1 ;
-(id)initWithSOSURLString:(id)arg1 ;
-(NSString *)sosURLString;
-(void)setSosURLString:(NSString *)arg1 ;
@end

