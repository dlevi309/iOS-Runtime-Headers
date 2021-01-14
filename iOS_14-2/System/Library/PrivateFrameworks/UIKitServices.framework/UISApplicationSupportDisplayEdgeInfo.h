/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UISApplicationSupportDisplayEdgeInsetsWrapper, NSNumber, NSString;

@interface UISApplicationSupportDisplayEdgeInfo : NSObject <BSXPCCoding, NSCopying> {

	SCD_Union_UI4 _infoFlags;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _peripheryInsets;
	NSNumber* _systemMinimumMargin;
	NSNumber* _homeAffordanceOverlayAllowance;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortrait;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeLeft;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsPortraitUpsideDown;
	UISApplicationSupportDisplayEdgeInsetsWrapper* _safeAreaInsetsLandscapeRight;

}

@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * peripheryInsets;                               //@synthesize peripheryInsets=_peripheryInsets - In the implementation block
@property (nonatomic,retain) NSNumber * systemMinimumMargin;                                                                //@synthesize systemMinimumMargin=_systemMinimumMargin - In the implementation block
@property (nonatomic,retain) NSNumber * homeAffordanceOverlayAllowance;                                                     //@synthesize homeAffordanceOverlayAllowance=_homeAffordanceOverlayAllowance - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortrait;                        //@synthesize safeAreaInsetsPortrait=_safeAreaInsetsPortrait - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeLeft;                   //@synthesize safeAreaInsetsLandscapeLeft=_safeAreaInsetsLandscapeLeft - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsPortraitUpsideDown;              //@synthesize safeAreaInsetsPortraitUpsideDown=_safeAreaInsetsPortraitUpsideDown - In the implementation block
@property (nonatomic,retain) UISApplicationSupportDisplayEdgeInsetsWrapper * safeAreaInsetsLandscapeRight;                  //@synthesize safeAreaInsetsLandscapeRight=_safeAreaInsetsLandscapeRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayEdgeInfoForceInsets:(BOOL)arg1 ;
+(id)defaultDisplayEdgeInfo;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortraitUpsideDown;
-(void)setSafeAreaInsetsLandscapeLeft:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)_performIvarUpdateIfAllowed:(/*^block*/id)arg1 ;
-(void)setSafeAreaInsetsPortrait:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsPortrait;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)peripheryInsets;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(NSNumber *)homeAffordanceOverlayAllowance;
-(void)setPeripheryInsets:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeLeft;
-(void)setHomeAffordanceOverlayAllowance:(NSNumber *)arg1 ;
-(void)setSystemMinimumMargin:(NSNumber *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSNumber *)systemMinimumMargin;
-(void)setSafeAreaInsetsPortraitUpsideDown:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(UISApplicationSupportDisplayEdgeInsetsWrapper *)safeAreaInsetsLandscapeRight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSafeAreaInsetsLandscapeRight:(UISApplicationSupportDisplayEdgeInsetsWrapper *)arg1 ;
-(void)_copyFromOtherInfo:(id)arg1 ;
@end

