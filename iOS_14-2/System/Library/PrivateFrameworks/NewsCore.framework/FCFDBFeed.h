/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)prune;
-(void)willTurnIntoFault;
-(void)enumerateGapsWithBlock:(/*^block*/id)arg1 ;
-(void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(BOOL)arg8 ;
-(void)insertSegment:(id)arg1 ;
-(id)contiguousRangeInRange:(id)arg1 ;
-(id)contiguousSegmentsInFeedRange:(id)arg1 ;
-(void)_visitContiguousSegmentsInRange:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)willAccessFeedRange:(id)arg1 ;
-(id)firstSegmentFollowingFeedRange:(id)arg1 ;
@end

