/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorMessagesAppBalloon, NSData, BlastDoorCombinedPluginAttachmentInfo;

@interface BlastDoorBalloonPluginPayloadWrapper : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorMessagesAppBalloon * messagesAppBalloon; 
@property (readonly,nonatomic) NSData * linkPresentation; 
@property (readonly,nonatomic) BlastDoorCombinedPluginAttachmentInfo * combinedPluginAttachmentInfo; 
@property (readonly,nonatomic) NSData * unknown_payload; 
-(id)init;
-(NSData *)linkPresentation;
-(NSData *)unknown_payload;
-(NSString *)description;
-(unsigned long long)type;
-(BlastDoorMessagesAppBalloon *)messagesAppBalloon;
-(BlastDoorCombinedPluginAttachmentInfo *)combinedPluginAttachmentInfo;
@end

