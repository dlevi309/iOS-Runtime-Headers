/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCCKDatabaseEncryptionDelegate.h>

@class FCCKPrivateDatabaseSchema, CKContainer, NSString;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject <FCCKDatabaseEncryptionDelegate> {

	FCCKPrivateDatabaseSchema* _schema;
	CKContainer* _container;
	CKContainer* _containerWithZoneWidePCS;
	CKContainer* _secureContainer;

}

@property (nonatomic,retain) FCCKPrivateDatabaseSchema * schema;                  //@synthesize schema=_schema - In the implementation block
@property (nonatomic,retain) CKContainer * container;                             //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CKContainer * containerWithZoneWidePCS;              //@synthesize containerWithZoneWidePCS=_containerWithZoneWidePCS - In the implementation block
@property (nonatomic,retain) CKContainer * secureContainer;                       //@synthesize secureContainer=_secureContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)run;
-(void)setSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(FCCKPrivateDatabaseSchema *)schema;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)run;
-(id)init;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionIsRequiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)fetchShouldSecureSubscriptionsForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CKContainer *)container;
-(void)_eraseAllPrivateData;
-(id)_prepareHistoryAndReturnExpectations;
-(id)_prepareIssueHistoryAndReturnExpectations;
-(id)_prepareReadingListAndReturnExpectations;
-(CKContainer *)secureContainer;
-(id)_prepareSubscriptionsAndReturnExpectations;
-(id)_prepareSensitiveSubscriptionsAndReturnExpectations;
-(id)_prepareUserInfoAndReturnExpectations;
-(id)_prepareTagSettingsAndReturnExpectations;
-(id)_preparePersonalizationProfileAndReturnExpectations;
-(id)_prepareSentinelsAndReturnExpectations;
-(id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
-(CKContainer *)containerWithZoneWidePCS;
-(void)setContainerWithZoneWidePCS:(CKContainer *)arg1 ;
-(void)setSecureContainer:(CKContainer *)arg1 ;
@end

