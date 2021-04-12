/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <AppleMediaServices/AMSLookup.h>

@class NSString;

@interface LPiTunesMediaLookupTask : AMSLookup {

	NSString* _identifier;
	NSString* _storefrontCountryCode;

}
-(void)start:(/*^block*/id)arg1 ;
-(id)sharedBag;
-(id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2 ;
-(id)callerID;
-(id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2 ;
@end

