/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
*/


@class NSString, NSDate;

@interface SGMessagePair : NSObject {

	NSString* _reply;
	NSString* _prompt;
	NSString* _handle;
	NSDate* _sentAt;

}

@property (nonatomic,retain) NSString * reply;               //@synthesize reply=_reply - In the implementation block
@property (nonatomic,retain) NSString * prompt;              //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSDate * sentAt;                //@synthesize sentAt=_sentAt - In the implementation block
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(NSDate *)sentAt;
-(NSString *)reply;
-(void)setReply:(NSString *)arg1 ;
-(id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4 ;
-(void)setSentAt:(NSDate *)arg1 ;
@end

