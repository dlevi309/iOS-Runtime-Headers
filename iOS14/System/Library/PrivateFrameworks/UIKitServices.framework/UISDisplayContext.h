/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKitServices/_UIDisplayInfoProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBSDisplayConfiguration, UISApplicationSupportDisplayEdgeInfo, NSString;

@interface UISDisplayContext : NSObject <_UIDisplayInfoProviding, BSXPCCoding, NSCopying, NSMutableCopying> {

	FBSDisplayConfiguration* _displayConfiguration;
	UISApplicationSupportDisplayEdgeInfo* _displayEdgeInfo;
	unsigned long long _artworkSubtype;
	unsigned long long _userInterfaceStyle;

}

@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration; 
@property (nonatomic,readonly) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;                      //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo;              //@synthesize displayEdgeInfo=_displayEdgeInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long artworkSubtype;                                   //@synthesize artworkSubtype=_artworkSubtype - In the implementation block
@property (nonatomic,readonly) unsigned long long userInterfaceStyle;                               //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
+(id)defaultContext;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(UIEdgeInsets)peripheryInsets;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(double)systemMinimumMargin;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(unsigned long long)userInterfaceStyle;
-(FBSDisplayConfiguration *)displayConfiguration;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2 ;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(UISApplicationSupportDisplayEdgeInfo *)displayEdgeInfo;
-(unsigned long long)hash;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)_initWithDisplayContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)artworkSubtype;
-(BOOL)isEqual:(id)arg1 ;
@end

