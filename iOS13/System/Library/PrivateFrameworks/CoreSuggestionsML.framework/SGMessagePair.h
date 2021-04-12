/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)handle;
-(NSString *)reply;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setReply:(NSString *)arg1 ;
-(NSDate *)sentAt;
-(id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4 ;
-(void)setSentAt:(NSDate *)arg1 ;
@end

