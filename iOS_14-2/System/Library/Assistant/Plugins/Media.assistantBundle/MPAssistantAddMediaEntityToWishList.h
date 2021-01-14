/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

