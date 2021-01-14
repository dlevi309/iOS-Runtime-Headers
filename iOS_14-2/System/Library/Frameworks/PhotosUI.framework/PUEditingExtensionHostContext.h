/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/PUEditingExtensionHost.h>

@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost> {

	/*^block*/id _contentEditingOutputCommitHandler;

}

@property (copy) id contentEditingOutputCommitHandler;              //@synthesize contentEditingOutputCommitHandler=_contentEditingOutputCommitHandler - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setContentEditingOutputCommitHandler:(id)arg1 ;
-(void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)contentEditingOutputCommitHandler;
@end

