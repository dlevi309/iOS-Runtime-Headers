/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/

#import <CalendarUIKit/CUIKUserOperation.h>

@class EKChangeTracker;

@interface CUIKRevertOperation : CUIKUserOperation {

	EKChangeTracker* _originalChangeTracker;

}

@property (retain) EKChangeTracker * originalChangeTracker;              //@synthesize originalChangeTracker=_originalChangeTracker - In the implementation block
-(EKChangeTracker *)originalChangeTracker;
-(void)setOriginalChangeTracker:(EKChangeTracker *)arg1 ;
@end

