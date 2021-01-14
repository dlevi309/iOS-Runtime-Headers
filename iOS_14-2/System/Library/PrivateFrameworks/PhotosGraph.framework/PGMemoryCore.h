/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

@class NSDate, NSArray;


@protocol PGMemoryCore <NSObject>
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) NSArray * meaningLabels; 
@property (nonatomic,readonly) NSArray * moodKeywords; 
@property (nonatomic,readonly) unsigned long long suggestedMood; 
@property (nonatomic,readonly) unsigned long long category; 
@required
-(NSArray *)meaningLabels;
-(NSDate *)universalEndDate;
-(NSDate *)universalStartDate;
-(unsigned long long)category;
-(unsigned long long)suggestedMood;
-(NSArray *)moodKeywords;

@end

