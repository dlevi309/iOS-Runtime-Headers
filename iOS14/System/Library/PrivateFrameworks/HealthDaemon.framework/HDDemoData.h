/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

