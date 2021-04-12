/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier; 
+(id)providerItemForAvatarRecord:(id)arg1 imageProvider:(id)arg2 renderingQueue:(id)arg3 callbackQueue:(id)arg4 ;
+(id)providerItemForAvatarRecord:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)canCreateMemoji;
-(id<AVTAvatarStore>)avatarStore;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(id)initWithContact:(id)arg1 avatarStore:(id)arg2 ;
@end

