/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSPurchaseQueue.h>

@class AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue {

	AMSMockURLOverride* _mockURLOverride;

}

@property (retain) AMSMockURLOverride * mockURLOverride;              //@synthesize mockURLOverride=_mockURLOverride - In the implementation block
-(id)initWithConfiguration:(id)arg1 mockURLOverride:(id)arg2 ;
-(AMSMockURLOverride *)mockURLOverride;
-(void)setMockURLOverride:(AMSMockURLOverride *)arg1 ;
-(void)dealloc;
@end

