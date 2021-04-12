/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/

#import <AppStoreKit/ASKLoadResourceOperation.h>

@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation {

	NSString* _contactId;
	CNAvatarImageRenderer* _monogrammer;

}

@property (nonatomic,retain) CNAvatarImageRenderer * monogrammer;              //@synthesize monogrammer=_monogrammer - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                      //@synthesize contactId=_contactId - In the implementation block
+(double)mainScreenScale;
-(NSString *)contactId;
-(id)makeFetchError;
-(id)initWithContactId:(id)arg1 ;
-(void)main;
-(CNAvatarImageRenderer *)monogrammer;
-(void)setMonogrammer:(CNAvatarImageRenderer *)arg1 ;
@end

