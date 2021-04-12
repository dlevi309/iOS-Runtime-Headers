/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
*/

#import <AssistantServices/AFSiriRequest.h>

@class NSString, NSDictionary;

@interface STGenericIntentRequest : AFSiriRequest {

	NSString* _appIdentifier;
	NSString* _intentString;
	NSString* _utterance;
	NSDictionary* _info;
	BOOL __launchToForeground;

}

@property (assign,setter=_setLaunchToForeground:,nonatomic) BOOL _launchToForeground;              //@synthesize _launchToForeground=__launchToForeground - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)appIdentifier;
-(id)info;
-(id)utterance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_af_analyticsContextDescription;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_makeAppFrontmost;
-(id)responseWithCode:(long long)arg1 ;
-(BOOL)isForegroundLaunch;
-(id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4 ;
-(id)intentString;
-(BOOL)_launchToForeground;
-(void)_setLaunchToForeground:(BOOL)arg1 ;
@end

