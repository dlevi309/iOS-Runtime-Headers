/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNAvatarImageRenderingScope;
#import <ContactsUI/ContactsUI-Structs.h>
@class CNAvatarImageRenderer;

@interface CNVisualIdentityContactAvatarProvider : NSObject {

	CNAvatarImageRenderer* _avatarImageRenderer;
	id<CNAvatarImageRenderingScope> _renderingScope;

}

@property (nonatomic,retain) CNAvatarImageRenderer * avatarImageRenderer;                 //@synthesize avatarImageRenderer=_avatarImageRenderer - In the implementation block
@property (nonatomic,retain) id<CNAvatarImageRenderingScope> renderingScope;              //@synthesize renderingScope=_renderingScope - In the implementation block
+(id)descriptorForRequiredKeys;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(void)setAvatarImageRenderer:(CNAvatarImageRenderer *)arg1 ;
-(id<CNAvatarImageRenderingScope>)renderingScope;
-(id)avatarImageForContact:(id)arg1 withSize:(CGSize)arg2 includePlaceholder:(BOOL)arg3 imageHandler:(/*^block*/id)arg4 ;
-(CNAvatarImageRenderer *)avatarImageRenderer;
-(void)setRenderingScope:(id<CNAvatarImageRenderingScope>)arg1 ;
@end

