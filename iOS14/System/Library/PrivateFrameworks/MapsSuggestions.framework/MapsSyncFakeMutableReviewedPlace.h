/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeMutableBaseItem.h>
#import <MapsSuggestions/MapsSyncMutableReviewedPlace.h>

@class NSDate, NSUUID, NSString;

@interface MapsSyncFakeMutableReviewedPlace : MapsSyncFakeMutableBaseItem <MapsSyncMutableReviewedPlace> {

	BOOL _hasUserReviewed;
	unsigned long long _muid;
	NSDate* _lastSuggestedReviewDate;

}

@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,retain) NSDate * lastSuggestedReviewDate;              //@synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate - In the implementation block
@property (assign,nonatomic) BOOL hasUserReviewed;                          //@synthesize hasUserReviewed=_hasUserReviewed - In the implementation block
@property (nonatomic,copy) NSUUID * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMuid:(unsigned long long)arg1 ;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(void)setLastSuggestedReviewDate:(NSDate *)arg1 ;
-(BOOL)hasUserReviewed;
-(void)setHasUserReviewed:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 hasUserReviewed:(BOOL)arg2 lastSuggestedReviewDate:(id)arg3 ;
-(unsigned long long)muid;
@end

