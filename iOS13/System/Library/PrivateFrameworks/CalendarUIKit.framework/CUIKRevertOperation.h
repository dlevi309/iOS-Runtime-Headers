/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

