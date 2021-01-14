/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSNumber, NSDate, NSURL;

@interface VUIFPSKeyDeletionInfoManagedObject : NSManagedObject

@property (nonatomic,retain) NSData * additionalFPSRequestParamsJSONData; 
@property (nonatomic,copy) NSString * contentID; 
@property (nonatomic,copy) NSNumber * dsid; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSURL * fpsKeyServerURL; 
@property (nonatomic,copy) NSURL * fpsNonceURL; 
@property (nonatomic,retain) NSData * keyData; 
@property (nonatomic,copy) NSURL * keyURI; 
@property (nonatomic,copy) NSDate * playbackExpirationStartDate; 
+(id)fetchRequest;
@end

