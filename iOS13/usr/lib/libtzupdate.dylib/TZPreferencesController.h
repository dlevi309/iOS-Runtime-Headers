/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libtzupdate.dylib
*/


@interface TZPreferencesController : NSObject

@property (nonatomic,readonly) BOOL updatesEnabled; 
@property (nonatomic,readonly) long long loggingLevel; 
+(id)sharedPreferencesController;
-(id)init;
-(long long)loggingLevel;
-(void)preferencesChanged:(id)arg1 ;
-(BOOL)updatesEnabled;
@end

