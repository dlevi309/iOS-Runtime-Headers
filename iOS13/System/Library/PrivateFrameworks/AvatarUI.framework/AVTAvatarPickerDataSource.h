/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTAvatarListItem;
@class AVTUIEnvironment, AVTAvatarRecordDataSource, NSArray;

@interface AVTAvatarPickerDataSource : NSObject {

	BOOL _allowAddItem;
	AVTUIEnvironment* _environment;
	AVTAvatarRecordDataSource* _recordDataSource;
	NSArray* _items;
	id<AVTAvatarListItem> _addItem;

}

@property (nonatomic,retain) NSArray * items;                                             //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) BOOL allowAddItem;                                           //@synthesize allowAddItem=_allowAddItem - In the implementation block
@property (nonatomic,retain) id<AVTAvatarListItem> addItem;                               //@synthesize addItem=_addItem - In the implementation block
@property (nonatomic,readonly) AVTUIEnvironment * environment;                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarStore> store; 
@property (nonatomic,readonly) AVTAvatarRecordDataSource * recordDataSource;              //@synthesize recordDataSource=_recordDataSource - In the implementation block
-(AVTUIEnvironment *)environment;
-(id<AVTAvatarStore>)store;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)numberOfItems;
-(id<AVTAvatarListItem>)addItem;
-(id)itemAtIndex:(long long)arg1 ;
-(BOOL)allowAddItem;
-(void)setAddItem:(id<AVTAvatarListItem>)arg1 ;
-(BOOL)canCreateMemoji;
-(AVTAvatarRecordDataSource *)recordDataSource;
-(id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(void)reloadModel;
-(BOOL)isItemAtIndexAddItem:(long long)arg1 ;
-(long long)indexOfAddItem;
-(void)setAllowAddItem:(BOOL)arg1 ;
@end

