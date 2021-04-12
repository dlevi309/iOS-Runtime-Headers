/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setStyle:(long long)arg1 ;
-(void)setLanguageCode:(id)arg1 ;
-(void)setGender:(long long)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setRecordRoute:(id)arg1 ;
-(void)setIsVoiceTrigger:(BOOL)arg1 ;
-(void)setIsDucking:(BOOL)arg1 ;
-(void)setIsTwoShot:(BOOL)arg1 ;
-(void)setSpeechEndHostTime:(unsigned long long)arg1 ;
@end

