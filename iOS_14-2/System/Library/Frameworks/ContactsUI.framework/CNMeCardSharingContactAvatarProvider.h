/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarProvider.h>
#import <libobjc.A.dylib/CNMeCardSharingAvatarImageDataProvider.h>

@class NSData, CNContact, CNAvatarImageRenderer, NSString;

@interface CNMeCardSharingContactAvatarProvider : NSObject <CNMeCardSharingAvatarProvider, CNMeCardSharingAvatarImageDataProvider> {

	CNContact* _contact;
	CNAvatarImageRenderer* _renderer;

}

@property (nonatomic,readonly) CNAvatarImageRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                           //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * imageData; 
@property (nonatomic,readonly) CGRect cropRect; 
@property (nonatomic,readonly) NSData * thumbnailImageData; 
-(CGRect)cropRect;
-(CNContact *)contact;
-(CNAvatarImageRenderer *)renderer;
-(id)initWithContact:(id)arg1 renderer:(id)arg2 ;
-(void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(/*^block*/id)arg2 ;
-(NSData *)imageData;
-(id)initWithContact:(id)arg1 ;
-(NSData *)thumbnailImageData;
@end

