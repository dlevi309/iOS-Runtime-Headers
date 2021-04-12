/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
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

