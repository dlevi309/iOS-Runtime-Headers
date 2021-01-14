/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, KTRequest;

@interface KTRequestFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorDomain; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (nonatomic,retain) KTRequest * request; 
+(id)fetchRequest;
@end

