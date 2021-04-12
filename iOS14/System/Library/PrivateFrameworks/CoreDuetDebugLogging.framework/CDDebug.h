/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

