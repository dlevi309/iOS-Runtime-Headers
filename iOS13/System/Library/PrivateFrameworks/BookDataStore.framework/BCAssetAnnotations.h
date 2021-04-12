/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCAssetAnnotations.h>
@class NSString, NSData;


@protocol BCAssetAnnotations <BCCloudData>
@property (nonatomic,copy,readonly) NSString * assetID; 
@property (nonatomic,copy,readonly) NSString * assetVersion; 
@property (nonatomic,readonly) NSData * bookAnnotations; 
@required
-(NSString *)assetVersion;
-(NSString *)assetID;
-(NSData *)bookAnnotations;

@end


@class NSString, NSData, NSDate, CKRecord;

@interface BCAssetAnnotations : BCCloudData <BCAssetAnnotations>

@property (nonatomic,copy) NSString * assetID; 
@property (nonatomic,copy) NSString * assetVersion; 
@property (nonatomic,retain) NSData * bookAnnotations; 
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
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromAssetAnnotations:(id)arg1 withMergers:(id)arg2 ;
-(void)_mergeInAssetID:(id)arg1 assetVersion:(id)arg2 serializedData:(id)arg3 ;
@end

