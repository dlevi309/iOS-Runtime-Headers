/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSAppLinkPlugIn.h>

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
-(id)init;
-(id)callingBundleIdentifier;
-(optional<LSBinding>*)bindingWithContext:(LSContext*)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3 ;
-(void)enumerateBindingsWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appLinksWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 ;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
@end

