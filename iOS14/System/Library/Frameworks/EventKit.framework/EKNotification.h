/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)knownRelationshipSingleValueKeys;
+(Class)frozenClass;
-(BOOL)commit:(id*)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)UUID;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(id)calendar;
-(NSString *)externalModificationTag;
-(NSURL *)hostURL;
-(EKObjectID *)objectID;
-(void)setHostURL:(NSURL *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
@end

