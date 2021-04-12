/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNUIUserActionURLOpener.h>

@class NSExtensionContext, NSString;

@interface CNUIUserActionExtensionURLOpener : NSObject <CNUIUserActionURLOpener> {

	NSExtensionContext* _extensionContext;

}

@property (nonatomic,readonly) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSExtensionContext *)extensionContext;
-(id)initWithExtensionContext:(id)arg1 ;
-(id)openURL:(id)arg1 isSensitive:(BOOL)arg2 connectionEndpoint:(id)arg3 withScheduler:(id)arg4 ;
-(id)openURL:(id)arg1 isSensitive:(BOOL)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg1 withScheduler:(id)arg2 ;
@end

