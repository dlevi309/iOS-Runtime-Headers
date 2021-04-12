/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCContainerScheduler, CKServerChangeToken, NSString;

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCContainerScheduler* _scheduler;
	CKServerChangeToken* _metadataChangeToken;
	CKServerChangeToken* _zoneHealthChangeToken;
	CKServerChangeToken* _sideCarChangeToken;

}

@property (nonatomic,readonly) BRCContainerScheduler * scheduler;                        //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * metadataChangeToken;                //@synthesize metadataChangeToken=_metadataChangeToken - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * zoneHealthChangeToken;              //@synthesize zoneHealthChangeToken=_zoneHealthChangeToken - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * sideCarChangeToken;                 //@synthesize sideCarChangeToken=_sideCarChangeToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(BRCContainerScheduler *)scheduler;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)createActivity;
-(id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 zoneHealthChangeToken:(id)arg3 sideCarChangeToken:(id)arg4 ;
-(BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2 ;
-(CKServerChangeToken *)metadataChangeToken;
-(CKServerChangeToken *)zoneHealthChangeToken;
-(CKServerChangeToken *)sideCarChangeToken;
@end

