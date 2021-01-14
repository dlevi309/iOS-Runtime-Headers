/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSExtensionContext *)extensionContext;
-(void)openURL:(id)arg1 options:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

