/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


#import <BlastDoor/BlastDoor-Structs.h>
@class NSString, BlastDoorMessage, NSArray;

@interface BlastDoorSticker : NSObject {

	 sticker;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) NSString * associatedMessageGUID; 
@property (readonly,nonatomic) BOOL has_associatedMessageRange; 
@property (readonly,nonatomic) NSRange associatedMessageRange; 
@property (readonly,nonatomic) BlastDoorMessage * messageContent; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
-(id)init;
-(NSString *)description;
-(NSRange)associatedMessageRange;
-(NSString *)associatedMessageGUID;
-(NSArray *)participantDestinationIdentifiers;
-(BOOL)has_associatedMessageRange;
-(BlastDoorMessage *)messageContent;
@end

