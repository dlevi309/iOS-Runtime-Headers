/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

