/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSAccountChannels, VSAccountChannelsCenter;

@interface VSAccountChannelsSaveOperation : VSAsyncOperation {

	NSError* _error;
	VSAccountChannels* _unsavedAccountChannels;
	VSAccountChannelsCenter* _accountChannelsCenter;

}

@property (nonatomic,retain) VSAccountChannels * unsavedAccountChannels;                   //@synthesize unsavedAccountChannels=_unsavedAccountChannels - In the implementation block
@property (nonatomic,retain) VSAccountChannelsCenter * accountChannelsCenter;              //@synthesize accountChannelsCenter=_accountChannelsCenter - In the implementation block
@property (nonatomic,copy) NSError * error;                                                //@synthesize error=_error - In the implementation block
-(void)executionDidBegin;
-(id)init;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(VSAccountChannels *)unsavedAccountChannels;
-(VSAccountChannelsCenter *)accountChannelsCenter;
-(id)initWithUnsavedAccountChannels:(id)arg1 accountChannelsCenter:(id)arg2 ;
-(void)setUnsavedAccountChannels:(VSAccountChannels *)arg1 ;
-(void)setAccountChannelsCenter:(VSAccountChannelsCenter *)arg1 ;
@end

