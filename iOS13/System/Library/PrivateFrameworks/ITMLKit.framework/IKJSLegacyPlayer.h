/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/NSObject.h>
#import <libobjc.A.dylib/IKJSLegacyPlayer.h>

@protocol IKJSLegacyPlayer <JSExport>
@end

#import <libobjc.A.dylib/_IKJSLegacyPlayerProxy.h>
#import <libobjc.A.dylib/_IKJSLegacyPlayer.h>

@protocol IKJSPlayerAppBridge;
@class IKDOMElement, NSString;

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer> {

	id<IKJSPlayerAppBridge> _appBridge;

}

@property (assign,nonatomic,__weak) id<IKJSPlayerAppBridge> appBridge;                   //@synthesize appBridge=_appBridge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) IKDOMElement * currentAVMediaElement; 
-(void)setAppBridge:(id<IKJSPlayerAppBridge>)arg1 ;
-(id<IKJSPlayerAppBridge>)appBridge;
-(IKDOMElement *)currentAVMediaElement;
-(id)asPrivateIKJSLegacyPlayer;
@end

