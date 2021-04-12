/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, _CDContactRecord;

@interface _CDInteractionRecord : NSManagedObject

@property (nonatomic,retain) NSString * bundleId; 
@property (nonatomic,retain) NSString * targetBundleId; 
@property (nonatomic,retain) NSString * groupName; 
@property (nonatomic,retain) NSString * derivedIntentIdentifier; 
@property (nonatomic,retain) NSString * domainIdentifier; 
@property (nonatomic,retain) NSString * contentURL; 
@property (assign,nonatomic) double creationDate; 
@property (assign,nonatomic) long long direction; 
@property (assign,nonatomic) double endDate; 
@property (assign,nonatomic) BOOL isResponse; 
@property (nonatomic,retain) NSString * locationUUID; 
@property (assign,nonatomic) long long mechanism; 
@property (assign,nonatomic) long long recipientCount; 
@property (assign,nonatomic) double startDate; 
@property (nonatomic,retain) NSString * account; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSSet * keywords; 
@property (nonatomic,retain) NSSet * attachments; 
@property (nonatomic,retain) NSSet * recipients; 
@property (nonatomic,retain) _CDContactRecord * sender; 
@end

