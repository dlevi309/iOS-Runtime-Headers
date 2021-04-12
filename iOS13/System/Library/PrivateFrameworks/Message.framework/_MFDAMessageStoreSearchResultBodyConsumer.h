/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/DAMailboxFetchSearchResultConsumer.h>
#import <libobjc.A.dylib/DAMailboxStreamingContentConsumer.h>

@protocol MFDAStreamingContentConsumer;
@class MFConditionLock, MFError;

@interface _MFDAMessageStoreSearchResultBodyConsumer : NSObject <DAMailboxFetchSearchResultConsumer, DAMailboxStreamingContentConsumer> {

	MFConditionLock* _doneCondition;
	id<MFDAStreamingContentConsumer> _streamConsumer;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;                                              //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id<MFDAStreamingContentConsumer> streamConsumer;              //@synthesize streamConsumer=_streamConsumer - In the implementation block
-(id)init;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)waitUntilDone;
-(BOOL)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setStreamConsumer:(id<MFDAStreamingContentConsumer>)arg1 ;
-(id<MFDAStreamingContentConsumer>)streamConsumer;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(void)searchResultFetchedWithResponses:(id)arg1 ;
@end

