/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBWindowHideRequest : NSObject {

	NSString* _reason;
	SBWindowLevelRange_struct _windowLevelRange;

}

@property (assign) SBWindowLevelRange_struct windowLevelRange;              //@synthesize windowLevelRange=_windowLevelRange - In the implementation block
@property (copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
+(id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)arg1 reason:(id)arg2 ;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
-(void)setWindowLevelRange:(SBWindowLevelRange_struct)arg1 ;
-(SBWindowLevelRange_struct)windowLevelRange;
@end

