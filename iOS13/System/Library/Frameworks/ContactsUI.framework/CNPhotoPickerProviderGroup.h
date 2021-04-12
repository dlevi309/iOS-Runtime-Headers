/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/CNPhotoPickerProviderItemDelegate.h>

@protocol CNPhotoPickerProviderGroupDelegate, CNScheduler;
@class NSArray, NSMutableDictionary, CNPhotoPickerProviderItem, NSString;

@interface CNPhotoPickerProviderGroup : NSObject <CNPhotoPickerProviderItemDelegate> {

	BOOL _allowAddItem;
	BOOL _showCircleMask;
	long long _groupType;
	id<CNPhotoPickerProviderGroupDelegate> _delegate;
	unsigned long long _itemsPerRow;
	NSArray* _providers;
	NSArray* _displayItems;
	NSArray* _addedItems;
	NSArray* _removedItems;
	NSMutableDictionary* _itemsGroupedByProvider;
	NSArray* _availablePaddingItems;
	NSArray* _paddingItems;
	CNPhotoPickerProviderItem* _addItem;
	id<CNScheduler> _workQueue;
	id<CNScheduler> _callbackQueue;

}

@property (nonatomic,retain) NSArray * providers;                                                 //@synthesize providers=_providers - In the implementation block
@property (nonatomic,retain) NSArray * displayItems;                                              //@synthesize displayItems=_displayItems - In the implementation block
@property (nonatomic,retain) NSArray * addedItems;                                                //@synthesize addedItems=_addedItems - In the implementation block
@property (nonatomic,retain) NSArray * removedItems;                                              //@synthesize removedItems=_removedItems - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemsGroupedByProvider;                        //@synthesize itemsGroupedByProvider=_itemsGroupedByProvider - In the implementation block
@property (nonatomic,retain) NSArray * availablePaddingItems;                                     //@synthesize availablePaddingItems=_availablePaddingItems - In the implementation block
@property (nonatomic,retain) NSArray * paddingItems;                                              //@synthesize paddingItems=_paddingItems - In the implementation block
@property (nonatomic,retain) CNPhotoPickerProviderItem * addItem;                                 //@synthesize addItem=_addItem - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> workQueue;                                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> callbackQueue;                                     //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) long long groupType;                                               //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL allowAddItem;                                                 //@synthesize allowAddItem=_allowAddItem - In the implementation block
@property (nonatomic,readonly) BOOL showCircleMask;                                               //@synthesize showCircleMask=_showCircleMask - In the implementation block
@property (assign,nonatomic,__weak) id<CNPhotoPickerProviderGroupDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long itemsPerRow;                                      //@synthesize itemsPerRow=_itemsPerRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionsGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
+(id)animojiGroupWithProviders:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(id<CNPhotoPickerProviderGroupDelegate>)delegate;
-(void)setDelegate:(id<CNPhotoPickerProviderGroupDelegate>)arg1 ;
-(id<CNScheduler>)callbackQueue;
-(id<CNScheduler>)workQueue;
-(long long)numberOfItems;
-(CNPhotoPickerProviderItem *)addItem;
-(NSArray *)displayItems;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)providerItemDidUpdate:(id)arg1 ;
-(id)initWithProviders:(id)arg1 groupType:(long long)arg2 environment:(id)arg3 allowAddItem:(BOOL)arg4 ;
-(void)loadProvidersItemsForSize:(CGSize)arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(BOOL)arg4 ;
-(void)setItemsPerRow:(unsigned long long)arg1 ;
-(id)itemsForProviderIdentifier:(id)arg1 ;
-(void)reloadDisplayItemsNotifyDelegate:(BOOL)arg1 ;
-(void)prepareDisplayItems:(id)arg1 ;
-(id)addSymbolImageName;
-(id)providerItemAtIndex:(long long)arg1 ;
-(long long)addProviderItem:(id)arg1 ;
-(long long)removeProviderItem:(id)arg1 ;
-(long long)groupType;
-(BOOL)allowAddItem;
-(BOOL)showCircleMask;
-(unsigned long long)itemsPerRow;
-(NSArray *)providers;
-(void)setProviders:(NSArray *)arg1 ;
-(NSArray *)addedItems;
-(void)setAddedItems:(NSArray *)arg1 ;
-(NSArray *)removedItems;
-(void)setRemovedItems:(NSArray *)arg1 ;
-(NSMutableDictionary *)itemsGroupedByProvider;
-(void)setItemsGroupedByProvider:(NSMutableDictionary *)arg1 ;
-(NSArray *)availablePaddingItems;
-(void)setAvailablePaddingItems:(NSArray *)arg1 ;
-(NSArray *)paddingItems;
-(void)setPaddingItems:(NSArray *)arg1 ;
-(void)setAddItem:(CNPhotoPickerProviderItem *)arg1 ;
@end

