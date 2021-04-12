/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class NSDate, EMMessageObjectID, EMObjectID, NSString, EMMailboxScope;

@interface _EMUserActionState : NSObject {

	BOOL _scrolledToEnd;
	NSDate* _viewingStarted;
	EMMessageObjectID* _messageObjectID;
	EMObjectID* _key;
	NSString* _cellStyle;
	NSString* _messageListType;
	long long _row;
	EMMailboxScope* _mailboxScope;

}

@property (nonatomic,retain) NSDate * viewingStarted;                          //@synthesize viewingStarted=_viewingStarted - In the implementation block
@property (nonatomic,retain) EMMessageObjectID * messageObjectID;              //@synthesize messageObjectID=_messageObjectID - In the implementation block
@property (assign,nonatomic) BOOL scrolledToEnd;                               //@synthesize scrolledToEnd=_scrolledToEnd - In the implementation block
@property (nonatomic,copy) EMObjectID * key;                                   //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * cellStyle;                               //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,copy) NSString * messageListType;                         //@synthesize messageListType=_messageListType - In the implementation block
@property (assign,nonatomic) long long row;                                    //@synthesize row=_row - In the implementation block
@property (nonatomic,retain) EMMailboxScope * mailboxScope;                    //@synthesize mailboxScope=_mailboxScope - In the implementation block
-(EMObjectID *)key;
-(void)setKey:(EMObjectID *)arg1 ;
-(long long)row;
-(NSString *)cellStyle;
-(void)setCellStyle:(NSString *)arg1 ;
-(EMMailboxScope *)mailboxScope;
-(void)setRow:(long long)arg1 ;
-(NSDate *)viewingStarted;
-(void)setViewingStarted:(NSDate *)arg1 ;
-(EMMessageObjectID *)messageObjectID;
-(void)setMessageObjectID:(EMMessageObjectID *)arg1 ;
-(BOOL)scrolledToEnd;
-(void)setScrolledToEnd:(BOOL)arg1 ;
-(NSString *)messageListType;
-(void)setMessageListType:(NSString *)arg1 ;
-(void)setMailboxScope:(EMMailboxScope *)arg1 ;
@end
