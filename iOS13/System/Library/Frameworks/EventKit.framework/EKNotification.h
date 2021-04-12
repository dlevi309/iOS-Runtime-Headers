/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObject.h>

@class EKObjectID, NSString, NSURL;

@interface EKNotification : EKObject

@property (nonatomic,readonly) EKObjectID * objectID; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSString * UUID; 
@property (nonatomic,copy) NSURL * hostURL; 
+(Class)frozenClass;
+(id)knownRelationshipSingleValueKeys;
-(id)calendar;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(EKObjectID *)objectID;
-(NSString *)externalID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSURL *)hostURL;
-(void)setHostURL:(NSURL *)arg1 ;
-(BOOL)commit:(id*)arg1 ;
@end

