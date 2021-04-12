/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_performWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_addMediaItemsToLibrarySupported;
-(void)_performAddMediaItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestCompanionToAddMediaItemsForOrigin:(void*)arg1 withCompletion:(/*^block*/id)arg2 ;
-(long long)_extractAtomID;
@end

