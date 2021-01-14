/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)guid;
-(char)transcriptOrientation;
-(id)loadTranscriptDrawerText;
-(id)IMAssociatedMessageChatItem;
-(NSString *)timestampString;
-(id)loadTimestampString;
-(void)setTimestampString:(NSString *)arg1 ;
-(BOOL)wantsDrawerLayout;
-(BOOL)failed;
-(NSString *)associatedChatItemGUID;
-(NSRange)associatedMessageRange;
-(BOOL)isFromMe;
-(IMAssociatedMessageGeometryDescriptor)geometryDescriptor;
-(BOOL)parentMessageIsFromMe;
@end

