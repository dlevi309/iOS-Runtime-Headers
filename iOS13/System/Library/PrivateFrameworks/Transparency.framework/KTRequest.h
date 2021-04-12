/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, NSUUID, NSDate, NSSet;

@interface KTRequest : NSManagedObject

@property (nonatomic,retain) NSData * accountId; 
@property (nonatomic,copy) NSString * application; 
@property (nonatomic,retain) NSData * clientLoggableDatas; 
@property (nonatomic,retain) NSData * queryRequest; 
@property (nonatomic,retain) NSData * queryResponse; 
@property (nonatomic,copy) NSUUID * requestId; 
@property (assign,nonatomic) double requestTime; 
@property (assign,nonatomic) long long responseErrorCode; 
@property (nonatomic,copy) NSDate * responseTime; 
@property (assign,nonatomic) long long sequenceId; 
@property (nonatomic,copy) NSString * serverHint; 
@property (nonatomic,retain) NSData * serverLoggableDatas; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * uri; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
@property (nonatomic,retain) NSSet * smts; 
+(id)fetchRequest;
@end

