/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, _WKUserInitiatedAction, WKNavigation, WKFrameInfo, NSURLRequest, NSString;

@interface WKNavigationAction : NSObject <WKObject> {

	ObjectStorage<API::NavigationAction> _navigationAction;

}

@property (nonatomic,readonly) BOOL _sf_shouldAskAboutInsecureFormSubmission; 
@property (nonatomic,readonly) BOOL _sf_shouldPerformDownload; 
@property (assign,setter=_sf_setAllowsExternalRedirectWithoutPrompting:,nonatomic) BOOL _sf_allowsExternalRedirectWithoutPrompting; 
@property (nonatomic,readonly) NSURL * _originalURL; 
@property (getter=_isUserInitiated,nonatomic,readonly) BOOL _userInitiated; 
@property (nonatomic,readonly) BOOL _canHandleRequest; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalSchemes; 
@property (nonatomic,readonly) BOOL _shouldOpenAppLinks; 
@property (nonatomic,readonly) BOOL _shouldPerformDownload; 
@property (nonatomic,readonly) BOOL _shouldOpenExternalURLs; 
@property (nonatomic,readonly) _WKUserInitiatedAction * _userInitiatedAction; 
@property (nonatomic,readonly) long long _syntheticClickType; 
@property (nonatomic,readonly) CGPoint _clickLocationInRootViewCoordinates; 
@property (nonatomic,readonly) long long modifierFlags; 
@property (nonatomic,readonly) BOOL _isRedirect; 
@property (nonatomic,readonly) WKNavigation * _mainFrameNavigation; 
@property (nonatomic,copy,readonly) WKFrameInfo * sourceFrame; 
@property (nonatomic,copy,readonly) WKFrameInfo * targetFrame; 
@property (nonatomic,readonly) long long navigationType; 
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sf_setAllowsExternalRedirectWithoutPrompting:(BOOL)arg1 ;
-(BOOL)_sf_shouldAskAboutInsecureFormSubmission;
-(BOOL)_sf_shouldPerformDownload;
-(BOOL)_sf_allowsExternalRedirectWithoutPrompting;
-(BOOL)safari_isEligibleForContinuedTranslationWithPolicy:(long long)arg1 ;
-(long long)navigationType;
-(NSURL *)_originalURL;
-(long long)modifierFlags;
-(NSURLRequest *)request;
-(NSString *)description;
-(WKFrameInfo *)sourceFrame;
-(Object*)_apiObject;
-(WKNavigation *)_mainFrameNavigation;
-(WKFrameInfo *)targetFrame;
-(void)dealloc;
-(long long)_syntheticClickType;
-(BOOL)_isUserInitiated;
-(CGPoint)_clickLocationInRootViewCoordinates;
-(BOOL)_shouldOpenExternalSchemes;
-(BOOL)_canHandleRequest;
-(BOOL)_shouldOpenAppLinks;
-(BOOL)_shouldPerformDownload;
-(BOOL)_isRedirect;
-(BOOL)_shouldOpenExternalURLs;
-(_WKUserInitiatedAction *)_userInitiatedAction;
@end

