/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/


@class CalPreferences, NSString, NSArray, NSDateComponents;

@interface CalFoundationPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (nonatomic,readonly) BOOL logAutoFlush; 
@property (nonatomic,readonly) NSString * logFilePath; 
@property (nonatomic,readonly) NSArray * logSimpleConfiguration; 
@property (assign,nonatomic) double simulatedDateForNowOffset; 
@property (nonatomic,retain) NSString * stopTimeDemoMode; 
@property (nonatomic,readonly) BOOL stopTimeDemoModeActive; 
@property (nonatomic,readonly) NSDateComponents * stopTimeDemoModeComponents; 
+(id)shared;
-(id)init;
-(NSArray *)logSimpleConfiguration;
-(NSDateComponents *)stopTimeDemoModeComponents;
-(BOOL)stopTimeDemoModeActive;
-(double)simulatedDateForNowOffset;
-(NSString *)stopTimeDemoMode;
-(void)setSimulatedDateForNowOffset:(double)arg1 ;
-(BOOL)logAutoFlush;
-(NSString *)logFilePath;
-(void)setStopTimeDemoMode:(NSString *)arg1 ;
@end

