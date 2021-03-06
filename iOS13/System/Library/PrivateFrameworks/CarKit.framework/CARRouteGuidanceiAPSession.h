/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_setupiAPNavigation;
-(void)updateNavigationGuidanceInfo;
-(void)setIapNavigation:(IAPNavigation *)arg1 ;
-(void)setNavigationAccessories:(NSMapTable *)arg1 ;
-(NSString *)currentNavigationOwnerIdentifier;
-(void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg1 ;
-(NSMapTable *)navigationAccessories;
-(IAPNavigation *)iapNavigation;
-(void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1 ;
-(void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1 ;
-(void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2 ;
-(void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2 ;
-(void)setCurrentNavigationOwnerIdentifier:(NSString *)arg1 ;
@end

