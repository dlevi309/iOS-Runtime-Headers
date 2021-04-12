/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBSDisplayConfiguration * displayConfiguration; 
@property (assign,nonatomic) unsigned long long artworkSubtype; 
@property (nonatomic,readonly) UIEdgeInsets peripheryInsets; 
@property (nonatomic,readonly) double systemMinimumMargin; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortrait; 
@property (nonatomic,readonly) double homeAffordanceOverlayAllowance; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeLeft; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsPortraitUpsideDown; 
@property (nonatomic,readonly) UIEdgeInsets safeAreaInsetsLandscapeRight; 
@property (nonatomic,readonly) FBSDisplayConfiguration * displayConfiguration;                      //@synthesize displayConfiguration=_displayConfiguration - In the implementation block
@property (nonatomic,readonly) UISApplicationSupportDisplayEdgeInfo * displayEdgeInfo;              //@synthesize displayEdgeInfo=_displayEdgeInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long artworkSubtype;                                   //@synthesize artworkSubtype=_artworkSubtype - In the implementation block
@property (nonatomic,readonly) unsigned long long userInterfaceStyle;                               //@synthesize userInterfaceStyle=_userInterfaceStyle - In the implementation block
+(id)defaultContext;
-(UIEdgeInsets)safeAreaInsetsPortrait;
-(double)homeAffordanceOverlayAllowance;
-(UIEdgeInsets)peripheryInsets;
-(UIEdgeInsets)safeAreaInsetsLandscapeLeft;
-(UIEdgeInsets)safeAreaInsetsLandscapeRight;
-(UIEdgeInsets)safeAreaInsetsPortraitUpsideDown;
-(double)systemMinimumMargin;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)userInterfaceStyle;
-(FBSDisplayConfiguration *)displayConfiguration;
-(UISApplicationSupportDisplayEdgeInfo *)displayEdgeInfo;
-(unsigned long long)artworkSubtype;
-(id)initWithDisplayConfiguration:(id)arg1 ;
-(id)initWithDisplayConfiguration:(id)arg1 displayEdgeInfo:(id)arg2 ;
-(id)_initWithDisplayContext:(id)arg1 ;
@end

