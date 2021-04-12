/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, KTRequest;

@interface KTSignedMutationTimestamp : NSManagedObject

@property (assign,nonatomic) long long mutationTime; 
@property (assign,nonatomic) double receiptTime; 
@property (assign,nonatomic) BOOL signatureVerified; 
@property (nonatomic,retain) NSData * smt; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
@property (nonatomic,retain) KTRequest * request; 
+(id)fetchRequest;
@end

