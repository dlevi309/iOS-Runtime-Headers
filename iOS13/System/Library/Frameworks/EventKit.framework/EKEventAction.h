/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class NSString, NSData;

@interface EKEventAction : EKObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSData * externalRepresentation; 
+(Class)frozenClass;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(void)setExternalScheduleID:(NSString *)arg1 ;
@end

