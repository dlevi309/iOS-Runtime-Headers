/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

