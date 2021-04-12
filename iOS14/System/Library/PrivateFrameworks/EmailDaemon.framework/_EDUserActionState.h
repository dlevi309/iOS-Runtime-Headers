/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMessage:(id<ECMessage>)arg1 ;
-(id<ECMessage>)message;
-(void)setCellStyle:(NSString *)arg1 ;
-(long long)row;
-(void)setRow:(long long)arg1 ;
-(NSString *)key;
-(NSDate *)viewingStarted;
-(void)setViewingStarted:(NSDate *)arg1 ;
-(BOOL)scrolledToEnd;
-(void)setScrolledToEnd:(BOOL)arg1 ;
-(NSString *)messageListType;
-(void)setMessageListType:(NSString *)arg1 ;
-(NSString *)cellStyle;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)mutedThread;
-(void)setMutedThread:(BOOL)arg1 ;
@end

