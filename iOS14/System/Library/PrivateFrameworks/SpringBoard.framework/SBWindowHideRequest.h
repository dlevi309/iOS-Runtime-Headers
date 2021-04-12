/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

