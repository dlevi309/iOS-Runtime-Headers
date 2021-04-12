/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

@class NSDate, NSSet, NSArray, NSString;


@protocol PLMomentListData <PLMomentRefreshable>
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * representativeDate; 
@property (assign,nonatomic) short granularityLevel; 
@property (nonatomic,retain,readonly) NSObject*<NSCopying> uniqueObjectID; 
@property (assign,nonatomic) int sortIndex; 
@property (nonatomic,retain,readonly) NSSet * moments; 
@property (nonatomic,retain,readonly) NSArray * batchedMoments; 
@property (nonatomic,retain,readonly) NSString * momentListDebugDescription; 
@property (nonatomic,retain,readonly) NSString * title; 
@optional
-(NSString *)title;
-(NSString *)momentListDebugDescription;

@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(id)arg1;
-(void)setEndDate:(id)arg1;
-(void)delete;
-(BOOL)isDeleted;
-(NSObject*<NSCopying>)uniqueObjectID;
-(NSSet *)moments;
-(NSDate *)representativeDate;
-(int)sortIndex;
-(short)granularityLevel;
-(void)setRepresentativeDate:(id)arg1;
-(void)addMoments:(id)arg1;
-(void)setGranularityLevel:(short)arg1;
-(void)setSortIndex:(int)arg1;
-(NSArray *)batchedMoments;

@end

