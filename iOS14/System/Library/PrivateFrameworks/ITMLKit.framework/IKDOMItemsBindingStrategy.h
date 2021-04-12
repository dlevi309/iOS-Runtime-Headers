/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMBindingStrategy.h>

@class NSIndexSet, NSDictionary, IKChangeSet;

@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy {

	NSIndexSet* _autoHighlightedIndexes;
	NSDictionary* _usedAppPrototypesByIdentifier;
	IKChangeSet* _itemsChangeSet;

}

@property (nonatomic,copy) NSIndexSet * autoHighlightedIndexes;                         //@synthesize autoHighlightedIndexes=_autoHighlightedIndexes - In the implementation block
@property (nonatomic,retain) NSDictionary * usedAppPrototypesByIdentifier;              //@synthesize usedAppPrototypesByIdentifier=_usedAppPrototypesByIdentifier - In the implementation block
@property (nonatomic,retain) IKChangeSet * itemsChangeSet;                              //@synthesize itemsChangeSet=_itemsChangeSet - In the implementation block
-(IKChangeSet *)itemsChangeSet;
-(void)didResolveKeys:(id)arg1 ;
-(void)_updateChildDOMElements;
-(void)setItemsChangeSet:(IKChangeSet *)arg1 ;
-(NSDictionary *)usedAppPrototypesByIdentifier;
-(id)_appDataItemFromDataItem:(id)arg1 binding:(id)arg2 prototypeIdentifier:(id)arg3 autoHighlighted:(BOOL*)arg4 ;
-(void)setAutoHighlightedIndexes:(NSIndexSet *)arg1 ;
-(void)setUsedAppPrototypesByIdentifier:(NSDictionary *)arg1 ;
-(void)_reevaluateVisibleIndexRange;
-(NSIndexSet *)autoHighlightedIndexes;
-(id)initWithDOMBindingController:(id)arg1 ;
-(NSRange)visibleItemsRange;
-(void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByIdentifier:(id)arg3 changeSet:(id)arg4 ;
@end

