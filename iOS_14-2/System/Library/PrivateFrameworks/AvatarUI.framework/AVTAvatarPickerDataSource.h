/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)itemAtIndex:(long long)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(id<AVTAvatarStore>)store;
-(long long)numberOfItems;
-(BOOL)allowAddItem;
-(NSArray *)items;
-(id<AVTAvatarListItem>)addItem;
-(AVTUIEnvironment *)environment;
-(BOOL)canCreateMemoji;
-(AVTAvatarRecordDataSource *)recordDataSource;
-(void)setAddItem:(id<AVTAvatarListItem>)arg1 ;
-(id)initWithRecordDataSource:(id)arg1 environment:(id)arg2 allowAddItem:(BOOL)arg3 ;
-(void)reloadModel;
-(BOOL)isItemAtIndexAddItem:(long long)arg1 ;
-(long long)indexOfAddItem;
-(void)setAllowAddItem:(BOOL)arg1 ;
@end

