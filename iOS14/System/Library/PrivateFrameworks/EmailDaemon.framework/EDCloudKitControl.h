/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData;

@interface EDCloudKitControl : NSManagedObject

@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (assign,nonatomic) BOOL migratedFromKVSStorage; 
+(id)fetchRequest;
@end

