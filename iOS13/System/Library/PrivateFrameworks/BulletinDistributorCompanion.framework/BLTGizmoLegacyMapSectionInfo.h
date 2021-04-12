/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary, BBSectionIcon, NSString;

@interface BLTGizmoLegacyMapSectionInfo : NSObject {

	NSDictionary* _notificationMap;
	BBSectionIcon* _icon;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * mappedSectionID; 
@property (nonatomic,copy,readonly) NSString * mappedParentSectionID; 
@property (nonatomic,retain) BBSectionIcon * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(id)initWithNotificationMap:(id)arg1 ;
-(NSString *)mappedSectionID;
-(NSString *)mappedParentSectionID;
@end

