/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)category;
-(unsigned long long)suggestedMood;
-(NSArray *)moodKeywords;
-(NSArray *)meaningLabels;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;

@end

