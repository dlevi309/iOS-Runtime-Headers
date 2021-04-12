/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


@class NSMutableString;

@interface TIMecabraIMLogger : NSObject {

	NSMutableString* _loggedMessage;

}

@property (nonatomic,retain) NSMutableString * loggedMessage;              //@synthesize loggedMessage=_loggedMessage - In the implementation block
+(BOOL)isLoggingEnabled;
-(id)logFilePath;
-(NSMutableString *)loggedMessage;
-(void)beginLogging;
-(void)markTime:(unsigned long long)arg1 ;
-(void)endLoggingForInput:(id)arg1 atFinalTimeMark:(unsigned long long)arg2 ;
-(void)writeLogToFile;
-(void)setLoggedMessage:(NSMutableString *)arg1 ;
@end

