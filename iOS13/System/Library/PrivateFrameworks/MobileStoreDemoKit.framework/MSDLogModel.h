/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


#import <MobileStoreDemoKit/MobileStoreDemoKit-Structs.h>
@interface MSDLogModel : NSObject {

	_sFILE* _logFP;

}

@property (assign) _sFILE* logFP;              //@synthesize logFP=_logFP - In the implementation block
+(id)sharedInstance;
-(void)logMessage:(id)arg1 ;
-(void)logWithFormat:(id)arg1 andArgs:(char*)arg2 ;
-(_sFILE*)logFP;
-(void)setLogFP:(_sFILE*)arg1 ;
-(id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)enableLogToFile:(id)arg1 ;
-(BOOL)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3 ;
@end

