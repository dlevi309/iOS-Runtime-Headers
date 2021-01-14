/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMTranscriptChatItem.h>
#import <IMCore/IMMessageChatItem.h>
@class NSDate, IMHandle;


@protocol IMMessageChatItem <NSObject>
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@required
-(NSDate *)time;
-(IMHandle *)sender;
-(BOOL)failed;
-(BOOL)isFromMe;

@end


@class NSDate, IMHandle, IMMessage, NSString;

@interface IMMessageChatItem : IMTranscriptChatItem <IMMessageChatItem>

@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)time;
-(IMHandle *)sender;
-(IMMessage *)message;
-(BOOL)canReply;
-(BOOL)failed;
-(BOOL)isFromMe;
@end

