/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)run;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(FCCKPrivateDatabaseSchema *)schema;
-(void)setSchema:(FCCKPrivateDatabaseSchema *)arg1 ;
-(void)_eraseAllPrivateData;
-(id)_prepareHistoryAndReturnExpectations;
-(id)_prepareIssueHistoryAndReturnExpectations;
-(id)_prepareReadingListAndReturnExpectations;
-(id)_prepareSubscriptionsAndReturnExpectations;
-(id)_prepareSensitiveSubscriptionsAndReturnExpectations;
-(id)_prepareUserInfoAndReturnExpectations;
-(id)_prepareTagSettingsAndReturnExpectations;
-(id)_preparePersonalizationProfileAndReturnExpectations;
-(id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
-(id)_prepareSentinelsAndReturnExpectations;
-(CKContainer *)secureContainer;
-(CKContainer *)containerWithZoneWidePCS;
-(void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setContainerWithZoneWidePCS:(CKContainer *)arg1 ;
-(void)setSecureContainer:(CKContainer *)arg1 ;
@end

