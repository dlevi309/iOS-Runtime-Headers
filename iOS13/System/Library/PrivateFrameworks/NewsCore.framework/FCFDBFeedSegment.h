/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(FCFeedRange *)feedRange;
@end

