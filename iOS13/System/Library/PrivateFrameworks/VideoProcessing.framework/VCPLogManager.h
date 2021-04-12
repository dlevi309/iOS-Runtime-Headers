/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

