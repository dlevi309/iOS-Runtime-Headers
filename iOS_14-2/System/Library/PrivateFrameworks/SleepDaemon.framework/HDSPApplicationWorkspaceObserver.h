/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

@class NSString;


@protocol HDSPApplicationWorkspaceObserver <NSObject>
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@required
-(NSString *)bundleIdentifier;
-(void)observedApplicationDidUninstall;

@end

