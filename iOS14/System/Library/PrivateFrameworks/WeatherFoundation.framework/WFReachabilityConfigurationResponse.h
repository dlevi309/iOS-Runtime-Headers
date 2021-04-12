/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NWPathEvaluator *)pathEvaluator;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)reachabilityHostURL;
-(void)setReachabilityHostURL:(NSURL *)arg1 ;
@end

