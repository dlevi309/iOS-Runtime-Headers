/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/RPExtensionVendorProtocol.h>

@protocol RPExtensionContextDelegate;
@class NSString;

@interface RPExtensionContext : NSExtensionContext <RPExtensionVendorProtocol> {

	id<RPExtensionContextDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RPExtensionContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<RPExtensionContextDelegate>)delegate;
-(void)setDelegate:(id<RPExtensionContextDelegate>)arg1 ;
-(void)setEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

