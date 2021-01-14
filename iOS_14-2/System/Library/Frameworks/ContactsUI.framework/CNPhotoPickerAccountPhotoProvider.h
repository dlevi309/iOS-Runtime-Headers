/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNVisualIdentity;

@interface CNPhotoPickerAccountPhotoProvider : NSObject <CNPhotoPickerProvider> {

	BOOL _includeUnifiedContactImages;
	NSString* identifier;
	CNVisualIdentity* _visualIdentity;

}

@property (nonatomic,readonly) CNVisualIdentity * visualIdentity;              //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (assign,nonatomic) BOOL includeUnifiedContactImages;                 //@synthesize includeUnifiedContactImages=_includeUnifiedContactImages - In the implementation block
@property (nonatomic,retain) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)providerItemForVisualIdentity:(id)arg1 forSize:(CGSize)arg2 scale:(double)arg3 RTL:(BOOL)arg4 renderingQueue:(id)arg5 callbackQueue:(id)arg6 itemDelegate:(id)arg7 ;
-(id)initWithVisualIdentity:(id)arg1 includeUnifiedContactImages:(BOOL)arg2 ;
-(BOOL)includeUnifiedContactImages;
-(void)setIncludeUnifiedContactImages:(BOOL)arg1 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(CNVisualIdentity *)visualIdentity;
@end

