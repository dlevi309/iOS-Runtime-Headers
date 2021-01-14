/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate;

@interface RKRankingInfo : NSManagedObject

@property (assign,nonatomic) long long responseId; 
@property (nonatomic,retain) NSString * message; 
@property (nonatomic,retain) NSString * response; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,retain) NSString * recipientId; 
@property (assign,nonatomic) unsigned long long source; 
@property (assign,nonatomic) unsigned long long inputMethod; 
@property (nonatomic,retain) NSString * rankedList; 
@property (nonatomic,retain) NSDate * timestamp; 
@end

