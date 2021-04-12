/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSURL, _WKUserInitiatedAction, WKNavigation, WKFrameInfo, NSURLRequest, NSString;

@interface WKNavigationAction : NSObject <WKObject> {

	ObjectStorage<API::NavigationAction> _navigationAction;

}

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(NSString *)description;
-(NSURL *)_originalURL;
-(NSURLRequest *)request;
-(WKFrameInfo *)sourceFrame;
-(long long)modifierFlags;
-(WKFrameInfo *)targetFrame;
-(Object*)_apiObject;
-(WKNavigation *)_mainFrameNavigation;
-(long long)navigationType;
-(long long)_syntheticClickType;
-(CGPoint)_clickLocationInRootViewCoordinates;
-(BOOL)_shouldOpenExternalSchemes;
-(BOOL)_isUserInitiated;
-(BOOL)_canHandleRequest;
-(BOOL)_shouldOpenAppLinks;
-(BOOL)_shouldPerformDownload;
-(BOOL)_shouldOpenExternalURLs;
-(_WKUserInitiatedAction *)_userInitiatedAction;
-(BOOL)_isRedirect;
@end

