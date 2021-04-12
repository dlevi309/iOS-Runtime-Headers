/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@class NSString, NSDate;

@interface CKSpotlightSearchResult : NSObject {

	NSString* _chatGUID;
	NSString* _messageGUID;
	NSString* _summary;
	NSDate* _messageDate;

}

@property (nonatomic,copy) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;              //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSString * summary;                  //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSDate * messageDate;              //@synthesize messageDate=_messageDate - In the implementation block
-(long long)compare:(id)arg1 ;
-(NSString *)summary;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSString *)messageGUID;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)chatGUID;
-(id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4 ;
-(NSDate *)messageDate;
-(void)setMessageDate:(NSDate *)arg1 ;
-(void)setChatGUID:(NSString *)arg1 ;
@end

