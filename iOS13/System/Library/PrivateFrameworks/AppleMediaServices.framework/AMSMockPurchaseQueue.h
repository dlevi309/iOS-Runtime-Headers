/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <AppleMediaServices/AMSPurchaseQueue.h>

@class AMSMockURLOverride;

@interface AMSMockPurchaseQueue : AMSPurchaseQueue {

	AMSMockURLOverride* _mockURLOverride;

}

@property (retain) AMSMockURLOverride * mockURLOverride;              //@synthesize mockURLOverride=_mockURLOverride - In the implementation block
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 mockURLOverride:(id)arg2 ;
-(AMSMockURLOverride *)mockURLOverride;
-(void)setMockURLOverride:(AMSMockURLOverride *)arg1 ;
@end

