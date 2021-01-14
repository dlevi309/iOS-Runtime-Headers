/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, KTRequest;

@interface KTSignedMutationTimestamp : NSManagedObject

@property (assign,nonatomic) long long mutationTime; 
@property (assign,nonatomic) double receiptTime; 
@property (assign,nonatomic) long long signatureVerified; 
@property (nonatomic,retain) NSData * smt; 
@property (assign,nonatomic) long long verificationResult; 
@property (nonatomic,retain) NSSet * failures; 
@property (nonatomic,retain) KTRequest * request; 
+(id)fetchRequest;
@end

