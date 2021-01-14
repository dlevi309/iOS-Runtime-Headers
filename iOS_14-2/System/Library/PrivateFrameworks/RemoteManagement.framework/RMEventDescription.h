/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/


@class RMStatusPublisherDescription, RMConfigurationSubscriberDescription;

@interface RMEventDescription : NSObject {

	RMStatusPublisherDescription* _statusPublisherDescription;
	RMConfigurationSubscriberDescription* _configurationSubscriberDescription;

}

@property (nonatomic,readonly) RMStatusPublisherDescription * statusPublisherDescription;                              //@synthesize statusPublisherDescription=_statusPublisherDescription - In the implementation block
@property (nonatomic,readonly) RMConfigurationSubscriberDescription * configurationSubscriberDescription;              //@synthesize configurationSubscriberDescription=_configurationSubscriberDescription - In the implementation block
+(id)eventDescriptionWithEventsDictionary:(id)arg1 ;
+(id)eventDescriptionWithExtensionDictionary:(id)arg1 ;
-(RMConfigurationSubscriberDescription *)configurationSubscriberDescription;
-(id)initWithStatusPublisherDescription:(id)arg1 configurationSubscriberDescription:(id)arg2 ;
-(RMStatusPublisherDescription *)statusPublisherDescription;
@end

