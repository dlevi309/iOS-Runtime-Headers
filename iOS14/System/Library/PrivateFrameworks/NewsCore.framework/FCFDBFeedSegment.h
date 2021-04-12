/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSData, NSDate, NSSet, FCFeedRange;

@interface FCFDBFeedSegment : NSManagedObject

@property (assign,nonatomic) unsigned long long top; 
@property (assign,nonatomic) unsigned long long bottom; 
@property (nonatomic,retain) NSNumber * feedItemCount; 
@property (nonatomic,retain) NSData * ckCursor; 
@property (nonatomic,retain) NSDate * lastAccessDate; 
@property (nonatomic,retain) NSSet * feedItemIndexes; 
@property (nonatomic,readonly) FCFeedRange * feedRange; 
-(FCFeedRange *)feedRange;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(id)description;
@end

