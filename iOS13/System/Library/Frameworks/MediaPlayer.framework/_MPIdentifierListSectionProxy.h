/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <libobjc.A.dylib/MPMutableIdentifierListSection.h>

@class NSString, NSArray, MPSectionedIdentifierList, NSMutableArray;

@interface _MPIdentifierListSectionProxy : NSObject <MPMutableIdentifierListSection> {

	NSString* _sectionIdentifier;
	MPSectionedIdentifierList* _sectionedIdentifierList;
	NSMutableArray* _mutableItemIdentifiers;

}

@property (nonatomic,retain) NSMutableArray * mutableItemIdentifiers;                                   //@synthesize mutableItemIdentifiers=_mutableItemIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * sectionIdentifier;                                       //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) MPSectionedIdentifierList * sectionedIdentifierList;              //@synthesize sectionedIdentifierList=_sectionedIdentifierList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
-(void)removeItem:(id)arg1 ;
-(NSArray *)itemIdentifiers;
-(NSString *)sectionIdentifier;
-(MPSectionedIdentifierList *)sectionedIdentifierList;
-(id)initWithSection:(id)arg1 sectionedIdentifierList:(id)arg2 existingItemIdentifiers:(id)arg3 ;
-(void)insertItemsAtHead:(id)arg1 ;
-(void)insertItems:(id)arg1 afterItem:(id)arg2 ;
-(void)insertItemsAtTail:(id)arg1 ;
-(void)moveItemToHead:(id)arg1 ;
-(void)moveItem:(id)arg1 afterItem:(id)arg2 ;
-(void)moveItemToTail:(id)arg1 ;
-(void)updateSection;
-(void)updateItem:(id)arg1 ;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2 ;
-(NSMutableArray *)mutableItemIdentifiers;
-(void)setMutableItemIdentifiers:(NSMutableArray *)arg1 ;
@end

