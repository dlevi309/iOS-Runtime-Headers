/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSDictionary, NSURL, NSString;

@interface AMSMarketingItemActionComponent : NSObject {

	NSDictionary* _rawValues;

}

@property (nonatomic,readonly) NSURL * artworkURL; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) NSDictionary * rawValues;              //@synthesize rawValues=_rawValues - In the implementation block
-(NSURL *)artworkURL;
-(NSDictionary *)rawValues;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)description;
@end

