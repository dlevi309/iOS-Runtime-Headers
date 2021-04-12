/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSArray;

@interface ICMusicAccountNotificationsSettingsResponse : NSObject {

	NSDictionary* _responseDictionary;
	BOOL _wasSuccessful;

}

@property (nonatomic,readonly) NSArray * settingsSwitches; 
@property (nonatomic,readonly) BOOL wasSuccessful;                      //@synthesize wasSuccessful=_wasSuccessful - In the implementation block
+(id)createResponseBodyWithSwitches:(id)arg1 ;
-(BOOL)wasSuccessful;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)settingsSwitches;
@end

