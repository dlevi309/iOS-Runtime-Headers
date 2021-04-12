/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class CalPreferences, NSString, NSArray;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) BOOL logEmitUserNotifications; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (assign,nonatomic) double simulatedDateForNowOffset; 
+(id)shared;
-(id)init;
-(NSString *)logFilePath;
-(BOOL)logAutoFlush;
-(BOOL)logEmitUserNotifications;
-(NSArray *)logSimpleConfiguration;
-(double)simulatedDateForNowOffset;
-(void)setSimulatedDateForNowOffset:(double)arg1 ;
@end

