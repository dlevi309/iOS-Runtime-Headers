/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate;

@interface EDConversationInfo : NSManagedObject

@property (nonatomic,copy) NSString * ckRecordID; 
@property (nonatomic,retain) NSData * ckRecordSystemFields; 
@property (nonatomic,copy) NSString * conversationUUID; 
@property (nonatomic,copy) NSDate * lastModified; 
@property (nonatomic,copy) NSString * messageIds; 
@property (assign,nonatomic) BOOL notifyMe; 
@property (assign,nonatomic) BOOL muted; 
+(id)fetchRequest;
@end

