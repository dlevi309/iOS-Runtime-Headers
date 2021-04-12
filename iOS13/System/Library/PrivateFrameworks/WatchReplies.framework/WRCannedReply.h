/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchReplies.framework/WatchReplies
*/


@class NSString;

@interface WRCannedReply : NSObject {

	NSString* _text;
	NSString* _defaultReplyText;
	NSString* _defaultReplyKey;

}

@property (nonatomic,retain) NSString * defaultReplyText;              //@synthesize defaultReplyText=_defaultReplyText - In the implementation block
@property (nonatomic,retain) NSString * defaultReplyKey;               //@synthesize defaultReplyKey=_defaultReplyKey - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)defaultReplyText;
-(void)setDefaultReplyText:(NSString *)arg1 ;
-(NSString *)defaultReplyKey;
-(void)setDefaultReplyKey:(NSString *)arg1 ;
@end

