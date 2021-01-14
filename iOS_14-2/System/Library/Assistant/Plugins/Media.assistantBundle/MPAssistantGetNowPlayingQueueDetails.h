/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <Media/Media-Structs.h>
#import <SAObjects/SANPGetNowPlayingQueueDetails.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface MPAssistantGetNowPlayingQueueDetails : SANPGetNowPlayingQueueDetails <AFServiceCommand> {

	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)getSAMPMediaItems:(SCD_Struct_MP1)arg1 origin:(void*)arg2 completion:(/*^block*/id)arg3 ;
@end

