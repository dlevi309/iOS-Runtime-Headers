/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/


@protocol OS_os_log, OS_dispatch_queue;
@class NSString, NSObject;

@interface TFLogConfiguration : NSObject {

	NSString* _subsystem;
	NSString* _category;
	NSObject*<OS_os_log> _internalLogger;
	NSObject*<OS_dispatch_queue> _internalLoggerAccessQueue;

}

@property (nonatomic,copy,readonly) NSString * subsystem;                                           //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                            //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> internalLogger;                                   //@synthesize internalLogger=_internalLogger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> internalLoggerAccessQueue;              //@synthesize internalLoggerAccessQueue=_internalLoggerAccessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> generatedLogger; 
+(id)defaultConfiguration;
-(NSString *)category;
-(id)initWithSubsystem:(id)arg1 category:(id)arg2 ;
-(NSString *)subsystem;
-(NSObject*<OS_os_log>)generatedLogger;
-(NSObject*<OS_dispatch_queue>)internalLoggerAccessQueue;
-(NSObject*<OS_os_log>)internalLogger;
-(void)setInternalLogger:(NSObject*<OS_os_log>)arg1 ;
@end

