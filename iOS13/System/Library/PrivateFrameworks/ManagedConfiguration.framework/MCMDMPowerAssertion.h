/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSString, NSDate, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSString* _reason;
	NSDate* _creationDate;
	UMUserSwitchBlockingTask* _blockingTask;

}

@property (nonatomic,readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) UMUserSwitchBlockingTask * blockingTask;              //@synthesize blockingTask=_blockingTask - In the implementation block
+(id)_dateFormatter;
+(id)_currentAssertions;
+(id)assertionDescriptions;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
-(NSDate *)creationDate;
-(id)initWithReason:(id)arg1 ;
-(UMUserSwitchBlockingTask *)blockingTask;
-(void)setBlockingTask:(UMUserSwitchBlockingTask *)arg1 ;
@end

