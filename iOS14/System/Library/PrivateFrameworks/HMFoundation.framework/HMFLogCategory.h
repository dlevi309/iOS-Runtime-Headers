/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)defaultCategory;
+(id)categoryWithName:(id)arg1 ;
+(id)categoryWithName:(id)arg1 inSubsystem:(id)arg2 ;
-(NSString *)loggingSubsystem;
-(NSString *)loggingCategory;
-(NSObject*<OS_os_log>)internal;
-(id)initCategory:(id)arg1 inSubsystem:(id)arg2 ;
@end

