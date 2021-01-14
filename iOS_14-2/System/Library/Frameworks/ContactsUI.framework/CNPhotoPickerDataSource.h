/*
* Generated on Thursday, January 14, 2021 at 2:20:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderGroupDelegate.h>

@protocol CNPhotoPickerProviderGroupDelegate, AVTAvatarStore;
@class CNVisualIdentity, NSIndexPath, CNContactViewCache, CNPhotoPickerVariantsManager, NSArray, NSMutableArray, NSString;

@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate> {

	BOOL _allowsPhotoLibraryAccess;
	CNVisualIdentity* _visualIdentity;
	NSIndexPath* _activePhotoIndexPath;
	CNContactViewCache* _contactViewCache;
	id<CNPhotoPickerProviderGroupDelegate> _delegate;
	CNPhotoPickerVariantsManager* _variantsManager;
	id<AVTAvatarStore> _avatarStore;
	NSArray* _emojiSuggestionItems;
	NSArray* _providerGroups;
	NSMutableArray* _groupIsCollapsedState;

}

@property (nonatomic,readonly) NSArray * providerGroups;                                          //@synthesize providerGroups=_providerGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * groupIsCollapsedState;                              //@synthesize groupIsCollapsedState=_groupIsCollapsedState - In the implementation block
@property (assign,nonatomic) BOOL allowsPhotoLibraryAccess;                                       //@synthesize allowsPhotoLibraryAccess=_allowsPhotoLibraryAccess - In the implementation block
@property (nonatomic,retain) CNVisualIdentity * visualIdentity;                                   //@synthesize visualIdentity=_visualIdentity - In the implementation block
@property (nonatomic,retain) NSIndexPath * activePhotoIndexPath;                                  //@synthesize activePhotoIndexPath=_activePhotoIndexPath - In the implementation block
@property (nonatomic,readonly) CNContactViewCache * contactViewCache;                             //@synthesize contactViewCache=_contactViewCache - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerProviderGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNPhotoPickerVariantsManager * variantsManager;                    //@synthesize variantsManager=_variantsManager - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> avatarStore;                                    //@synthesize avatarStore=_avatarStore - In the implementation block
@property (assign,nonatomic) unsigned long long itemsPerRow; 
@property (nonatomic,retain) NSArray * emojiSuggestionItems;                                      //@synthesize emojiSuggestionItems=_emojiSuggestionItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)avatarStore;
-(id)removeItem:(id)arg1 ;
-(id<CNPhotoPickerProviderGroupDelegate>)delegate;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)setItemsPerRow:(unsigned long long)arg1 ;
-(unsigned long long)itemsPerRow;
-(void)setDelegate:(id<CNPhotoPickerProviderGroupDelegate>)arg1 ;
-(id)titleForSection:(long long)arg1 ;
-(CNContactViewCache *)contactViewCache;
-(CNPhotoPickerVariantsManager *)variantsManager;
-(id<AVTAvatarStore>)avatarStore;
-(void)photoPickerProviderGroupDidUpdate:(id)arg1 ;
-(void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2 ;
-(id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3 ;
-(CNVisualIdentity *)visualIdentity;
-(id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4 ;
-(void)loadProviderGroupsItemsForSize:(CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(BOOL)arg4 ;
-(id)actionTitleForSection:(long long)arg1 ;
-(long long)sectionIndexForProviderGroup:(id)arg1 ;
-(long long)sectionIndexForProviderGroupType:(long long)arg1 ;
-(id)suggestionsGroup;
-(id)indexPathsToReloadForUpdatedGroup:(id)arg1 ;
-(BOOL)isItemAtIndexPathAddItem:(id)arg1 ;
-(id)injectedItemsGroup;
-(id)providerGroupAtSection:(long long)arg1 ;
-(id)providerGroupAtIndexPath:(id)arg1 ;
-(id)providerItemAtIndexPath:(id)arg1 ;
-(id)monogramProviderDefaultItemWithSize:(CGSize)arg1 ;
-(id)monogramProviderMonogramItemWithSize:(CGSize)arg1 ;
-(id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2 ;
-(id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2 ;
-(void)updateGroupCollapsedStateForSection:(long long)arg1 ;
-(id)uniqueEmojiSuggestionItems:(id)arg1 ;
-(NSArray *)providerGroups;
-(void)setVisualIdentity:(CNVisualIdentity *)arg1 ;
-(NSIndexPath *)activePhotoIndexPath;
-(void)setActivePhotoIndexPath:(NSIndexPath *)arg1 ;
-(NSArray *)emojiSuggestionItems;
-(void)setEmojiSuggestionItems:(NSArray *)arg1 ;
-(NSMutableArray *)groupIsCollapsedState;
-(void)setGroupIsCollapsedState:(NSMutableArray *)arg1 ;
-(BOOL)allowsPhotoLibraryAccess;
-(void)setAllowsPhotoLibraryAccess:(BOOL)arg1 ;
@end

