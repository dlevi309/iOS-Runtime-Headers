/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(NSUserDefaults *)userDefaults;
-(BOOL)enableViewService;
-(BOOL)finishAfterFirstScan;
-(id)enableViewServiceBoxed;
-(void)setEnableViewServiceBoxed:(id)arg1 ;
-(id)finishAfterFirstScanBoxed;
-(void)setFinishAfterFirstScanBoxed:(id)arg1 ;
@end

