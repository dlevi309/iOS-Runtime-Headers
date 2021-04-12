/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)initialized;
-(id)sortDescriptors;
-(BBDataProviderIdentity *)identity;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(id)sectionIdentifier;
-(id)sortKey;
-(id)sectionDisplayName;
-(void)dataProviderDidLoad;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)syncsBulletinDismissal;
-(BOOL)canClearBulletinsByDate;
-(BOOL)canClearAllBulletins;
-(id)sectionParameters;
-(id)universalSectionIdentifier;
-(id)parentSectionIdentifier;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(id)defaultSectionInfo;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(id)sectionIcon;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
@end

