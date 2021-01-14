/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSystemReadyProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSystemReadyDelegate;
@class HDSPEnvironment, NSString;

@interface HDSPSimulatorReadyProvider : NSObject <HDSPSystemReadyProvider, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	id<HDSPSystemReadyDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isSystemReady; 
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
-(id<HDSPSystemReadyDelegate>)delegate;
-(BOOL)isInDemoMode;
-(BOOL)isSystemReady;
-(void)setDelegate:(id<HDSPSystemReadyDelegate>)arg1 ;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
@end

