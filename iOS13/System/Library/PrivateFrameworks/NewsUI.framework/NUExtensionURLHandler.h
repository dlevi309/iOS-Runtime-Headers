/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUURLHandling.h>
#import <libobjc.A.dylib/SXURLHandling.h>

@class NSExtensionContext, NSString;

@interface NUExtensionURLHandler : NSObject <NUURLHandling, SXURLHandling> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)openURL:(id)arg1 ;
-(NSExtensionContext *)extensionContext;
-(id)initWithExtensionContext:(id)arg1 ;
-(void)openURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

