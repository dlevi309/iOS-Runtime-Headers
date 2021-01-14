/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>

@class NSDate, HDSPEnvironment, NSString;

@interface HDSPSleepDaemon : NSObject <HDSPDiagnosticsProvider> {

	NSDate* _launchDate;
	HDSPEnvironment* _environment;

}

@property (nonatomic,readonly) NSDate * launchDate;                        //@synthesize launchDate=_launchDate - In the implementation block
@property (nonatomic,readonly) HDSPEnvironment * environment;              //@synthesize environment=_environment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)diagnosticInfo;
-(NSDate *)launchDate;
-(id)init;
-(void)start;
-(id)diagnosticDescription;
-(id)initWithBehavior:(id)arg1 sleepEnabled:(BOOL)arg2 ;
-(HDSPEnvironment *)environment;
@end

