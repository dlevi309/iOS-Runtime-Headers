/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NFAssembly.h>

@protocol NUExtensionContextProvider;
@class NSString;

@interface NUExtensionAssembly : NSObject <NFAssembly> {

	id<NUExtensionContextProvider> _extensionContextProvider;

}

@property (nonatomic,__weak,readonly) id<NUExtensionContextProvider> extensionContextProvider;              //@synthesize extensionContextProvider=_extensionContextProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadInRegistry:(id)arg1 ;
-(id<NUExtensionContextProvider>)extensionContextProvider;
-(id)initWithExtensionContextProvider:(id)arg1 ;
@end

