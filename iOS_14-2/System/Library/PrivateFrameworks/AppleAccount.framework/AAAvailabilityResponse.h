/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface AAAvailabilityResponse : AAResponse {

	NSString* _status;
	NSString* _eta;
	NSString* _feature;

}

@property (nonatomic,readonly) NSString * status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * eta;                  //@synthesize eta=_eta - In the implementation block
@property (nonatomic,readonly) NSString * feature;              //@synthesize feature=_feature - In the implementation block
-(NSString *)feature;
-(NSString *)eta;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)status;
@end

