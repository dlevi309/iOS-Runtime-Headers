/*
* Generated on Thursday, January 14, 2021 at 2:26:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
*/

#import <MediaMiningKit/CLSSocialService.h>

@class CLSSocialServiceContacts;

@interface CLSSocialServiceCoreDuet : CLSSocialService {

	CLSSocialServiceContacts* _contactSocialService;

}

@property (retain) CLSSocialServiceContacts * contactSocialService;              //@synthesize contactSocialService=_contactSocialService - In the implementation block
-(id)init;
-(id)coreDuetPersonSuggestionsOnDate:(id)arg1 ;
-(CLSSocialServiceContacts *)contactSocialService;
-(void)setContactSocialService:(CLSSocialServiceContacts *)arg1 ;
@end

