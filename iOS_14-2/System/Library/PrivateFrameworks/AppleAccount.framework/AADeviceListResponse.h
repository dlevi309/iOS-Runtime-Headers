/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface AADeviceListResponse : AAResponse {

	NSArray* _devices;

}

@property (nonatomic,readonly) NSArray * devices;              //@synthesize devices=_devices - In the implementation block
-(NSArray *)devices;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

