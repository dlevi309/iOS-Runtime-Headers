/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)status;
-(NSString *)feature;
-(NSString *)eta;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

