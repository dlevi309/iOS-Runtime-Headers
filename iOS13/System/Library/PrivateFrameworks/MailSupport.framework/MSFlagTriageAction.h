/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
*/

#import <MailSupport/MSFlagChangeTriageAction.h>

@class NSNumber;

@interface MSFlagTriageAction : MSFlagChangeTriageAction {

	NSNumber* _flagColor;

}

@property (nonatomic,retain) NSNumber * flagColor;              //@synthesize flagColor=_flagColor - In the implementation block
-(void)setFlagColor:(NSNumber *)arg1 ;
-(NSNumber *)flagColor;
-(void)_toggleFlagWithBuilder:(id)arg1 ;
-(BOOL)flagState;
-(BOOL)_isFlagged;
@end

