/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_INUIExtensionContextVending.h>

@class _INUIExtensionContextState, NSString;

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {

	_INUIExtensionContextState* _currentExtensionContextState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)setExtensionContextState:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_errorHandlingHostProxy;
-(CGSize)hostedViewMinimumAllowedSize;
-(CGSize)hostedViewMaximumAllowedSize;
-(CGSize)_bestAllowedSizeForAllowedSizesDictionary:(id)arg1 ;
-(id)interfaceParametersDescription;
-(void)_requestHandlingOfIntent:(id)arg1 ;
-(void)_willBeginEditing;
@end

