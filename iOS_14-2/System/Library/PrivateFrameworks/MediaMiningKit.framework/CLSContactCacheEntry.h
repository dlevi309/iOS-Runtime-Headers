/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

