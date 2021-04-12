/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface HMFLogCategory : NSObject {

	NSObject*<OS_os_log> _internal;
	NSString* _loggingCategory;
	NSString* _loggingSubsystem;

}

@property (nonatomic,readonly) NSString * loggingSubsystem;                //@synthesize loggingSubsystem=_loggingSubsystem - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSString * loggingCategory;                 //@synthesize loggingCategory=_loggingCategory - In the implementation block
+(void)initialize;
+(id)categoryWithName:(id)arg1 inSubsystem:(id)arg2 ;
+(id)defaultCategory;
+(id)categoryWithName:(id)arg1 ;
-(NSObject*<OS_os_log>)internal;
-(id)initCategory:(id)arg1 inSubsystem:(id)arg2 ;
-(NSString *)loggingCategory;
-(NSString *)loggingSubsystem;
@end

