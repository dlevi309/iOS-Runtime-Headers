/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BLTGizmoLegacyMap : NSObject {

	NSMutableDictionary* _gizmoBulletinKeyMap;
	NSMutableDictionary* _phoneBulletinKeyMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(id)phonePublisherBulletinIDForGizmoKey:(id)arg1 ;
-(id)phoneSectionIDForGizmoKey:(id)arg1 ;
-(void)_addMapKey:(id)arg1 value:(id)arg2 bulletinKey:(id)arg3 version:(unsigned long long)arg4 versionDictionary:(id)arg5 ;
-(void)mapNotification:(id)arg1 sectionID:(id)arg2 ;
-(void)unmapNotification:(id)arg1 sectionID:(id)arg2 ;
-(id)categoryIDForBulletinKey:(id)arg1 ;
-(id)sectionSubtypeForBulletinKey:(id)arg1 ;
-(id)gizmoPublisherBulletinIDForPhoneKey:(id)arg1 ;
-(id)gizmoSectionInfoForPhoneKey:(id)arg1 ;
@end

