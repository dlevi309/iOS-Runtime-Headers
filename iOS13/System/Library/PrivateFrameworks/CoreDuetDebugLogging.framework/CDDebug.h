/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDebugLogging.framework/CoreDuetDebugLogging
*/


@interface CDDebug : NSObject {

	BOOL verboseMode;

}
-(id)init;
-(void)log:(const char*)arg1 ;
-(void)error:(long long)arg1 ;
-(id)initWithVerboseMode:(BOOL)arg1 ;
@end

