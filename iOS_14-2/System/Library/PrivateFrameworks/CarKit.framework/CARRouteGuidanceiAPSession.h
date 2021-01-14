/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/IAPNavigationDelegate.h>

@class NSString, IAPNavigation, NSMapTable;

@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate> {

	NSString* _currentNavigationOwnerIdentifier;
	IAPNavigation* _iapNavigation;
	NSMapTable* _navigationAccessories;

}

@property (nonatomic,retain) IAPNavigation * iapNavigation;                            //@synthesize iapNavigation=_iapNavigation - In the implementation block
@property (nonatomic,retain) NSMapTable * navigationAccessories;                       //@synthesize navigationAccessories=_navigationAccessories - In the implementation block
@property (nonatomic,retain) NSString * currentNavigationOwnerIdentifier;              //@synthesize currentNavigationOwnerIdentifier=_currentNavigationOwnerIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localizedNameForIdentifier:(id)arg1 ;
-(id)init;
-(void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2 ;
-(void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2 ;
-(void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1 ;
-(NSMapTable *)navigationAccessories;
-(void)_setupiAPNavigation;
-(void)setIapNavigation:(IAPNavigation *)arg1 ;
-(void)setCurrentNavigationOwnerIdentifier:(NSString *)arg1 ;
-(NSString *)currentNavigationOwnerIdentifier;
-(IAPNavigation *)iapNavigation;
-(void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg1 ;
-(void)updateNavigationGuidanceInfo;
-(void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1 ;
-(void)setNavigationAccessories:(NSMapTable *)arg1 ;
@end

