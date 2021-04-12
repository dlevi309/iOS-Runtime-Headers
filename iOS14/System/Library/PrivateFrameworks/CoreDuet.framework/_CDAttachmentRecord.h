/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

