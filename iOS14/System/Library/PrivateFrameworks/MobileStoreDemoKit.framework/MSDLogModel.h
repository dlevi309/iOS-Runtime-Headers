/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileStoreDemoKit.framework/MobileStoreDemoKit
*/


#import <MobileStoreDemoKit/MobileStoreDemoKit-Structs.h>
@interface MSDLogModel : NSObject {

	_sFILE* _logFP;

}

@property (assign) _sFILE* logFP;              //@synthesize logFP=_logFP - In the implementation block
+(id)sharedInstance;
-(void)logMessage:(id)arg1 ;
-(_sFILE*)logFP;
-(void)logWithFormat:(id)arg1 andArgs:(char*)arg2 ;
-(void)setLogFP:(_sFILE*)arg1 ;
-(id)fileNameForTodayUnder:(id)arg1 prefix:(id)arg2 ;
-(BOOL)enableLogToFile:(id)arg1 ;
-(BOOL)enableLogToFilesUnder:(id)arg1 prefix:(id)arg2 expireDays:(long long)arg3 ;
@end

