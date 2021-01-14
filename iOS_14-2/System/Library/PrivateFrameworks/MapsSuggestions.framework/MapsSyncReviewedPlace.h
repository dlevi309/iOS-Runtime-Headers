/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

@class NSDate;


@protocol MapsSyncReviewedPlace <MapsSyncBaseItem>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) BOOL hasUserReviewed; 
@property (nonatomic,readonly) NSDate * lastSuggestedReviewDate; 
@required
-(void)addEditWithBlock:(/*^block*/id)arg1;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1;
-(NSDate *)lastSuggestedReviewDate;
-(BOOL)hasUserReviewed;
-(unsigned long long)muid;

@end

