/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

@class NSString, NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSString * sectionIdentifier; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(void)removeItem:(id)arg1;
-(NSString *)sectionIdentifier;
-(NSArray *)itemIdentifiers;
-(void)updateSection;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToHead:(id)arg1;
-(void)moveItemToTail:(id)arg1;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)updateItem:(id)arg1;

@end

