/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
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

