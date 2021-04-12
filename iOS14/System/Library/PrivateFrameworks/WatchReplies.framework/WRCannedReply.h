/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSString *)defaultReplyText;
-(void)setDefaultReplyText:(NSString *)arg1 ;
-(NSString *)defaultReplyKey;
-(void)setDefaultReplyKey:(NSString *)arg1 ;
@end

