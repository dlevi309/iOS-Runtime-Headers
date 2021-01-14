/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>

@class BBDataProviderIdentity, NSString;

@interface BBDataProvider : NSObject <BBSectionIdentity> {

	BBDataProviderIdentity* _identity;

}

@property (retain) BBDataProviderIdentity * identity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(id)sectionIdentifier;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(id)universalSectionIdentifier;
-(id)sortKey;
-(BBDataProviderIdentity *)identity;
-(id)parentSectionIdentifier;
-(id)defaultSectionInfo;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSString *)debugDescription;
-(void)dataProviderDidLoad;
-(BOOL)canPerformMigration;
-(BOOL)syncsBulletinDismissal;
-(id)sortDescriptors;
-(BOOL)initialized;
-(id)defaultSubsectionInfos;
-(NSString *)description;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)canClearBulletinsByDate;
-(BOOL)canClearAllBulletins;
-(id)sectionIcon;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)invalidate;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)sectionDisplayName;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startWatchdog;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

