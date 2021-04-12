/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(void)removeItem:(id)arg1;
-(NSArray *)itemIdentifiers;
-(NSString *)sectionIdentifier;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToHead:(id)arg1;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)moveItemToTail:(id)arg1;
-(void)updateSection;
-(void)updateItem:(id)arg1;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;

@end

