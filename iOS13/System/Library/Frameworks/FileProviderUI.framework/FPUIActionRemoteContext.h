/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<FPUIActionRemoteContextDelegate>)delegate;
-(void)setDelegate:(id<FPUIActionRemoteContextDelegate>)arg1 ;
-(void)_completeRequestWithUserInfo:(id)arg1 error:(id)arg2 ;
-(void)_didEncounterError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openExtensionURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

