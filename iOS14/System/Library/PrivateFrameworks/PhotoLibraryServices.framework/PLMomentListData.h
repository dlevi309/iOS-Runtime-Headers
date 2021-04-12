/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)momentListDebugDescription;
-(NSString *)title;

@required
-(NSSet *)moments;
-(NSDate *)endDate;
-(void)delete;
-(NSObject*<NSCopying>)uniqueObjectID;
-(void)setStartDate:(id)arg1;
-(NSDate *)startDate;
-(void)setEndDate:(id)arg1;
-(NSDate *)representativeDate;
-(void)addMoments:(id)arg1;
-(BOOL)isDeleted;
-(short)granularityLevel;
-(void)setRepresentativeDate:(id)arg1;
-(NSArray *)batchedMoments;
-(void)setSortIndex:(int)arg1;
-(int)sortIndex;
-(void)setGranularityLevel:(short)arg1;

@end

