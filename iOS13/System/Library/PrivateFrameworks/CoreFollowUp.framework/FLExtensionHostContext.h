/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/FLExtensionHostContextInterface.h>

@protocol FLExtensionHostContextInterface;
@class NSString;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface> {

	id<FLExtensionHostContextInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<FLExtensionHostContextInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<FLExtensionHostContextInterface>)delegate;
-(void)setDelegate:(id<FLExtensionHostContextInterface>)arg1 ;
-(void)extensionDidFinish;
-(id)remoteContextWithErrorHandler:(/*^block*/id)arg1 ;
@end

