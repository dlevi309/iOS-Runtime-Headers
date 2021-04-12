/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <libobjc.A.dylib/WFMeasureResult.h>

@class NSError, NSString;

@interface WFMeasureThroughputResult : NSObject <WFMeasureResult> {

	NSError* _error;
	double _downlinkThroughput;

}

@property (nonatomic,copy,readonly) NSError * error;                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double downlinkThroughput;              //@synthesize downlinkThroughput=_downlinkThroughput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSError *)error;
-(double)downlinkThroughput;
-(id)initWithResult:(double)arg1 andError:(id)arg2 ;
@end

