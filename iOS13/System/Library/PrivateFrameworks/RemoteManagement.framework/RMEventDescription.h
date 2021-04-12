/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

