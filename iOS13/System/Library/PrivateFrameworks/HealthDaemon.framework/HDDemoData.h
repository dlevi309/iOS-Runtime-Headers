/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(BOOL)shouldUseDemoDataDirectory;
+(BOOL)willBeGeneratingDemoData;
+(id)demoDataDirectory;
-(id)_directoryPath;
-(id)initWithProfileType:(long long)arg1 ;
-(BOOL)_resetDemoDataDB;
@end

