/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSUUID, NSData, NSSet;

@interface MapsSyncManagedCollection : NSManagedObject

@property (copy,nonatomic) NSString * collectionDescription; 
@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSData * image; 
@property (copy,nonatomic) NSString * imageUrl; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (assign,nonatomic) long long positionIndex; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) NSSet * places; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

