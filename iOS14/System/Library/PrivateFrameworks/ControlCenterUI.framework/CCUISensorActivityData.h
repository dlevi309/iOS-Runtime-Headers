/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface CCUISensorActivityData : NSObject <NSCopying> {

	BOOL _usedRecently;
	BOOL _launchToSettings;
	unsigned long long _sensorType;
	NSString* _displayName;
	NSString* _bundleIdentifier;
	NSString* _attributionGroup;
	UIColor* _sensorIndicatorColor;

}

@property (assign,nonatomic) unsigned long long sensorType;               //@synthesize sensorType=_sensorType - In the implementation block
@property (nonatomic,copy) NSString * displayName;                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                   //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * attributionGroup;                   //@synthesize attributionGroup=_attributionGroup - In the implementation block
@property (nonatomic,retain) UIColor * sensorIndicatorColor;              //@synthesize sensorIndicatorColor=_sensorIndicatorColor - In the implementation block
@property (assign,nonatomic) BOOL usedRecently;                           //@synthesize usedRecently=_usedRecently - In the implementation block
@property (assign,nonatomic) BOOL launchToSettings;                       //@synthesize launchToSettings=_launchToSettings - In the implementation block
-(void)setAttributionGroup:(NSString *)arg1 ;
-(BOOL)usedRecently;
-(NSString *)bundleIdentifier;
-(id)debugDescription;
-(void)setLaunchToSettings:(BOOL)arg1 ;
-(void)setSensorIndicatorColor:(UIColor *)arg1 ;
-(void)setUsedRecently:(BOOL)arg1 ;
-(unsigned long long)sensorType;
-(void)setSensorType:(unsigned long long)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(UIColor *)sensorIndicatorColor;
-(BOOL)launchToSettings;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)attributionGroup;
@end

