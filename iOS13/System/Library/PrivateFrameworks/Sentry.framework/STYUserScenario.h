/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
*/


@class NSString;

@interface STYUserScenario : NSObject {

	int _appProcessID;
	NSString* _scenarioGroup;
	NSString* _scenarioID;
	long long _kpi;
	NSString* _titleText;
	NSString* _appBundleId;
	NSString* _appName;

}

@property (readonly) NSString * scenarioGroup;              //@synthesize scenarioGroup=_scenarioGroup - In the implementation block
@property (readonly) NSString * scenarioID;                 //@synthesize scenarioID=_scenarioID - In the implementation block
@property (readonly) long long kpi;                         //@synthesize kpi=_kpi - In the implementation block
@property (readonly) NSString * titleText;                  //@synthesize titleText=_titleText - In the implementation block
@property (readonly) NSString * appBundleId;                //@synthesize appBundleId=_appBundleId - In the implementation block
@property (readonly) NSString * appName;                    //@synthesize appName=_appName - In the implementation block
@property (readonly) int appProcessID;                      //@synthesize appProcessID=_appProcessID - In the implementation block
+(id)scenarioFromSignpostEvent:(id)arg1 error:(id*)arg2 ;
+(id)scenarioFromSignpostInterval:(id)arg1 error:(id*)arg2 ;
-(NSString *)appName;
-(NSString *)titleText;
-(NSString *)appBundleId;
-(int)appProcessID;
-(long long)kpi;
-(NSString *)scenarioID;
-(id)initWithLifecycleScenarioCategoryAndModelName:(id)arg1 modelName:(id)arg2 titleText:(id)arg3 ;
-(id)initWithConfiguration:(id)arg1 scenarioGroup:(id)arg2 kpi:(long long)arg3 processBundleID:(id)arg4 titleText:(id)arg5 processName:(id)arg6 processID:(int)arg7 ;
-(NSString *)scenarioGroup;
@end

