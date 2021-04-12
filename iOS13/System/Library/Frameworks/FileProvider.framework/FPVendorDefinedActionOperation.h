/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)cancel;
-(void)actionMain;
-(id)initWithActionIdentifier:(id)arg1 providerDomainID:(id)arg2 itemIdentifiers:(id)arg3 ;
@end

