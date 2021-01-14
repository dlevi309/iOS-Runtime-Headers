/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WCAFetchResponse.h>

@class NSDictionary;

@interface WCAFetchKeyValuesResponse : WCAFetchResponse {

	NSDictionary* _keyValues;

}

@property (nonatomic,copy) NSDictionary * keyValues;              //@synthesize keyValues=_keyValues - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setKeyValues:(NSDictionary *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)keyValues;
-(id)initWithKeyValues:(id)arg1 ;
@end

