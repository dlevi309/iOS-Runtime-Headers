/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)info;
-(id)appIdentifier;
-(id)utterance;
-(id)_af_analyticsContextDescription;
-(BOOL)_makeAppFrontmost;
-(id)responseWithCode:(long long)arg1 ;
-(BOOL)isForegroundLaunch;
-(id)initWithAppIdentifier:(id)arg1 intentString:(id)arg2 utterance:(id)arg3 info:(id)arg4 ;
-(id)intentString;
-(BOOL)_launchToForeground;
-(void)_setLaunchToForeground:(BOOL)arg1 ;
@end

