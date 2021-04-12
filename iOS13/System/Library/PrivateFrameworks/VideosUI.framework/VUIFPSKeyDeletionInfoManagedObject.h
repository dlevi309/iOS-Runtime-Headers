/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

