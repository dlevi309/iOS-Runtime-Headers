/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/


@class NSUserDefaults;

@interface DCSettings : NSObject {

	NSUserDefaults* _userDefaults;

}

@property (retain) NSUserDefaults * userDefaults;                      //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) BOOL enableViewService; 
@property (nonatomic,readonly) BOOL finishAfterFirstScan; 
+(id)sharedSettings;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(BOOL)enableViewService;
-(BOOL)finishAfterFirstScan;
-(id)enableViewServiceBoxed;
-(void)setEnableViewServiceBoxed:(id)arg1 ;
-(id)finishAfterFirstScanBoxed;
-(void)setFinishAfterFirstScanBoxed:(id)arg1 ;
@end

