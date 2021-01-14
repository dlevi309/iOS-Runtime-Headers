/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class NSString, CKContainer;

@interface LPiCloudSharingMetadataProviderSpecialization : LPMetadataProviderSpecialization {

	NSString* _applicationFromURL;
	NSString* _titleFromURL;
	CKContainer* _baseContainer;
	CKContainer* _applicationContainer;
	BOOL _canceled;

}
+(id)specializedMetadataProviderForURLWithContext:(id)arg1 ;
+(id)extractApplicationFromURL:(id)arg1 ;
+(id)extractTitleFromURL:(id)arg1 ;
+(id)applicationNameMap;
+(unsigned long long)specialization;
-(void)fail;
-(void)start;
-(id)initWithContext:(id)arg1 applicationFromURL:(id)arg2 titleFromURL:(id)arg3 ;
-(BOOL)canUseCloudKit;
-(void)completeUsingApplication:(id)arg1 title:(id)arg2 ;
-(id)iconFromShare:(id)arg1 ;
-(void)completeWithShareMetadata:(id)arg1 bundleIDs:(id)arg2 ;
-(id)applicationFromBundleIdentifiers:(id)arg1 containerIdentifier:(id)arg2 ;
-(void)cancel;
@end

