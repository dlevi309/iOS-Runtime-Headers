/*
* Generated on Thursday, January 14, 2021 at 2:29:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libtzupdate.dylib
*/


@interface TZPreferencesController : NSObject

@property (nonatomic,readonly) BOOL updatesEnabled; 
@property (nonatomic,readonly) long long loggingLevel; 
+(id)sharedPreferencesController;
-(id)init;
-(BOOL)updatesEnabled;
-(long long)loggingLevel;
-(void)preferencesChanged:(id)arg1 ;
@end

