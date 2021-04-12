/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSLocationCacheEntry : NSManagedObject

@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) double updateTimestamp; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * addressDictionaryString; 
@property (nonatomic,copy) NSString * postalAddress; 
@property (nonatomic,retain) NSSet * placemarks; 
+(id)entityName;
@end

