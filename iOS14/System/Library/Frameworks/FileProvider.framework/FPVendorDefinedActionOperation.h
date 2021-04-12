/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <FileProvider/FPActionOperation.h>

@class NSProgress, NSString, NSArray;

@interface FPVendorDefinedActionOperation : FPActionOperation {

	NSProgress* _remoteProgress;
	NSString* _actionIdentifier;
	NSArray* _itemIdentifiers;
	NSString* _domainIdentifier;

}
-(void)actionMain;
-(id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3 ;
-(void)cancel;
@end

