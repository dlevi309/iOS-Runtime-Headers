/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/

#import <WeatherFoundation/WFResponse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding> {

	NSURL* _reachabilityHostURL;

}

@property (nonatomic,copy) NSURL * reachabilityHostURL;                      //@synthesize reachabilityHostURL=_reachabilityHostURL - In the implementation block
@property (nonatomic,readonly) NWPathEvaluator * pathEvaluator; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NWPathEvaluator *)pathEvaluator;
-(void)setReachabilityHostURL:(NSURL *)arg1 ;
-(NSURL *)reachabilityHostURL;
@end

