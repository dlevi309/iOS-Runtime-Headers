/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class NSDate;


@protocol MapsSyncMutableReviewedPlace <MapsSyncMutableBaseItem>
@property (assign,nonatomic) unsigned long long muid; 
@property (nonatomic,retain) NSDate * lastSuggestedReviewDate; 
@property (assign,nonatomic) BOOL hasUserReviewed; 
@required
-(void)setMuid:(unsigned long long)arg1;
-(NSDate *)lastSuggestedReviewDate;
-(void)setLastSuggestedReviewDate:(id)arg1;
-(BOOL)hasUserReviewed;
-(void)setHasUserReviewed:(BOOL)arg1;
-(unsigned long long)muid;

@end

