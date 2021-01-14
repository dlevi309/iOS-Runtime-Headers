/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFInterstitialConfigurationMutating.h>

@class AFInterstitialConfiguration, NSString;

@interface _AFInterstitialConfigurationMutation : NSObject <AFInterstitialConfigurationMutating> {

	AFInterstitialConfiguration* _baseModel;
	long long _style;
	NSString* _languageCode;
	long long _gender;
	NSString* _recordRoute;
	BOOL _isVoiceTrigger;
	BOOL _isDucking;
	BOOL _isTwoShot;
	unsigned long long _speechEndHostTime;
	struct {
		unsigned isDirty : 1;
		unsigned hasStyle : 1;
		unsigned hasLanguageCode : 1;
		unsigned hasGender : 1;
		unsigned hasRecordRoute : 1;
		unsigned hasIsVoiceTrigger : 1;
		unsigned hasIsDucking : 1;
		unsigned hasIsTwoShot : 1;
		unsigned hasSpeechEndHostTime : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLanguageCode:(id)arg1 ;
-(id)init;
-(id)generate;
-(void)setStyle:(long long)arg1 ;
-(void)setGender:(long long)arg1 ;
-(void)setRecordRoute:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setIsVoiceTrigger:(BOOL)arg1 ;
-(void)setIsDucking:(BOOL)arg1 ;
-(void)setIsTwoShot:(BOOL)arg1 ;
-(void)setSpeechEndHostTime:(unsigned long long)arg1 ;
@end

