/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, NSAttributedString, NSArray;

@interface BlastDoorAudioMessage : NSObject {

	 audioMessage;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSAttributedString * content; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
@property (readonly,nonatomic) NSArray * inlineAudioMessages; 
-(NSAttributedString *)content;
-(id)init;
-(NSString *)description;
-(NSArray *)participantDestinationIdentifiers;
-(NSArray *)inlineAudioMessages;
@end

