/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


#import <BlastDoor/BlastDoor-Structs.h>
@class NSString, BlastDoorBalloonPluginPayloadWrapper, NSArray, NSAttributedString;

@interface BlastDoorBalloonPlugin : NSObject {


}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BlastDoorBalloonPluginPayloadWrapper * payload; 
@property (readonly,nonatomic) NSString * bundleID; 
@property (readonly,nonatomic) BOOL isExpirable; 
@property (readonly,nonatomic) NSArray * attributionInfo; 
@property (readonly,nonatomic) NSString * plainTextBody; 
@property (readonly,nonatomic) NSAttributedString * content; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
@property (readonly,nonatomic) NSString * associatedMessageGUID; 
@property (readonly,nonatomic) BOOL has_associatedMessageRange; 
@property (readonly,nonatomic) NSRange associatedMessageRange; 
@property (readonly,nonatomic) BOOL has_associatedMessageType; 
@property (readonly,nonatomic) long long associatedMessageType; 
@property (readonly,nonatomic) NSArray * attachments; 
-(NSAttributedString *)content;
-(NSArray *)attachments;
-(id)init;
-(long long)associatedMessageType;
-(BlastDoorBalloonPluginPayloadWrapper *)payload;
-(BOOL)isExpirable;
-(NSString *)description;
-(NSArray *)attributionInfo;
-(NSRange)associatedMessageRange;
-(NSString *)bundleID;
-(NSString *)associatedMessageGUID;
-(NSString *)plainTextBody;
-(NSArray *)participantDestinationIdentifiers;
-(BOOL)has_associatedMessageRange;
-(BOOL)has_associatedMessageType;
@end

