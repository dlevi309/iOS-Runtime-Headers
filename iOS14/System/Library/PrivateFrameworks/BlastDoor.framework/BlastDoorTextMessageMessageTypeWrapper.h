/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorTypingIndicator, BlastDoorMessage, BlastDoorTapBack, BlastDoorBalloonPlugin, BlastDoorSticker, BlastDoorAudioMessage;

@interface BlastDoorTextMessageMessageTypeWrapper : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) unsigned long long type; 
@property (readonly,nonatomic) BlastDoorTypingIndicator * typingIndicator; 
@property (readonly,nonatomic) BlastDoorMessage * textMessage; 
@property (readonly,nonatomic) BlastDoorTapBack * tapback; 
@property (readonly,nonatomic) BlastDoorBalloonPlugin * balloonPlugin; 
@property (readonly,nonatomic) BlastDoorSticker * sticker; 
@property (readonly,nonatomic) BlastDoorAudioMessage * audioMessage; 
-(id)init;
-(BlastDoorSticker *)sticker;
-(BlastDoorBalloonPlugin *)balloonPlugin;
-(NSString *)description;
-(BlastDoorMessage *)textMessage;
-(unsigned long long)type;
-(BlastDoorTapBack *)tapback;
-(BlastDoorTypingIndicator *)typingIndicator;
-(BlastDoorAudioMessage *)audioMessage;
@end

