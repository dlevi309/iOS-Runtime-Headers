/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderGroupDelegate.h>

@protocol CNPhotoPickerProviderGroupDelegate, AVTAvatarStore;
@class CNMutableContact, NSIndexPath, CNContactViewCache, CNPhotoPickerVariantsManager, NSArray, NSString;

@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate> {

	BOOL _allowsPhotoLibraryAccess;
	CNMutableContact* _contact;
	NSIndexPath* _activePhotoIndexPath;
	CNContactViewCache* _contactViewCache;
	id<CNPhotoPickerProviderGroupDelegate> _delegate;
	CNPhotoPickerVariantsManager* _variantsManager;
	id<AVTAvatarStore> _avatarStore;
	NSArray* _providerGroups;

}

@property (nonatomic,readonly) NSArray * providerGroups;                                          //@synthesize providerGroups=_providerGroups - In the implementation block
@property (assign,nonatomic) BOOL allowsPhotoLibraryAccess;                                       //@synthesize allowsPhotoLibraryAccess=_allowsPhotoLibraryAccess - In the implementation block
@property (nonatomic,retain) CNMutableContact * contact;                                          //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) NSIndexPath * activePhotoIndexPath;                                  //@synthesize activePhotoIndexPath=_activePhotoIndexPath - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;                             //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerProviderGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerVariantsManager * variantsManager;                    //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> avatarStore;                                    //@synthesize avatarStore=_avatarStore - In the implementation block
@property (assign,nonatomic) unsigned long long itemsPerRow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)avatarStore;
-(id<CNPhotoPickerProviderGroupDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerProviderGroupDelegate>)arg1 ;
-(id)removeItem:(id)arg1 ;
-(CNMutableContact *)contact;
-(void)setContact:(CNMutableContact *)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(void)setItemsPerRow:(unsigned long long)arg1 ;
-(unsigned long long)itemsPerRow;
-(id)titleForSection:(long long)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(void)photoPickerProviderGroupDidUpdate:(id)arg1 ;
-(void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2 ;
-(id)initWithContact:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3 ;
-(id)initWithContact:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4 ;
-(void)loadProviderGroupsItemsForSize:(CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(BOOL)arg4 ;
-(id)actionTitleForSection:(long long)arg1 ;
-(BOOL)isItemAtIndexPathAddItem:(id)arg1 ;
-(id)providerGroupAtIndexPath:(id)arg1 ;
-(id)providerItemAtIndexPath:(id)arg1 ;
-(id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2 ;
-(id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2 ;
-(NSIndexPath *)activePhotoIndexPath;
-(void)setActivePhotoIndexPath:(NSIndexPath *)arg1 ;
-(id<AVTAvatarStore>)avatarStore;
-(NSArray *)providerGroups;
-(BOOL)allowsPhotoLibraryAccess;
-(void)setAllowsPhotoLibraryAccess:(BOOL)arg1 ;
@end

