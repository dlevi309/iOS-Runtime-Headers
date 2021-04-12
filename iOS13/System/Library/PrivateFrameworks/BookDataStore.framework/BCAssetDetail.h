/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCAssetDetail.h>
@class NSString, NSDate, NSData;


@protocol BCAssetDetail <BCCloudData>
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,readonly) BOOL isFinished; 
@property (nonatomic,readonly) BOOL notFinished; 
@property (nonatomic,copy,readonly) NSDate * lastOpenDate; 
@property (nonatomic,copy,readonly) NSDate * dateFinished; 
@property (nonatomic,readonly) short taste; 
@property (nonatomic,readonly) short tasteSyncedToStore; 
@property (nonatomic,readonly) float readingProgress; 
@property (nonatomic,readonly) float readingProgressHighWaterMark; 
@property (nonatomic,copy,readonly) NSString * readingPositionCFIString; 
@property (nonatomic,copy,readonly) NSString * readingPositionAnnotationVersion; 
@property (nonatomic,copy,readonly) NSString * readingPositionAssetVersion; 
@property (nonatomic,copy,readonly) NSData * readingPositionUserData; 
@property (nonatomic,readonly) int readingPositionLocationRangeStart; 
@property (nonatomic,readonly) int readingPositionLocationRangeEnd; 
@property (nonatomic,readonly) int readingPositionAbsolutePhysicalLocation; 
@property (nonatomic,copy,readonly) NSString * readingPositionStorageUUID; 
@property (nonatomic,copy,readonly) NSDate * readingPositionLocationUpdateDate; 
@property (nonatomic,copy,readonly) NSDate * datePlaybackTimeUpdated; 
@property (nonatomic,readonly) double bookmarkTime; 
@required
-(BOOL)isFinished;
-(NSString *)assetID;
-(double)bookmarkTime;
-(NSDate *)dateFinished;
-(float)readingProgressHighWaterMark;
-(float)readingProgress;
-(BOOL)notFinished;
-(NSDate *)lastOpenDate;
-(short)taste;
-(short)tasteSyncedToStore;
-(NSString *)readingPositionCFIString;
-(NSString *)readingPositionAnnotationVersion;
-(NSString *)readingPositionAssetVersion;
-(NSData *)readingPositionUserData;
-(int)readingPositionLocationRangeStart;
-(int)readingPositionLocationRangeEnd;
-(int)readingPositionAbsolutePhysicalLocation;
-(NSString *)readingPositionStorageUUID;
-(NSDate *)readingPositionLocationUpdateDate;
-(NSDate *)datePlaybackTimeUpdated;

@end


@class NSString, NSDate, NSData, CKRecord;

@interface BCAssetDetail : BCCloudData <BCAssetDetail>

@property (nonatomic,copy) NSString * assetID; 
@property (assign,nonatomic) BOOL isFinished; 
@property (assign,nonatomic) BOOL notFinished; 
@property (nonatomic,copy) NSDate * lastOpenDate; 
@property (nonatomic,copy) NSDate * dateFinished; 
@property (assign,nonatomic) short taste; 
@property (assign,nonatomic) short tasteSyncedToStore; 
@property (assign,nonatomic) float readingProgress; 
@property (assign,nonatomic) float readingProgressHighWaterMark; 
@property (nonatomic,copy) NSString * readingPositionCFIString; 
@property (nonatomic,copy) NSString * readingPositionAnnotationVersion; 
@property (nonatomic,copy) NSString * readingPositionAssetVersion; 
@property (nonatomic,copy) NSData * readingPositionUserData; 
@property (assign,nonatomic) int readingPositionLocationRangeStart; 
@property (assign,nonatomic) int readingPositionLocationRangeEnd; 
@property (assign,nonatomic) int readingPositionAbsolutePhysicalLocation; 
@property (nonatomic,copy) NSString * readingPositionStorageUUID; 
@property (nonatomic,copy) NSDate * readingPositionLocationUpdateDate; 
@property (nonatomic,copy) NSDate * datePlaybackTimeUpdated; 
@property (assign,nonatomic) double bookmarkTime; 
@property (nonatomic,readonly) BOOL isAudiobook; 
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
-(NSString *)debugDescription;
-(id)mutableCopy;
-(id)identifier;
-(id)recordType;
-(id)zoneName;
-(BOOL)isAudiobook;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromAssetDetail:(id)arg1 withMergers:(id)arg2 ;
-(BOOL)setDifferentBookmarkTime:(double)arg1 ;
@end

