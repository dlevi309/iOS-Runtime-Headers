/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSData, KTRequest;

@interface KTRequestFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (nonatomic,retain) KTRequest * request; 
+(id)fetchRequest;
@end

