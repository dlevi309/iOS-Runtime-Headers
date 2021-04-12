/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

@class NSUUID, NSURL, NSDate;


@protocol AFClockItem <NSObject>
@property (nonatomic,readonly) NSUUID * itemID; 
@property (nonatomic,readonly) NSURL * itemURL; 
@property (nonatomic,readonly) BOOL isFiring; 
@property (nonatomic,copy,readonly) NSDate * firedDate; 
@property (nonatomic,copy,readonly) NSDate * dismissedDate; 
@property (nonatomic,copy,readonly) NSDate * lastModifiedDate; 
@required
-(NSDate *)firedDate;
-(BOOL)isFiring;
-(NSDate *)dismissedDate;
-(NSDate *)lastModifiedDate;
-(NSURL *)itemURL;
-(NSUUID *)itemID;

@end

