/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@protocol ECMessage;
@class NSDate, NSString;

@interface _EDUserActionState : NSObject {

	BOOL _scrolledToEnd;
	BOOL _mutedThread;
	NSDate* _viewingStarted;
	id<ECMessage> _message;
	NSString* _key;
	NSString* _cellStyle;
	NSString* _messageListType;
	long long _row;

}

@property (nonatomic,retain) NSDate * viewingStarted;               //@synthesize viewingStarted=_viewingStarted - In the implementation block
@property (nonatomic,retain) id<ECMessage> message;                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL scrolledToEnd;                    //@synthesize scrolledToEnd=_scrolledToEnd - In the implementation block
@property (assign,nonatomic) BOOL mutedThread;                      //@synthesize mutedThread=_mutedThread - In the implementation block
@property (nonatomic,copy) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * cellStyle;                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,copy) NSString * messageListType;              //@synthesize messageListType=_messageListType - In the implementation block
@property (assign,nonatomic) long long row;                         //@synthesize row=_row - In the implementation block
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id<ECMessage>)message;
-(void)setMessage:(id<ECMessage>)arg1 ;
-(long long)row;
-(NSString *)cellStyle;
-(void)setCellStyle:(NSString *)arg1 ;
-(void)setRow:(long long)arg1 ;
-(NSDate *)viewingStarted;
-(void)setViewingStarted:(NSDate *)arg1 ;
-(BOOL)scrolledToEnd;
-(void)setScrolledToEnd:(BOOL)arg1 ;
-(NSString *)messageListType;
-(void)setMessageListType:(NSString *)arg1 ;
-(BOOL)mutedThread;
-(void)setMutedThread:(BOOL)arg1 ;
@end

