/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSLocationCacheEntry : NSManagedObject

@property (assign,nonatomic) unsigned long long muid; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL coarse; 
@property (assign,nonatomic) double updateTimestamp; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * addressDictionaryString; 
@property (nonatomic,copy) NSString * postalAddress; 
@property (nonatomic,retain) NSSet * placemarks; 
+(id)entityName;
@end

