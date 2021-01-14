/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSArray;

@interface WCAFetchKeyValuesRequest : WCAFetchRequest {

	NSArray* _keys;

}

@property (nonatomic,copy) NSArray * keys;              //@synthesize keys=_keys - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)keys;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setKeys:(NSArray *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
@end

