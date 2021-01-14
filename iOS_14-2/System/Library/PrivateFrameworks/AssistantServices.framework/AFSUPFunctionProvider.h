/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFSpeakableUtteranceParser.h>
#import <libobjc.A.dylib/AFSpeakableNamespaceProvider.h>

@class NSDateFormatter, NSString;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {

	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldAutomaticallyProvideFunctions;
-(id)initWithLocale:(id)arg1 ;
-(id)init;
-(id)_meCard;
-(id)stringForExpression:(id)arg1 ;
-(id)stringForExpression:(id)arg1 containsPrivacySensitiveContents:(BOOL*)arg2 ;
-(id)_currentTime:(id)arg1 ;
-(id)_dateFormattedWithFormatter:(id)arg1 arguments:(id)arg2 ;
-(id)_peerInfoForContextIdentifier:(id)arg1 ;
-(id)_currentShortDate:(id)arg1 ;
-(id)_currentLongDate:(id)arg1 ;
-(id)_currentWeekday:(id)arg1 ;
-(id)_tempInWeatherUnits:(id)arg1 ;
-(id)_lowercaseString:(id)arg1 ;
-(id)_siriUsageDescription:(id)arg1 ;
-(id)_speechRecognitionUsageDescription:(id)arg1 ;
-(id)_contextRoomName:(id)arg1 ;
-(id)_contextDeviceName:(id)arg1 ;
-(id)_userFullName:(id)arg1 ;
-(id)_userFirstName:(id)arg1 ;
-(id)_userMiddleName:(id)arg1 ;
-(id)_userLastName:(id)arg1 ;
-(id)_userNickName:(id)arg1 ;
-(id)_meCardIdentifier:(id)arg1 ;
-(id)_callFunction:(id)arg1 withArguments:(id)arg2 ;
-(id)_deviceModel;
@end

