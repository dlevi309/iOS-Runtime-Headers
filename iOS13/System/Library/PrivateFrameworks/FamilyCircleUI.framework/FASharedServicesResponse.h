/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAResponse.h>

@class NSArray;

@interface FASharedServicesResponse : AAResponse {

	NSArray* _services;

}

@property (nonatomic,readonly) NSArray * services;              //@synthesize services=_services - In the implementation block
-(NSArray *)services;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
@end

