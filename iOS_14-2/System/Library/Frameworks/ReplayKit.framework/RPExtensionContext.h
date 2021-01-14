/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<RPExtensionContextDelegate>)delegate;
-(void)setDelegate:(id<RPExtensionContextDelegate>)arg1 ;
-(void)setEndpoint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

