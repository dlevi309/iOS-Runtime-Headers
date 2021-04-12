/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary, NSString, BBSectionIcon;

@interface BLTSectionInfoListItem : NSObject {

	NSDictionary* _overrides;
	NSString* _universalSectionID;
	NSString* _overriddenFactorySectionID;
	NSString* _phoneSectionID;
	NSString* _overriddenDisplayName;
	BBSectionIcon* _overriddenIcon;

}

@property (retain) NSDictionary * overrides;                         //@synthesize overrides=_overrides - In the implementation block
@property (copy) NSString * universalSectionID;                      //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (copy) NSString * overriddenFactorySectionID;              //@synthesize overriddenFactorySectionID=_overriddenFactorySectionID - In the implementation block
@property (copy) NSString * phoneSectionID;                          //@synthesize phoneSectionID=_phoneSectionID - In the implementation block
@property (copy) NSString * overriddenDisplayName;                   //@synthesize overriddenDisplayName=_overriddenDisplayName - In the implementation block
@property (copy) BBSectionIcon * overriddenIcon;                     //@synthesize overriddenIcon=_overriddenIcon - In the implementation block
-(void)setOverrides:(NSDictionary *)arg1 ;
-(NSString *)universalSectionID;
-(NSDictionary *)overrides;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(NSString *)phoneSectionID;
-(void)setPhoneSectionID:(NSString *)arg1 ;
-(NSString *)overriddenFactorySectionID;
-(void)setOverriddenFactorySectionID:(NSString *)arg1 ;
-(NSString *)overriddenDisplayName;
-(void)setOverriddenDisplayName:(NSString *)arg1 ;
-(BBSectionIcon *)overriddenIcon;
-(void)setOverriddenIcon:(BBSectionIcon *)arg1 ;
@end

