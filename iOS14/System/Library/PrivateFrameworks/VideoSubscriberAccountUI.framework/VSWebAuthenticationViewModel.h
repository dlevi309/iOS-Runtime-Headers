/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VSViewModel.h>

@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel {

	NSURL* _sourceURL;
	VSMessageQueue* _messagesToWeb;
	VSMessageQueue* _messagesFromWeb;

}

@property (nonatomic,copy) NSURL * sourceURL;                                 //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesToWeb;                //@synthesize messagesToWeb=_messagesToWeb - In the implementation block
@property (nonatomic,readonly) VSMessageQueue * messagesFromWeb;              //@synthesize messagesFromWeb=_messagesFromWeb - In the implementation block
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(id)init;
-(VSMessageQueue *)messagesToWeb;
-(VSMessageQueue *)messagesFromWeb;
@end

