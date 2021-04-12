/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSObject;

@interface VCVideoSourceTokenManager : NSObject {

	VCVideoSourceTokenManager* _tokenManager;
	NSMutableDictionary* _videoSourceTokens;
	NSMutableDictionary* _sourceNames;
	unsigned long long _identifierSeeds[4];
	NSObject*<OS_dispatch_queue> _tokenManagerQueue;

}
+(id)sharedManager;
-(id)deviceNameForToken:(VCVideoSourceToken)arg1 ;
-(id)init;
-(VCVideoSourceToken)tokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(VCVideoSourceToken)createtokenForDeviceName:(id)arg1 sourceType:(int)arg2 ;
-(void)dealloc;
@end

