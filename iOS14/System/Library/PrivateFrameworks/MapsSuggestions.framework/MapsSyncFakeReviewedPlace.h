/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeBaseItem.h>
#import <MapsSuggestions/MapsSyncReviewedPlace.h>

@protocol OS_dispatch_queue;
@class NSDate, NSObject, NSMutableArray, NSUUID, NSString;

@interface MapsSyncFakeReviewedPlace : MapsSyncFakeBaseItem <MapsSyncReviewedPlace> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _editBlocks;
	BOOL _hasUserReviewed;
	unsigned long long _muid;
	NSDate* _lastSuggestedReviewDate;

}

@property (nonatomic,readonly) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (nonatomic,readonly) BOOL hasUserReviewed;                          //@synthesize hasUserReviewed=_hasUserReviewed - In the implementation block
@property (nonatomic,readonly) NSDate * lastSuggestedReviewDate;              //@synthesize lastSuggestedReviewDate=_lastSuggestedReviewDate - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)commitEditsWithCompletion:(/*^block*/id)arg1 ;
-(NSDate *)lastSuggestedReviewDate;
-(BOOL)hasUserReviewed;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 hasUserReviewed:(BOOL)arg3 lastSuggestedReviewDate:(id)arg4 ;
-(unsigned long long)muid;
@end

