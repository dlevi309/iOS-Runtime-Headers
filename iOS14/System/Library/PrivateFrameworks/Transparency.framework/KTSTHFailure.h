/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, KTTreeHead;

@interface KTSTHFailure : NSManagedObject

@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * errorDomain; 
@property (nonatomic,retain) NSData * proofOfFailure; 
@property (assign,nonatomic) long long verificationType; 
@property (nonatomic,retain) KTTreeHead * sth; 
+(id)fetchRequest;
@end

