/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKChatItem.h>

@class NSString, NSDate, IMHandle;

@interface CKAssociatedMessageChatItem : CKChatItem {

	NSString* _timestampString;

}

@property (nonatomic,copy) NSString * timestampString;                                                //@synthesize timestampString=_timestampString - In the implementation block
@property (nonatomic,readonly) NSString * guid; 
@property (nonatomic,readonly) NSString * associatedChatItemGUID; 
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) BOOL parentMessageIsFromMe; 
@property (nonatomic,readonly) BOOL failed; 
@property (nonatomic,readonly) IMAssociatedMessageGeometryDescriptor geometryDescriptor; 
@property (nonatomic,readonly) NSDate * time; 
@property (nonatomic,readonly) IMHandle * sender; 
@property (nonatomic,readonly) NSRange associatedMessageRange; 
-(NSDate *)time;
-(IMHandle *)sender;
-(BOOL)failed;
-(NSString *)guid;
-(BOOL)isFromMe;
-(NSRange)associatedMessageRange;
-(NSString *)associatedChatItemGUID;
-(char)transcriptOrientation;
-(BOOL)wantsDrawerLayout;
-(id)loadTranscriptDrawerText;
-(BOOL)parentMessageIsFromMe;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(id)IMAssociatedMessageChatItem;
-(id)loadTimestampString;
-(NSString *)timestampString;
-(void)setTimestampString:(NSString *)arg1 ;
@end

