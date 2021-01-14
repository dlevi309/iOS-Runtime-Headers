/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/


@class NSString;

@interface HotspotFamilyMember : NSObject {

	int _shareOption;
	NSString* _altDSID;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * altDSID;                  //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) int shareOption;                     //@synthesize shareOption=_shareOption - In the implementation block
-(id)init;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setShareOption:(int)arg1 ;
-(id)initWithAltDSID:(id)arg1 displayName:(id)arg2 shareOption:(int)arg3 ;
-(int)shareOption;
@end

