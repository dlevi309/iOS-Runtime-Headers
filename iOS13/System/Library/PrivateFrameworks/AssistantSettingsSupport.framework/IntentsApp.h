/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/


@class NSString;

@interface IntentsApp : NSObject {

	BOOL _accessGranted;
	NSString* _appID;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * appID;                    //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL accessGranted;                       //@synthesize accessGranted=_accessGranted - In the implementation block
-(NSString *)displayName;
-(BOOL)accessGranted;
-(NSString *)appID;
-(id)initWithAppId:(id)arg1 displayName:(id)arg2 accessGranted:(BOOL)arg3 ;
-(long long)compareWithIntentsApp:(id)arg1 ;
@end

