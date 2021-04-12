/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setExternalScheduleID:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalScheduleID;
-(NSString *)externalID;
-(NSString *)externalModificationTag;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSData *)externalRepresentation;
@end

