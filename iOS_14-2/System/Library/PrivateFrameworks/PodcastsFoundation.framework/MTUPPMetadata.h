/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface MTUPPMetadata : NSManagedObject

@property (nonatomic,retain) NSString * metadataIdentifier; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double bookmarkTime; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (assign,nonatomic) long long playCount; 
@end

