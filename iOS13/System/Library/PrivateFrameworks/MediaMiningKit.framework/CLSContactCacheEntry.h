/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject

@property (assign,nonatomic) NSString * contactIdentifier; 
@property (assign,nonatomic) BOOL hasPicture; 
@property (assign,nonatomic) NSString * classifiedPersonLocalIdentifierWithFaceModelID; 
@property (assign,nonatomic) double updateTimestamp; 
+(id)entityName;
-(id)cachedContact;
@end

