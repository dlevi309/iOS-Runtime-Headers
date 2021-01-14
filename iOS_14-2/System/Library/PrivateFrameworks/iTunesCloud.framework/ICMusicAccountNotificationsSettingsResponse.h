/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSArray *)settingsSwitches;
-(BOOL)wasSuccessful;
@end

