/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
*/

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSRunningReasonAttribute : RBSAttribute {

	unsigned long long _runningReason;

}

@property (nonatomic,readonly) unsigned long long runningReason;              //@synthesize runningReason=_runningReason - In the implementation block
+(id)withReason:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)succinctDescriptionBuilder;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(id)_initWithReason:(unsigned long long)arg1 ;
-(unsigned long long)runningReason;
@end

