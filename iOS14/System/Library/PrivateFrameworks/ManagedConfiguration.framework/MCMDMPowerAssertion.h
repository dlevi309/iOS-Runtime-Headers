/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSDate, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSDate* _creationDate;
	UMUserSwitchBlockingTask* _blockingTask;

}

@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) UMUserSwitchBlockingTask * blockingTask;              //@synthesize blockingTask=_blockingTask - In the implementation block
+(id)_dateFormatter;
+(id)_currentAssertions;
+(id)assertionDescriptions;
-(id)initWithReason:(id)arg1 ;
-(UMUserSwitchBlockingTask *)blockingTask;
-(id)description;
-(NSDate *)creationDate;
-(void)setBlockingTask:(UMUserSwitchBlockingTask *)arg1 ;
-(void)dealloc;
@end

