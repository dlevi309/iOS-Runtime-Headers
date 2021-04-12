/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FPUIActionRemoteContextProtocol.h>

@protocol FPUIActionRemoteContextDelegate;
@class NSString;

@interface FPUIActionRemoteContext : NSExtensionContext <FPUIActionRemoteContextProtocol> {

	id<FPUIActionRemoteContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FPUIActionRemoteContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<FPUIActionRemoteContextDelegate>)delegate;
-(void)setDelegate:(id<FPUIActionRemoteContextDelegate>)arg1 ;
-(void)_completeRequestWithUserInfo:(id)arg1 error:(id)arg2 ;
-(void)_didEncounterError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openExtensionURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

