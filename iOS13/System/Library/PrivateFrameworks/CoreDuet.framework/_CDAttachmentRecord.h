/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSUUID, NSURL, NSSet;

@interface _CDAttachmentRecord : NSManagedObject

@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * uti; 
@property (nonatomic,retain) NSUUID * identifier; 
@property (nonatomic,retain) NSUUID * cloudIdentifier; 
@property (nonatomic,retain) NSString * photoLocalIdentifier; 
@property (assign,nonatomic) long long sizeInBytes; 
@property (nonatomic,retain) NSURL * contentURL; 
@property (nonatomic,retain) NSString * contentText; 
@property (nonatomic,retain) NSSet * interactions; 
@end

