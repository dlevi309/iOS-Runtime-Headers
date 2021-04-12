/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class UIImage, NSString;

@interface NTKCompanion1stPartyApp : NTKCompanionApp {

	UIImage* _icon;
	unsigned long long _complicationType;
	NSString* _iconName;

}

@property (assign,nonatomic) unsigned long long complicationType;              //@synthesize complicationType=_complicationType - In the implementation block
@property (nonatomic,copy) NSString * iconName;                                //@synthesize iconName=_iconName - In the implementation block
+(id)_allApps;
+(id)companionAppWithAppInfo:(NTKCompanion1stPartyInfo)arg1 ;
+(id)appForBundleIdentifier:(id)arg1 ;
+(id)allAppsForDevice:(id)arg1 ;
+(BOOL)complicationType:(unsigned long long)arg1 mapsToRemovedSystemAppOnDevice:(id)arg2 ;
-(id)icon;
-(void)setIcon:(id)arg1 ;
-(NSString *)iconName;
-(void)setIconName:(NSString *)arg1 ;
-(id)complication;
-(unsigned long long)complicationType;
-(id)initWithAppInfo:(NTKCompanion1stPartyInfo)arg1 ;
-(void)setComplicationType:(unsigned long long)arg1 ;
@end

