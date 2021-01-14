/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@protocol AVTAvatarStore;
@class NSString;

@interface CNPhotoPickerAnimojiProvider : NSObject <CNPhotoPickerProvider> {

	NSString* identifier;
	id<AVTAvatarStore> _avatarStore;

}

@property (nonatomic,readonly) id<AVTAvatarStore> avatarStore;              //@synthesize avatarStore=_avatarStore - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)providerItemForAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 ;
+(id)providerItemForAvatarRecord:(id)arg1 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(id)initWithVisualIdentity:(id)arg1 avatarStore:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)canCreateMemoji;
-(id<AVTAvatarStore>)avatarStore;
@end

