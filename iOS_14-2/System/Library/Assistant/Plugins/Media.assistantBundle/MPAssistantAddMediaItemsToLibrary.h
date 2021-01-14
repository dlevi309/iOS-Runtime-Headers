/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPAddMediaItemsToLibrary.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString, ICUserIdentity, MPCloudController;

@interface MPAssistantAddMediaItemsToLibrary : SAMPAddMediaItemsToLibrary <AFServiceCommand> {

	NSString* _requestAceHash;
	ICUserIdentity* _userIdentity;
	MPCloudController* _cloudController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_addMediaItemsToLibrarySupported;
-(void)_performAddMediaItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestCompanionToAddMediaItemsForOrigin:(void*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_extractAtomID;
@end

