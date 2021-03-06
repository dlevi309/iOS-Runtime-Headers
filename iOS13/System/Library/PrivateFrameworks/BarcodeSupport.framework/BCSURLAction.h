/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/

#import <BarcodeSupport/BCSAction.h>

@class NSArray, LSApplicationProxy, NSURL, CoreTelephonyClient, CTCellularPlanManagerCameraScanAction;

@interface BCSURLAction : BCSAction {

	NSArray* _appLinks;
	LSApplicationProxy* _applicationProxy;
	BOOL _deviceDataIsUnavailable;
	NSURL* _appStoreSearchURLForUnsupportedScheme;
	CoreTelephonyClient* _coreTelephonyClient;
	CTCellularPlanManagerCameraScanAction* _cellularPlanAction;
	BOOL _hasPreferredAppLink;

}

@property (nonatomic,readonly) LSApplicationProxy * targetApplication; 
@property (nonatomic,readonly) BOOL mustOpenAppLinkInApp; 
@property (nonatomic,readonly) unsigned long long appLinkCount; 
@property (nonatomic,readonly) BOOL hasPreferredAppLink;                            //@synthesize hasPreferredAppLink=_hasPreferredAppLink - In the implementation block
-(id)url;
-(void)performAction;
-(id)appLinks;
-(void)performDefaultAction;
-(LSApplicationProxy *)targetApplication;
-(id)urlThatCanBeOpened;
-(id)actionPickerItems;
-(id)localizedDefaultActionDescription;
-(id)defaultActionTargetApplicationBundleIdentifier;
-(id)initWithData:(id)arg1 codePayload:(id)arg2 ;
-(void)determineActionabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)debugDescriptionExtraInfoDictionary;
-(id)localizedDefaultActionTitle;
-(unsigned long long)appLinkCount;
-(BOOL)mustOpenAppLinkInApp;
-(void)performDefaultActionWithFBOptions:(id)arg1 ;
-(BOOL)hasPreferredAppLink;
-(BOOL)_hasCellularPlanAction;
-(id)_actionDescriptionForURL:(id)arg1 application:(id)arg2 shouldShowHostNameForSafariURL:(BOOL)arg3 ;
-(id)_actionDescriptionWithoutTargetApplicationForURL:(id)arg1 ;
-(BOOL)_tryDetermineActionabilityForSpecialCodesFromQRScannerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_resolveTargetApplicationForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isCodeFromQRScanner;
-(BOOL)_shouldOpenInAppForAppLink:(id)arg1 ;
-(BOOL)_shouldBlockHandlingURL:(id)arg1 ;
@end

