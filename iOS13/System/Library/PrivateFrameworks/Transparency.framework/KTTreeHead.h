/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSSet;

@interface KTTreeHead : NSManagedObject

@property (nonatomic,copy) NSString * application; 
@property (assign,nonatomic) long long logBeginTime; 
@property (nonatomic,retain) NSData * logHeadHash; 
@property (assign,nonatomic) long long logType; 
@property (assign,nonatomic) double receiptTime; 
@property (assign,nonatomic) long long revision; 
@property (assign,nonatomic) long long signatureVerified; 
@property (nonatomic,retain) NSData * sth; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
+(id)fetchRequest;
@end

