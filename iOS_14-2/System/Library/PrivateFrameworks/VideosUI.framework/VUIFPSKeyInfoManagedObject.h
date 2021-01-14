/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData, NSURL, NSNumber, VUIVideoManagedObject;

@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (assign,nonatomic) BOOL allowsManualRenewal; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (assign,nonatomic) BOOL isInvalid; 
@property (assign,nonatomic) BOOL isLowValue; 
@property (nonatomic,retain) NSData * keyData; 
@property (nonatomic,copy) NSURL * keyURI; 
@property (nonatomic,copy) NSNumber * playbackDuration; 
@property (nonatomic,copy) NSDate * playbackExpirationStartDate; 
@property (nonatomic,copy) NSDate * renewalDate; 
@property (nonatomic,copy) NSNumber * renewalInterval; 
@property (nonatomic,copy) NSDate * retrievalDate; 
@property (nonatomic,retain) VUIVideoManagedObject * video; 
+(id)fetchRequest;
-(void)populateFromKeyRequest:(id)arg1 video:(id)arg2 ;
@end

