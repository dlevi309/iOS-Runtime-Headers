/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProvider.h>

@class NSString, CNVisualIdentity;

@interface CNPhotoPickerAddItemsProvider : NSObject <CNPhotoPickerProvider> {

	BOOL _allowsTakePhotoItem;
	BOOL _allowsPhotoFromLibraryItem;
	BOOL _allowsMonograms;
	BOOL _allowsEmoji;
	NSString* _identifier;
	CNVisualIdentity* _visualIdentity;

}

@property (nonatomic,readonly) CNVisualIdentity * visualIdentity;              //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (assign,nonatomic) BOOL allowsTakePhotoItem;                         //@synthesize allowsTakePhotoItem=_allowsTakePhotoItem - In the implementation block
@property (assign,nonatomic) BOOL allowsPhotoFromLibraryItem;                  //@synthesize allowsPhotoFromLibraryItem=_allowsPhotoFromLibraryItem - In the implementation block
@property (assign,nonatomic) BOOL allowsMonograms;                             //@synthesize allowsMonograms=_allowsMonograms - In the implementation block
@property (assign,nonatomic) BOOL allowsEmoji;                                 //@synthesize allowsEmoji=_allowsEmoji - In the implementation block
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithVisualIdentity:(id)arg1 allowsTakePhotoItem:(BOOL)arg2 allowsPhotoFromLibraryItem:(BOOL)arg3 allowsMonograms:(BOOL)arg4 allowsEmoji:(BOOL)arg5 ;
-(id)initWithVisualIdentity:(id)arg1 ;
-(id)loadItemsForSize:(CGSize)arg1 scale:(double)arg2 RTL:(BOOL)arg3 renderingQueue:(id)arg4 callbackQueue:(id)arg5 itemDelegate:(id)arg6 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(BOOL)allowsEmoji;
-(CNVisualIdentity *)visualIdentity;
-(id)addItemOfType:(unsigned long long)arg1 ;
-(id)symbolImageNameForAddItemType:(unsigned long long)arg1 ;
-(BOOL)allowsTakePhotoItem;
-(void)setAllowsTakePhotoItem:(BOOL)arg1 ;
-(BOOL)allowsPhotoFromLibraryItem;
-(void)setAllowsPhotoFromLibraryItem:(BOOL)arg1 ;
-(BOOL)allowsMonograms;
-(void)setAllowsMonograms:(BOOL)arg1 ;
-(void)setAllowsEmoji:(BOOL)arg1 ;
@end

