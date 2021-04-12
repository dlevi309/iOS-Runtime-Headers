/*
* Generated on Thursday, January 14, 2021 at 2:27:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
*/

#import <BookDataStore/BCCloudData.h>
#import <libobjc.A.dylib/BCCollectionMember.h>
@class NSString;


@protocol BCCollectionMember <BCCloudData>
@property (nonatomic,copy,readonly) NSString * collectionMemberID; 
@property (nonatomic,readonly) int sortOrder; 
@required
-(int)sortOrder;
-(NSString *)collectionMemberID;

@end


@class NSString, NSDate, CKRecord, NSData;

@interface BCCollectionMember : BCCloudData <BCCollectionMember>

@property (nonatomic,copy) NSString * collectionMemberID; 
@property (assign,nonatomic) int sortOrder; 
@property (nonatomic,readonly) BOOL deletedFlag; 
@property (nonatomic,copy,readonly) NSDate * modificationDate; 
@property (nonatomic,readonly) long long editGeneration; 
@property (nonatomic,readonly) long long syncGeneration; 
@property (nonatomic,copy,readonly) CKRecord * systemFields; 
@property (nonatomic,copy,readonly) NSData * ckSystemFields; 
@property (assign,nonatomic,__weak) id<BCCloudDataPrivacyDelegate> privacyDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertyIDKey;
+(id)collectionMemberIDWithCollectionID:(id)arg1 assetID:(id)arg2 ;
+(id)assetIDFromCollectionMemberID:(id)arg1 ;
+(id)collectionIDFromCollectionMemberID:(id)arg1 ;
-(id)zoneName;
-(id)mutableCopy;
-(id)recordType;
-(NSString *)debugDescription;
-(id)identifier;
-(BOOL)isEqualExceptForDate:(id)arg1 ;
-(void)configureFromCloudData:(id)arg1 withMergers:(id)arg2 ;
-(void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2 ;
-(void)_configureFromCollectionMember:(id)arg1 withMergers:(id)arg2 ;
@end

