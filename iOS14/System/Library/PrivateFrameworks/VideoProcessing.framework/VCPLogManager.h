/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPLogManager : NSObject {

	int _logLevel;

}

@property (readonly) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)dateFormatter;
+(id)sharedLogManager;
-(id)init;
-(int)logLevel;
@end

