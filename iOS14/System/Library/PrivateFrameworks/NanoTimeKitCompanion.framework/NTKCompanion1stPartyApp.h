/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIconName:(NSString *)arg1 ;
-(NSString *)iconName;
-(id)initWithAppInfo:(NTKCompanion1stPartyInfo)arg1 ;
-(unsigned long long)complicationType;
-(void)setComplicationType:(unsigned long long)arg1 ;
-(id)complication;
@end

