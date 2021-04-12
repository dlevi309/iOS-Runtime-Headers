/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPGetStateResponseRemote.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSDictionary, NSMutableDictionary, NSObject, MPCAssistantEncodings, NSString;

@interface MPAssistantGetStateResponseRemote : SAMPGetStateResponseRemote {

	NSDictionary* _decodedDeviceUIDs;
	NSMutableDictionary* _workingRemoteResponse;
	NSMutableDictionary* _originMapping;
	NSObject*<OS_dispatch_queue> _responseCollectionQueue;
	NSObject*<OS_dispatch_group> _completionGroup;
	MPCAssistantEncodings* _encoder;
	NSString* _requestAceHash;

}
-(void)dealloc;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)setPlayingInfoFromEndpoint:(void*)arg1 ;
@end

