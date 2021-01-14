/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
*/


#import <BlastDoor/BlastDoor-Structs.h>
@class NSString, NSArray, BlastDoorTapBack_MessageSummaryInfo;

@interface BlastDoorTapBack : NSObject {

	 tapBack;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) long long associatedMessageType; 
@property (readonly,nonatomic) NSString * associatedMessageGUID; 
@property (readonly,nonatomic) NSRange associatedMessageRange; 
@property (readonly,nonatomic) NSArray * participantDestinationIdentifiers; 
@property (readonly,nonatomic) BlastDoorTapBack_MessageSummaryInfo * messageSummaryInfo; 
@property (readonly,nonatomic) NSString * plainTextBody; 
-(id)init;
-(long long)associatedMessageType;
-(NSString *)description;
-(BlastDoorTapBack_MessageSummaryInfo *)messageSummaryInfo;
-(NSRange)associatedMessageRange;
-(NSString *)associatedMessageGUID;
-(NSString *)plainTextBody;
-(NSArray *)participantDestinationIdentifiers;
@end

