/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


@class NSString, BlastDoorTypingIndicator_Icon, NSArray;

@interface BlastDoorTypingIndicator : NSObject {

	 typingIndicator;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BOOL isFinished; 
@property (readonly,nonatomic) BlastDoorTypingIndicator_Icon * icon; 
@property (readonly,nonatomic) NSString * balloonPluginBundleID; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
-(id)init;
-(BlastDoorTypingIndicator_Icon *)icon;
-(BOOL)isFinished;
-(NSString *)description;
-(NSArray *)participantDestinationIdentifiers;
-(NSString *)balloonPluginBundleID;
@end

