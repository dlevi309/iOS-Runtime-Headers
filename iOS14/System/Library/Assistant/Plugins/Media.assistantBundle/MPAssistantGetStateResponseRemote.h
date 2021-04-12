/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setPlayingInfoFromEndpoint:(void*)arg1 ;
@end

