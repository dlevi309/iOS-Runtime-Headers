/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

