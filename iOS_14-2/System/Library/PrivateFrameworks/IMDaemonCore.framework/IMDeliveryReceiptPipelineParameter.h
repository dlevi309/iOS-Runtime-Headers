/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDeliveryReceiptProcessingParameter.h>
#import <IMDaemonCore/IMMessageFromStorageParameter.h>

@class NSString, NSNumber, NSArray, IMDChat;

@interface IMDeliveryReceiptPipelineParameter : NSObject <IMDeliveryReceiptProcessingParameter, IMMessageFromStorageParameter> {

	BOOL _isFromStorage;
	BOOL _isLastFromStorage;
	NSString* _GUID;
	NSNumber* _timestamp;
	NSArray* _messageItems;
	IMDChat* _chat;

}

@property (getter=UID,nonatomic,copy) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSNumber * timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL isFromStorage;                    //@synthesize isFromStorage=_isFromStorage - In the implementation block
@property (assign,nonatomic) BOOL isLastFromStorage;                //@synthesize isLastFromStorage=_isLastFromStorage - In the implementation block
@property (nonatomic,retain) NSArray * messageItems;                //@synthesize messageItems=_messageItems - In the implementation block
@property (nonatomic,retain) IMDChat * chat;                        //@synthesize chat=_chat - In the implementation block
-(IMDChat *)chat;
-(NSNumber *)timestamp;
-(void)setChat:(IMDChat *)arg1 ;
-(id)description;
-(void)setGUID:(NSString *)arg1 ;
-(void)setTimestamp:(NSNumber *)arg1 ;
-(NSString *)GUID;
-(BOOL)isFromStorage;
-(BOOL)isLastFromStorage;
-(void)setIsFromStorage:(BOOL)arg1 ;
-(void)setIsLastFromStorage:(BOOL)arg1 ;
-(NSArray *)messageItems;
-(void)setMessageItems:(NSArray *)arg1 ;
-(id)initWithBD:(id)arg1 ;
@end

