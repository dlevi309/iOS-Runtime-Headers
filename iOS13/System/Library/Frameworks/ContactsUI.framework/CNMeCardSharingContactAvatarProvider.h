/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CNContact *)contact;
-(NSData *)imageData;
-(CGRect)cropRect;
-(id)initWithContact:(id)arg1 ;
-(NSData *)thumbnailImageData;
-(CNAvatarImageRenderer *)renderer;
-(void)generateAvatarImageOfSize:(CGSize)arg1 imageHandler:(/*^block*/id)arg2 ;
-(id)initWithContact:(id)arg1 renderer:(id)arg2 ;
@end

