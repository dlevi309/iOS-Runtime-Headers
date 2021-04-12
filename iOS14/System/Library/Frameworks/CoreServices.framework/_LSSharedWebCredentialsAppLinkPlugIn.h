/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSAppLinkPlugIn.h>

@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn
-(optional<LSBinding>*)bindingWithContext:(LSContext*)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3 ;
-(void)enumerateBindingsWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 block:(/*^block*/id)arg3 ;
-(id)appLinksWithContext:(LSContext*)arg1 forSWCResults:(id)arg2 ;
-(id)callingBundleIdentifier;
-(id)appLinksWithContext:(LSContext*)arg1 error:(id*)arg2 ;
-(id)init;
@end

