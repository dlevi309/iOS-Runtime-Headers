/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/CSExternalAppearanceProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalPresentationProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>

@class NSString, NSSet, _UILegibilitySettings, UIColor, NSArray;

@interface SBDashBoardViewExternalControllerBase : CSCoverSheetViewControllerBase <CSExternalAppearanceProviding, CSExternalBehaviorProviding, CSExternalPresentationProviding, CSExternalEventHandling> {

	BOOL _externalToDashBoard;

}

@property (getter=isExternalToDashBoard,nonatomic,readonly) BOOL externalToDashBoard;                 //@synthesize externalToDashBoard=_externalToDashBoard - In the implementation block
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)isExternalToDashBoard;
-(void)_registerAsExternalProviderIfNeeded;
-(void)conformsToCSExternalBehaviorProviding;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_unregisterAsExternalProvider;
-(id)_presenter;
@end

