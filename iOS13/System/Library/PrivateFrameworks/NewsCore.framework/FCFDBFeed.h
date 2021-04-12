/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, NSOrderedSet;

@interface FCFDBFeed : NSManagedObject

@property (nonatomic,retain) NSString * feedID; 
@property (assign,nonatomic) NSNumber * lookupID; 
@property (nonatomic,retain) NSDate * refreshDate; 
@property (assign,nonatomic) unsigned long long refreshedToOrder; 
@property (nonatomic,retain) NSOrderedSet * segments; 
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(id)prune;
-(void)willAccessFeedRange:(id)arg1 ;
-(id)contiguousRangeInRange:(id)arg1 ;
-(void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(BOOL)arg8 ;
-(id)contiguousSegmentsInFeedRange:(id)arg1 ;
-(id)firstSegmentFollowingFeedRange:(id)arg1 ;
-(void)insertSegment:(id)arg1 ;
-(void)enumerateGapsWithBlock:(/*^block*/id)arg1 ;
@end

