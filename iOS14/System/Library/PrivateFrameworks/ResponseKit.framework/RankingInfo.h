/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RankingInfo : NSManagedObject

@property (nonatomic,copy) NSString * category; 
@property (assign,nonatomic) short inputMethod; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * rankedList; 
@property (nonatomic,copy) NSString * recipientId; 
@property (nonatomic,copy) NSString * response; 
@property (assign,nonatomic) short source; 
@property (nonatomic,copy) NSDate * timestamp; 
+(id)fetchRequest;
@end

