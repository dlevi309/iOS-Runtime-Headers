/*
* Generated on Monday, March 1, 2021 at 2:35:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
*/

#import <SAObjects/SAMPAddMediaEntityToWishList.h>
#import <libobjc.A.dylib/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaEntityToWishList : SAMPAddMediaEntityToWishList <AFServiceCommand> {

	NSString* _requestAceHash;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)_addTrackToWishListWithStoreID:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addRadioTrackToWishListWithStoreID:(unsigned long long)arg1 stationHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCurrentRadioTrackInfoWithCompletion:(/*^block*/id)arg1 ;
@end

