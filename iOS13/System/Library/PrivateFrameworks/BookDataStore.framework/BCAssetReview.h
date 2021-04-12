/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCAssetReview.h>
@class NSString;


@protocol BCAssetReview <BCCloudData>
@property (nonatomic,copy,readonly) NSString * assetReviewID; 
@property (nonatomic,readonly) short starRating; 
@property (nonatomic,readonly) double normalizedStarRating; 
@property (nonatomic,copy,readonly) NSString * reviewTitle; 
@property (nonatomic,copy,readonly) NSString * reviewBody; 
@required
-(short)starRating;
-(NSString *)assetReviewID;
-(double)normalizedStarRating;
-(NSString *)reviewTitle;
-(NSString *)reviewBody;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCAssetReview : BCCloudData <BCAssetReview>

@property (nonatomic,copy) NSString * assetReviewID; 
@property (nonatomic,copy) NSString * userID; 
@property (assign,nonatomic) short starRating; 
@property (assign,nonatomic) double normalizedStarRating; 
@property (nonatomic,copy) NSString * reviewTitle; 
@property (nonatomic,copy) NSString * reviewBody; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
+(id)propertyIDKey;
+(id)userIDFromAssetReviewID:(id)arg1 ;
+(id)assetReviewIDWithUserID:(id)arg1 assetID:(id)arg2 ;
+(id)assetIDFromAssetReviewID:(id)arg1 ;
-(NSString *)debugDescription;
-(id)mutableCopy;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(double)normalizedStarRating;
-(void)_configureFromAssetReview:(id)arg1 withMergers:(id)arg2 ;
-(void)setNormalizedStarRating:(double)arg1 ;
@end
