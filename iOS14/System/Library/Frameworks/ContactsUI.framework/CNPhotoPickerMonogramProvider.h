/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNVisualIdentity;

@interface CNPhotoPickerMonogramProvider : NSObject <CNPhotoPickerProvider> {

	NSString* _identifier;
	CNVisualIdentity* _visualIdentity;

}

@property (nonatomic,readonly) CNVisualIdentity * visualIdentity;              //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monogramProviderItemForVisualIdentity:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 isVariantOptionItem:(BOOL)arg5 backgroundColor:(id)arg6 ;
+(id)generateMonogramItemForVisualIdentity:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 isVariantOptionItem:(BOOL)arg5 backgroundColor:(id)arg6 ;
+(id)providerItemForVisualIdentity:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 backgroundColor:(id)arg5 ;
+(id)providerItemForVisualIdentity:(id)arg1 size:(CGSize)arg2 RTL:(BOOL)arg3 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(CNVisualIdentity *)visualIdentity;
@end

